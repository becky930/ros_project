// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from hri_signals_interfaces:msg/HumanSignal.idl
// generated code does not contain a copyright notice

#ifndef HRI_SIGNALS_INTERFACES__MSG__DETAIL__HUMAN_SIGNAL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define HRI_SIGNALS_INTERFACES__MSG__DETAIL__HUMAN_SIGNAL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "hri_signals_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "hri_signals_interfaces/msg/detail/human_signal__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace hri_signals_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hri_signals_interfaces
cdr_serialize(
  const hri_signals_interfaces::msg::HumanSignal & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hri_signals_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  hri_signals_interfaces::msg::HumanSignal & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hri_signals_interfaces
get_serialized_size(
  const hri_signals_interfaces::msg::HumanSignal & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hri_signals_interfaces
max_serialized_size_HumanSignal(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace hri_signals_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hri_signals_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hri_signals_interfaces, msg, HumanSignal)();

#ifdef __cplusplus
}
#endif

#endif  // HRI_SIGNALS_INTERFACES__MSG__DETAIL__HUMAN_SIGNAL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
