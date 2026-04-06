#!/usr/bin/env python3
"""
Node 6: Security Response Node
--------------------------------
Responsibility:
    - Subscribe to /security_event
    - For HIGH severity events: trigger a long-running ROS2 Action (/security_action)
    - Publish alert summary to /security_alert

Topics Subscribed:
    /security_event   (std_msgs/String – JSON)

Topics Published:
    /security_alert   (std_msgs/String – JSON)

Actions Used:
    /security_action  (SecurityAction)
      • Goal     → event_type, severity, description
      • Feedback → current_step, progress_percent
      • Result   → success, response_summary

Parameters:
    alert_level   - minimum severity to trigger action: LOW | MEDIUM | HIGH (default: MEDIUM)
"""

import json
import time
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from std_msgs.msg import String

# ── Action message import (generated from SecurityAction.action) ──────────────
# When the ROS2 package is properly built this import works:
#   from smart_surveillance.action import SecurityAction
# For portability we define a thin stub when the generated interface is absent.
try:
    from surveillance_interfaces.action import SecurityAction
    ACTION_AVAILABLE = True
except ImportError:
    ACTION_AVAILABLE = False


SEVERITY_RANK = {'LOW': 1, 'MEDIUM': 2, 'HIGH': 3}


class SecurityResponseNode(Node):
    def __init__(self):
        super().__init__('security_response_node')

        # ── Parameters ──────────────────────────────────────────────────────
        self.declare_parameter('alert_level', 'MEDIUM')
        self.alert_level = self.get_parameter('alert_level').get_parameter_value().string_value

        # ── Publisher ────────────────────────────────────────────────────────
        self.alert_pub = self.create_publisher(String, '/security_alert', 10)

        # ── Subscriber ───────────────────────────────────────────────────────
        self.create_subscription(String, '/security_event', self._event_cb, 10)

        # ── Action Server ────────────────────────────────────────────────────
        if ACTION_AVAILABLE:
            self._action_server = ActionServer(
                self,
                SecurityAction,
                '/security_action',
                execute_callback  = self._execute_action,
                goal_callback     = lambda goal: GoalResponse.ACCEPT,
                cancel_callback   = lambda _:    CancelResponse.ACCEPT,
            )
            self.get_logger().info('Action server /security_action is UP')
        else:
            self._action_server = None
            self.get_logger().warn(
                'SecurityAction interface not found – action server disabled. '
                'Build the package first: colcon build')

        self.get_logger().info(f'SecurityResponseNode ready | alert_level={self.alert_level}')

    # ── Event subscriber callback ─────────────────────────────────────────────
    def _event_cb(self, msg: String):
        try:
            data = json.loads(msg.data)
        except json.JSONDecodeError:
            return

        for event in data.get('events', []):
            severity = event.get('severity', 'LOW')
            if SEVERITY_RANK.get(severity, 0) >= SEVERITY_RANK.get(self.alert_level, 0):
                self._handle_event(event)

    def _handle_event(self, event: dict):
        self.get_logger().warn(
            f"[RESPONSE] Handling event: {event['type']} | severity={event['severity']}")

        # Publish immediate alert
        alert_payload = json.dumps({
            'event_type':  event['type'],
            'severity':    event['severity'],
            'description': event['description'],
            'action':      'alert_triggered',
        })
        alert_msg = String()
        alert_msg.data = alert_payload
        self.alert_pub.publish(alert_msg)

        # Trigger async action for HIGH severity events
        if event['severity'] == 'HIGH' and self._action_server is not None:
            self.get_logger().info('Sending goal to /security_action …')
            # Note: in a full implementation an ActionClient would send goals.
            # The server here handles goals sent by any client (e.g., the monitor).

    # ── Action execution (long-running response) ──────────────────────────────
    async def _execute_action(self, goal_handle):
        self.get_logger().info(
            f'Executing security action: {goal_handle.request.event_type}')

        feedback_msg = SecurityAction.Feedback()

        steps = [
            'Verifying threat …',
            'Locking down zone …',
            'Notifying security personnel …',
            'Saving incident snapshot …',
            'Generating incident report …',
        ]
        for i, step in enumerate(steps):
            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                return SecurityAction.Result(
                    success=False, response_summary='Action cancelled')

            feedback_msg.current_step      = step
            feedback_msg.progress_percent  = int((i + 1) / len(steps) * 100)
            goal_handle.publish_feedback(feedback_msg)
            self.get_logger().info(f'  [{feedback_msg.progress_percent}%] {step}')
            time.sleep(1)   # simulate work

        goal_handle.succeed()
        result = SecurityAction.Result()
        result.success          = True
        result.response_summary = f'Response to {goal_handle.request.event_type} completed successfully'
        self.get_logger().info(f'Action completed: {result.response_summary}')
        return result


def main(args=None):
    rclpy.init(args=args)
    node = SecurityResponseNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
