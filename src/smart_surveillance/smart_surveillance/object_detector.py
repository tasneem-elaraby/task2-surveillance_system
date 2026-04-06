#!/usr/bin/env python3

import json
import cv2
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import String
from cv_bridge import CvBridge

try:
    from ultralytics import YOLO
    YOLO_AVAILABLE = True
except ImportError:
    YOLO_AVAILABLE = False


# ── colour palette for bounding boxes (cycles through labels) ──────────────
COLOURS = [
    (0, 255, 0),    # green
    (0, 165, 255),  # orange
    (255, 0, 0),    # blue
    (0, 0, 255),    # red
    (255, 255, 0),  # cyan
    (255, 0, 255),  # magenta
    (0, 255, 255),  # yellow
]


class ObjectDetectionNode(Node):
    def __init__(self):
        super().__init__('object_detection_node')

        # Parameters
        self.declare_parameter('confidence_threshold', 0.5)
        self.declare_parameter('model_path', 'yolov8n.pt')

        self.conf_threshold = self.get_parameter('confidence_threshold').get_parameter_value().double_value
        model_path = self.get_parameter('model_path').get_parameter_value().string_value

        # Load YOLO model
        if YOLO_AVAILABLE:
            self.model = YOLO(model_path)
            self.get_logger().info(f'YOLO model loaded: {model_path}')
        else:
            self.model = None
            self.get_logger().warn('ultralytics not installed – running in DEMO mode')

        # Publisher and Subscriber
        self.publisher_ = self.create_publisher(String, '/detected_objects', 10)
        self.subscription = self.create_subscription(
            Image,
            '/camera_frames',
            self.detection_callback,
            10)

        self.bridge = CvBridge()

        # label → colour index map so each label always gets the same colour
        self._label_colour_map: dict[str, tuple] = {}
        self._colour_idx = 0

        self.get_logger().info('ObjectDetectionNode ready.')

    # ── helpers ────────────────────────────────────────────────────────────

    def _get_colour(self, label: str) -> tuple:
        """Return a consistent BGR colour for a given label."""
        if label not in self._label_colour_map:
            self._label_colour_map[label] = COLOURS[self._colour_idx % len(COLOURS)]
            self._colour_idx += 1
        return self._label_colour_map[label]

    def _draw_detections(self, frame, detections: list):
        """
        Draw bounding boxes + labels on a copy of the frame and show it.
        Each unique label gets its own colour.
        Overlay also shows total detection count in the top-left corner.
        """
        vis = frame.copy()

        for det in detections:
            label      = det['label']
            confidence = det['confidence']
            bbox       = det['bbox']

            x1 = int(bbox['x1'])
            y1 = int(bbox['y1'])
            x2 = int(bbox['x2'])
            y2 = int(bbox['y2'])

            colour = self._get_colour(label)

            # Bounding box
            cv2.rectangle(vis, (x1, y1), (x2, y2), colour, 2)

            # Label background pill
            text  = f"{label} {confidence:.2f}"
            (tw, th), baseline = cv2.getTextSize(text, cv2.FONT_HERSHEY_SIMPLEX, 0.55, 1)
            cv2.rectangle(vis,
                          (x1, y1 - th - baseline - 4),
                          (x1 + tw + 4, y1),
                          colour, -1)

            # Label text (black for readability on coloured background)
            cv2.putText(vis, text,
                        (x1 + 2, y1 - baseline - 2),
                        cv2.FONT_HERSHEY_SIMPLEX, 0.55,
                        (0, 0, 0), 1, cv2.LINE_AA)

        # Top-left counter
        count_text = f"Objects detected: {len(detections)}"
        cv2.putText(vis, count_text,
                    (10, 28),
                    cv2.FONT_HERSHEY_SIMPLEX, 0.75,
                    (255, 255, 255), 2, cv2.LINE_AA)

        cv2.imshow("Object Detection", vis)
        cv2.waitKey(1)   # 1 ms pump — keeps window responsive without blocking ROS

    # ── main callback ──────────────────────────────────────────────────────

    def detection_callback(self, msg: Image):
        frame = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
        detections = []

        if self.model is not None:
            results = self.model(frame, conf=self.conf_threshold, verbose=False)
            for result in results:
                for box in result.boxes:
                    detections.append({
                        'label':      result.names[int(box.cls[0])],
                        'confidence': float(box.conf[0]),
                        'bbox': {
                            'x1': float(box.xyxy[0][0]),
                            'y1': float(box.xyxy[0][1]),
                            'x2': float(box.xyxy[0][2]),
                            'y2': float(box.xyxy[0][3]),
                        }
                    })
        else:
            # Demo / fallback when YOLO is not installed
            import random
            if random.random() > 0.5:
                detections.append({
                    'label':      'person',
                    'confidence': 0.92,
                    'bbox': {'x1': 50, 'y1': 50, 'x2': 200, 'y2': 400}
                })

        # ── NEW: draw on screen ────────────────────────────────────────────
        self._draw_detections(frame, detections)
        # ──────────────────────────────────────────────────────────────────

        payload = json.dumps({
            'stamp':      msg.header.stamp.sec,
            'detections': detections
        })

        out_msg = String()
        out_msg.data = payload
        self.publisher_.publish(out_msg)

        if detections:
            labels = [d['label'] for d in detections]
            self.get_logger().info(f'Detected: {labels}')

    def destroy_node(self):
        """Clean up the OpenCV window when the node shuts down."""
        cv2.destroyAllWindows()
        super().destroy_node()


def main(args=None):
    rclpy.init(args=args)
    node = ObjectDetectionNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()