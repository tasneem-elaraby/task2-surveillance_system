#!/usr/bin/env python3

import json
import numpy as np
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import String
from cv_bridge import CvBridge
import cv2

try:
    import torch
    from depth_anything_v2.dpt import DepthAnythingV2 as _DAV2
    DEPTH_AVAILABLE = True
except ImportError:
    DEPTH_AVAILABLE = False


MODEL_CONFIGS = {
    'Small': {'encoder': 'vits', 'features': 64,  'out_channels': [48, 96, 192, 384]},
    'Base':  {'encoder': 'vitb', 'features': 128, 'out_channels': [96, 192, 384, 768]},
    'Large': {'encoder': 'vitl', 'features': 256, 'out_channels': [256, 512, 1024, 1024]},
}


class DepthEstimationNode(Node):
    def __init__(self):
        super().__init__('depth_estimation_node')

        # Parameters
        self.declare_parameter('depth_model_path', 'Small')
        model_size = self.get_parameter('depth_model_path').get_parameter_value().string_value

        # Load model
        self.model = None
        if DEPTH_AVAILABLE:
            cfg = MODEL_CONFIGS.get(model_size, MODEL_CONFIGS['Small'])
            self.model = _DAV2(**cfg)

            model_path = f'depth_anything_v2_vit{cfg["encoder"][3]}.pth'
            self.model.load_state_dict(
                torch.load(model_path, map_location='cpu')
            )
            self.model.eval()

            self.get_logger().info(f'DepthAnythingV2 loaded | size={model_size}')
        else:
            self.get_logger().warn('DepthAnythingV2 not installed – DEMO mode active')

        # ROS interfaces
        self.publisher_ = self.create_publisher(String, '/object_depth', 10)
        self.subscription = self.create_subscription(
            Image, '/camera_frames', self.depth_callback, 10
        )

        self.bridge = CvBridge()

        # Create OpenCV window
        cv2.namedWindow("Depth Map", cv2.WINDOW_NORMAL)

        self.get_logger().info('DepthEstimationNode ready.')

    def depth_callback(self, msg: Image):
        # Convert ROS image → OpenCV
        frame = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')

        # ── Depth inference ─────────────────────────────
        if self.model is not None:
            depth_map = self.model.infer_image(frame)
        else:
            # Demo fallback (gradient depth)
            h, w = frame.shape[:2]
            y_idx = np.tile(np.linspace(0, 1, h).reshape(-1, 1), (1, w))
            depth_map = (y_idx * 10.0).astype(np.float32)

        # ── Visualization (Heatmap) ─────────────────────
        depth_vis = depth_map.copy()

        # Normalize to 0–255
        depth_vis = depth_vis - np.min(depth_vis)
        depth_vis = depth_vis / (np.max(depth_vis) + 1e-6)
        depth_vis = (depth_vis * 255).astype(np.uint8)

        # Apply heatmap
        depth_colormap = cv2.applyColorMap(depth_vis, cv2.COLORMAP_JET)

        # Show window
        cv2.imshow("Depth Map", depth_colormap)
        cv2.waitKey(1)

        # ── Depth statistics ────────────────────────────
        h, w = depth_map.shape[:2]
        cx, cy = w // 2, h // 2

        crop = depth_map[cy-30:cy+30, cx-30:cx+30]

        payload = json.dumps({
            'stamp': msg.header.stamp.sec,
            'mean_depth_m': float(np.mean(depth_map)),
            'min_depth_m': float(np.min(depth_map)),
            'max_depth_m': float(np.max(depth_map)),
            'center_depth_m': float(np.mean(crop)) if crop.size > 0 else 0.0,
            'depth_map_shape': list(depth_map.shape),
            'depth_map_flat': depth_map.flatten().tolist(),
        })

        out_msg = String()
        out_msg.data = payload
        self.publisher_.publish(out_msg)

        self.get_logger().debug(
            f'Depth published | mean={np.mean(depth_map):.2f}m'
        )


def main(args=None):
    rclpy.init(args=args)
    node = DepthEstimationNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()