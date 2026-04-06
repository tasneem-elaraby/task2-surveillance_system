#!/usr/bin/env python3

import json
import time
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer, ActionClient, CancelResponse, GoalResponse
from std_msgs.msg import String

try:
    from surveillance_interfaces.action import SecurityAction
    ACTION_AVAILABLE = True
except ImportError:
    ACTION_AVAILABLE = False

SEVERITY_RANK = {'LOW': 1, 'MEDIUM': 2, 'HIGH': 3}

class SecurityResponseNode(Node):
    def __init__(self):
        super().__init__('security_response_node')

        # باراميتر مستوى التنبيه
        self.declare_parameter('alert_level', 'MEDIUM')
        self.alert_level = self.get_parameter('alert_level').get_parameter_value().string_value

        # Publisher للـ Alerts
        self.alert_pub = self.create_publisher(String, '/security_alert', 10)
        # Subscriber للأحداث
        self.create_subscription(String, '/security_event', self._event_cb, 10)

        if ACTION_AVAILABLE:
            # Action Server
            self._action_server = ActionServer(
                self, SecurityAction, '/security_action',
                execute_callback=self._execute_action,
                goal_callback=lambda goal: GoalResponse.ACCEPT,
                cancel_callback=lambda _: CancelResponse.ACCEPT,
            )
            
            # Action Client
            self._action_client = ActionClient(self, SecurityAction, '/security_action')
            self.get_logger().info('Action Server & Client are UP')
        else:
            self.get_logger().warn('SecurityAction interface not found! Run colcon build.')

    # Callback للأحداث
    def _event_cb(self, msg: String):
        try:
            data = json.loads(msg.data)
        except json.JSONDecodeError:
            self.get_logger().error("Received invalid JSON")
            return

        for event in data.get('events', []):
            severity = event.get('severity', 'LOW')
            if SEVERITY_RANK.get(severity, 0) >= SEVERITY_RANK.get(self.alert_level, 0):
                self._handle_event(event)

    # التعامل مع الحدث
    def _handle_event(self, event: dict):
        self.get_logger().warn(f"Handling event: {event['type']} | severity={event['severity']}")

        # إرسال Alert
        alert_msg = String()
        alert_msg.data = json.dumps({'status': 'ALERT', 'event': event['type']})
        self.alert_pub.publish(alert_msg)

        # لو HIGH → نرسل Goal للـ Action
        if event['severity'] == 'HIGH' and ACTION_AVAILABLE:
            self.send_action_goal(event)

    # إرسال Goal للـ Action Server
    def send_action_goal(self, event):
        goal_msg = SecurityAction.Goal()
        goal_msg.event_type = event['type']
        goal_msg.severity = event['severity']
        goal_msg.description = event.get('description', 'No details')

        self.get_logger().info(f"Sending Action Goal for: {event['type']}")
        self._action_client.wait_for_server()
        self._action_client.send_goal_async(goal_msg)

    # تنفيذ Action
    async def _execute_action(self, goal_handle):
        self.get_logger().info(f'Executing: {goal_handle.request.event_type}...')
        feedback_msg = SecurityAction.Feedback()
        
        steps = ['Verifying...', 'Locking Doors...', 'Notifying Authorities...']
        for i, step in enumerate(steps):
            feedback_msg.current_step = step
            feedback_msg.progress_percent = int((i + 1) / len(steps) * 100)

            # ✅ الطباعة في التيرمنال
            self.get_logger().info(f"{step} | {feedback_msg.progress_percent}%")

            # نشر الـ feedback
            goal_handle.publish_feedback(feedback_msg)
            time.sleep(1)

        # إنهاء Goal
        goal_handle.succeed()
        result = SecurityAction.Result()
        result.success = True
        result.response_summary = "Action Completed Successfully"
        return result

# Main
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