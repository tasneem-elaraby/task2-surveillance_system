#!/usr/bin/env python3
"""
Node 5: Event Manager Node
----------------------------
Responsibility:
    - Subscribe to /scene_analysis
    - Detect security events:
        * Person in restricted area
        * Object too close to camera
        * Unusual / unknown object detected
    - Publish events to /security_event

Topics Subscribed:
    /scene_analysis    (std_msgs/String – JSON)

Topics Published:
    /security_event    (std_msgs/String – JSON)

Parameters:
    restricted_objects  - comma-separated labels considered restricted
                          (default: 'knife,gun,scissors')
"""

import json
import rclpy
from rclpy.node import Node
from std_msgs.msg import String


class EventManagerNode(Node):
    def __init__(self):
        super().__init__('event_manager_node')

        # ── Parameters ──────────────────────────────────────────────────────
        self.declare_parameter('restricted_objects', 'knife,gun,scissors')
        restricted_str = self.get_parameter('restricted_objects').get_parameter_value().string_value
        self.restricted = set(r.strip().lower() for r in restricted_str.split(','))

        # ── Publisher / Subscriber ───────────────────────────────────────────
        self.publisher_   = self.create_publisher(String, '/security_event', 10)
        self.subscription = self.create_subscription(
            String, '/scene_analysis', self._scene_cb, 10)

        self.get_logger().info(f'EventManagerNode ready | restricted={self.restricted}')

    def _scene_cb(self, msg: String):
        try:
            scene = json.loads(msg.data)
        except json.JSONDecodeError:
            self.get_logger().error('Bad JSON from /scene_analysis')
            return

        events = []

        for obj in scene.get('objects', []):
            label      = obj['label'].lower()
            too_close  = obj.get('too_close',  False)
            unusual    = obj.get('unusual',    False)
            depth_m    = obj.get('depth_m',    99.0)

            # Rule 1 – Restricted object detected
            if label in self.restricted:
                events.append({
                    'type':        'RESTRICTED_OBJECT',
                    'severity':    'HIGH',
                    'description': f'Restricted object detected: {label}',
                    'object':      obj,
                })

            # Rule 2 – Any object too close
            if too_close:
                events.append({
                    'type':        'OBJECT_TOO_CLOSE',
                    'severity':    'MEDIUM',
                    'description': f'{label} is too close ({depth_m:.2f}m)',
                    'object':      obj,
                })

            # Rule 3 – Person in restricted zone (simplified: unusual + person)
            if label == 'person' and unusual:
                events.append({
                    'type':        'PERSON_IN_RESTRICTED_AREA',
                    'severity':    'HIGH',
                    'description': 'Person detected in restricted area',
                    'object':      obj,
                })

            # Rule 4 – Unknown / unusual object
            if unusual and label not in self.restricted:
                events.append({
                    'type':        'UNUSUAL_OBJECT',
                    'severity':    'LOW',
                    'description': f'Unusual object detected: {label}',
                    'object':      obj,
                })

        if events:
            payload = json.dumps({
                'stamp':  scene.get('stamp', 0),
                'events': events,
            })
            out_msg = String()
            out_msg.data = payload
            self.publisher_.publish(out_msg)
            for e in events:
                self.get_logger().warn(f"[EVENT] {e['type']} | {e['description']}")


def main(args=None):
    rclpy.init(args=args)
    node = EventManagerNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
