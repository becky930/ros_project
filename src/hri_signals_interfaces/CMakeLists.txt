cmake_minimum_required(VERSION 3.5)
project(hri_signals_interfaces)

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# Generate code from HumanSignal.msg
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/HumanSignal.msg"
)

ament_export_dependencies(rosidl_default_runtime)

ament_package()
