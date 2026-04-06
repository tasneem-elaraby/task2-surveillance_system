#!/usr/bin/env python3

import time
from collections import defaultdict

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import String

# Interval (in seconds) between status updates
MONITOR_INTERVAL = 5.0


class SystemMonitorNode(Node):
    def __init__(self):
        super().__init__('system_monitor_node')

        # Dictionary to count messages per topic
        self.counts = defaultdict(int)

        # Dictionary to store last received timestamp per topic
        self.last_ts = defaultdict(float)

        # Store node start time (for uptime calculation)
        self.start_ts = time.time()

        # Topics with Image messages
        topics_image = ['/camera_frames']

        # Topics with String messages
        topics_string = [
            '/detected_objects',
            '/object_depth',
            '/scene_analysis',
            '/security_event',
            '/security_alert',
        ]

        # Create subscriptions for Image topics
        for t in topics_image:
            self.create_subscription(Image, t, self._make_cb(t), 10)

        # Create subscriptions for String topics
        for t in topics_string:
            self.create_subscription(String, t, self._make_cb(t), 10)

        # Timer to periodically print system status
        self.create_timer(MONITOR_INTERVAL, self._print_status)

        self.get_logger().info("System Monitor started")

    # Factory function to create a callback for each topic
    def _make_cb(self, topic):
        def cb(msg):
            # Increment message count for this topic
            self.counts[topic] += 1

            # Update last received time
            self.last_ts[topic] = time.time()
        return cb

    # Function to print system status
    def _print_status(self):
        now = time.time()
        elapsed = now - self.start_ts  # total uptime

        print("\n--- System Status ---")
        print(f"Uptime: {int(elapsed)} sec\n")

        topics = [
            '/camera_frames',
            '/detected_objects',
            '/object_depth',
            '/scene_analysis',
            '/security_event',
            '/security_alert',
        ]

        for t in topics:
            count = self.counts[t]

            # Calculate message rate (Hz)
            rate = count / elapsed if elapsed > 0 else 0

            # Time since last message
            age = now - self.last_ts[t] if self.last_ts[t] else -1

            # Determine topic status
            if age < 0:
                state = "no data"
            elif age < MONITOR_INTERVAL * 1.5:
                state = "active"
            else:
                state = "delayed"

            # Print topic info
            print(f"{t}")
            print(f"  messages: {count}")
            print(f"  rate: {rate:.2f} Hz")
            print(f"  last update: {age:.1f} sec ago" if age >= 0 else "  last update: N/A")
            print(f"  status: {state}\n")


def main(args=None):
    rclpy.init(args=args)

    node = SystemMonitorNode()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
