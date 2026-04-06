#!/usr/bin/env python3
"""
Node 8: System Monitor Node
-----------------------------
Responsibility:
    - Subscribe to all main topics
    - Track message arrival rates (health check)
    - Print a periodic status dashboard to the terminal

Topics Subscribed:
    /camera_frames
    /detected_objects
    /object_depth
    /scene_analysis
    /security_event
    /security_alert
"""

import json
import time
from collections import defaultdict

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import String

MONITOR_INTERVAL = 5.0   # seconds between status printouts


class SystemMonitorNode(Node):
    def __init__(self):
        super().__init__('system_monitor_node')

        self.counts   = defaultdict(int)   # msg count per topic
        self.last_ts  = defaultdict(float) # last message time per topic
        self.start_ts = time.time()

        topics_image  = ['/camera_frames']
        topics_string = [
            '/detected_objects',
            '/object_depth',
            '/scene_analysis',
            '/security_event',
            '/security_alert',
        ]

        for t in topics_image:
            self.create_subscription(Image,  t, self._make_cb(t), 10)
        for t in topics_string:
            self.create_subscription(String, t, self._make_cb(t), 10)

        self.create_timer(MONITOR_INTERVAL, self._print_status)
        self.get_logger().info('SystemMonitorNode ready – status every '
                               f'{MONITOR_INTERVAL}s')

    def _make_cb(self, topic: str):
        def cb(msg):
            self.counts[topic]  += 1
            self.last_ts[topic]  = time.time()
        return cb

    def _print_status(self):
        now     = time.time()
        elapsed = now - self.start_ts
        sep = '─' * 58

        lines = [
            '',
            sep,
            f'  🔍  SURVEILLANCE SYSTEM MONITOR  |  uptime {elapsed:.0f}s',
            sep,
            f'  {"Topic":<30}  {"Msgs":>6}  {"Hz":>6}  {"Age":>6}',
            f'  {"─"*30}  {"─"*6}  {"─"*6}  {"─"*6}',
        ]

        all_topics = [
            '/camera_frames', '/detected_objects', '/object_depth',
            '/scene_analysis', '/security_event', '/security_alert',
        ]
        for t in all_topics:
            cnt  = self.counts[t]
            hz   = cnt / elapsed if elapsed > 0 else 0.0
            age  = now - self.last_ts[t] if self.last_ts[t] else -1
            age_str = f'{age:.1f}s' if age >= 0 else 'N/A'
            status = '✅' if age >= 0 and age < MONITOR_INTERVAL * 1.5 else '⚠️ '
            lines.append(f'  {status} {t:<28}  {cnt:>6}  {hz:>5.1f}  {age_str:>6}')

        lines.append(sep)
        print('\n'.join(lines))


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
