#!/usr/bin/env python3
"""
Node 7: Event Logger Node
--------------------------
Responsibility:
    - Subscribe to /security_event and /security_alert
    - Store all events in a log file
    - Print structured logs to console

Topics Subscribed:
    /security_event   (std_msgs/String – JSON)
    /security_alert   (std_msgs/String – JSON)
"""

import json
import os
from datetime import datetime

import rclpy
from rclpy.node import Node
from std_msgs.msg import String

LOG_DIR  = os.path.expanduser('~/surveillance_logs')
LOG_FILE = os.path.join(LOG_DIR, 'events.log')


class EventLoggerNode(Node):
    def __init__(self):
        super().__init__('event_logger_node')

        os.makedirs(LOG_DIR, exist_ok=True)

        self.create_subscription(String, '/security_event', self._event_cb, 10)
        self.create_subscription(String, '/security_alert', self._alert_cb, 10)

        self.get_logger().info(f'EventLoggerNode ready | log → {LOG_FILE}')

    # ── Helpers ───────────────────────────────────────────────────────────────
    def _write(self, category: str, data: dict):
        ts   = datetime.now().strftime('%Y-%m-%d %H:%M:%S')
        line = f'[{ts}] [{category}] {json.dumps(data)}\n'
        with open(LOG_FILE, 'a') as f:
            f.write(line)
        self.get_logger().info(line.strip())

    # ── Callbacks ─────────────────────────────────────────────────────────────
    def _event_cb(self, msg: String):
        try:
            data = json.loads(msg.data)
            for event in data.get('events', []):
                self._write('SECURITY_EVENT', event)
        except json.JSONDecodeError:
            self.get_logger().error('Bad JSON on /security_event')

    def _alert_cb(self, msg: String):
        try:
            data = json.loads(msg.data)
            self._write('SECURITY_ALERT', data)
        except json.JSONDecodeError:
            self.get_logger().error('Bad JSON on /security_alert')


def main(args=None):
    rclpy.init(args=args)
    node = EventLoggerNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
