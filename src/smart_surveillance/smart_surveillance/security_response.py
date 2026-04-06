#!/usr/bin/env python3

import json
import time
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer, ActionClient, CancelResponse, GoalResponse
from std_msgs.msg import String

# Try to import the Action interface
try:
    from surveillance_interfaces.action import SecurityAction
    ACTION_AVAILABLE = True
except ImportError:
    ACTION_AVAILABLE = False

# Severity ranking for comparison
SEVERITY_RANK = {'LOW': 1, 'MEDIUM': 2, 'HIGH': 3}


class SecurityResponseNode(Node):
    def __init__(self):
        super().__init__('security_response_node')

        # Declare parameter: minimum severity to trigger response
        self.declare_parameter('alert_level', 'MEDIUM')
        self.alert_level = self.get_parameter('alert_level').get_parameter_value().string_value

        # Publisher: sends alerts to /security_alert topic
        self.alert_pub = self.create_publisher(String, '/security_alert', 10)

        # Subscriber: listens for events from /security_event topic
        self.create_subscription(String, '/security_event', self._event_cb, 10)

        # Initialize Action Server and Client if available
        if ACTION_AVAILABLE:
            # Action Server: handles execution of long-running tasks
            self._action_server = ActionServer(
                self,
                SecurityAction,
                '/security_action',
                execute_callback=self._execute_action,
                goal_callback=lambda goal: GoalResponse.ACCEPT,   # accept all goals
                cancel_callback=lambda _: CancelResponse.ACCEPT   # accept all cancel requests
            )

            # Action Client: sends goals to the action server
            self._action_client = ActionClient(self, SecurityAction, '/security_action')

            self.get_logger().info('Action Server & Client are running')
        else:
            self.get_logger().warn('SecurityAction interface not found! Run colcon build.')

    # Callback function: triggered when a message arrives on /security_event
    def _event_cb(self, msg: String):
        try:
            # Convert JSON string to Python dictionary
            data = json.loads(msg.data)
        except json.JSONDecodeError:
            self.get_logger().error("Received invalid JSON")
            return

        # Loop through all events in the message
        for event in data.get('events', []):
            severity = event.get('severity', 'LOW')

            # Check if event severity meets threshold
            if SEVERITY_RANK.get(severity, 0) >= SEVERITY_RANK.get(self.alert_level, 0):
                self._handle_event(event)

    # Handle individual event
    def _handle_event(self, event: dict):
        self.get_logger().warn(f"Handling event: {event['type']} | severity={event['severity']}")

        # Create alert message as JSON string
        alert_msg = String()
        alert_msg.data = json.dumps({
            'status': 'ALERT',
            'event': event['type']
        })

        # Publish alert
        self.alert_pub.publish(alert_msg)

        # If severity is HIGH → trigger action
        if event['severity'] == 'HIGH' and ACTION_AVAILABLE:
            self.send_action_goal(event)

    # Send goal to Action Server (Client side)
    def send_action_goal(self, event):
        goal_msg = SecurityAction.Goal()

        # Fill goal data
        goal_msg.event_type = event['type']
        goal_msg.severity = event['severity']
        goal_msg.description = event.get('description', 'No details')

        self.get_logger().info(f"Sending Action Goal for: {event['type']}")

        # Wait until server is ready
        self._action_client.wait_for_server()

        # Send goal asynchronously
        self._action_client.send_goal_async(goal_msg)

    # Action Server execution (Server side)
    async def _execute_action(self, goal_handle):
        self.get_logger().info(f'Executing: {goal_handle.request.event_type}...')

        feedback_msg = SecurityAction.Feedback()

        # Simulated steps of response
        steps = [
            'Verifying...',
            'Locking Doors...',
            'Notifying Authorities...'
        ]

        # Execute each step with feedback
        for i, step in enumerate(steps):
            feedback_msg.current_step = step
            feedback_msg.progress_percent = int((i + 1) / len(steps) * 100)

            # Print progress in terminal
            self.get_logger().info(f"{step} | {feedback_msg.progress_percent}%")

            # Send feedback to client
            goal_handle.publish_feedback(feedback_msg)

            # Simulate processing time
            time.sleep(1)

        # Mark goal as succeeded
        goal_handle.succeed()

        # Create result message
        result = SecurityAction.Result()
        result.success = True
        result.response_summary = "Action Completed Successfully"

        return result


# Main function
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
