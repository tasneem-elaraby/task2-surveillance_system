cmake_minimum_required(VERSION 3.8)
project(smart_surveillance)

# ── find dependencies ────────────────────────────────────────────────────────
find_package(ament_cmake        REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclpy              REQUIRED)
find_package(std_msgs           REQUIRED)
find_package(sensor_msgs        REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# ── generate custom action interface ────────────────────────────────────────
rosidl_generate_interfaces(${PROJECT_NAME}
  "action/SecurityAction.action"
  DEPENDENCIES std_msgs
)

# ── install Python nodes ──────────────────────────────────────────────────────
ament_python_install_package(${PROJECT_NAME})

install(PROGRAMS
  smart_surveillance/camera_stream.py
  smart_surveillance/object_detector.py
  smart_surveillance/depth_estimator.py
  smart_surveillance/scene_analyzer.py
  smart_surveillance/event_manager.py
  smart_surveillance/security_response.py
  smart_surveillance/event_logger.py
  smart_surveillance/system_monitor.py
  DESTINATION lib/${PROJECT_NAME}
  RENAME
    camera_stream
    object_detector
    depth_estimator
    scene_analyzer
    event_manager
    security_response
    event_logger
    system_monitor
)

# ── install launch files ──────────────────────────────────────────────────────
install(DIRECTORY launch/
  DESTINATION share/${PROJECT_NAME}/launch
)

ament_package()
