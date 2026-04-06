"""
launch/surveillance_system.launch.py
--------------------------------------
Launches all 8 nodes of the Smart Surveillance System with default parameters.

Usage:
    ros2 launch smart_surveillance surveillance_system.launch.py

Override parameters:
    ros2 launch smart_surveillance surveillance_system.launch.py \
        camera_source:=/path/to/video.mp4 \
        confidence_threshold:=0.6 \
        danger_distance:=2.0
"""

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    # ── Declare overrideable arguments ───────────────────────────────────────
    args = [
        DeclareLaunchArgument('camera_source',        default_value='0'),
        DeclareLaunchArgument('frame_rate',            default_value='10.0'),
        DeclareLaunchArgument('confidence_threshold',  default_value='0.5'),
        DeclareLaunchArgument('model_path',            default_value='yolov8n.pt'),
        DeclareLaunchArgument('depth_model_path',      default_value='Small'),
        DeclareLaunchArgument('danger_distance',       default_value='1.5'),
        DeclareLaunchArgument('restricted_objects',    default_value='knife,gun,scissors'),
        DeclareLaunchArgument('alert_level',           default_value='MEDIUM'),
    ]

    # ── Node definitions ─────────────────────────────────────────────────────
    nodes = [
        Node(
            package='smart_surveillance',
            executable='camera_stream',
            name='camera_stream_node',
            output='screen',
            parameters=[{
                'camera_source': LaunchConfiguration('camera_source'),
                'frame_rate':    LaunchConfiguration('frame_rate'),
            }]
        ),
        Node(
            package='smart_surveillance',
            executable='object_detector',
            name='object_detection_node',
            output='screen',
            parameters=[{
                'confidence_threshold': LaunchConfiguration('confidence_threshold'),
                'model_path':           LaunchConfiguration('model_path'),
            }]
        ),
        Node(
            package='smart_surveillance',
            executable='depth_estimator',
            name='depth_estimation_node',
            output='screen',
            parameters=[{
                'depth_model_path': LaunchConfiguration('depth_model_path'),
            }]
        ),
        Node(
            package='smart_surveillance',
            executable='scene_analyzer',
            name='scene_analysis_node',
            output='screen',
            parameters=[{
                'danger_distance': LaunchConfiguration('danger_distance'),
            }]
        ),
        Node(
            package='smart_surveillance',
            executable='event_manager',
            name='event_manager_node',
            output='screen',
            parameters=[{
                'restricted_objects': LaunchConfiguration('restricted_objects'),
            }]
        ),
        Node(
            package='smart_surveillance',
            executable='security_response',
            name='security_response_node',
            output='screen',
            parameters=[{
                'alert_level': LaunchConfiguration('alert_level'),
            }]
        ),
        Node(
            package='smart_surveillance',
            executable='event_logger',
            name='event_logger_node',
            output='screen',
        ),
        Node(
            package='smart_surveillance',
            executable='system_monitor',
            name='system_monitor_node',
            output='screen',
        ),
    ]

    return LaunchDescription(args + nodes)
