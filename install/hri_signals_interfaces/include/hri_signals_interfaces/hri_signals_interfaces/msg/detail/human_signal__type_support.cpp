// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from hri_signals_interfaces:msg/HumanSignal.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "hri_signals_interfaces/msg/detail/human_signal__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace hri_signals_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void HumanSignal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) hri_signals_interfaces::msg::HumanSignal(_init);
}

void HumanSignal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<hri_signals_interfaces::msg::HumanSignal *>(message_memory);
  typed_message->~HumanSignal();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember HumanSignal_message_member_array[2] = {
  {
    "gesture",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hri_signals_interfaces::msg::HumanSignal, gesture),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "intensity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hri_signals_interfaces::msg::HumanSignal, intensity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers HumanSignal_message_members = {
  "hri_signals_interfaces::msg",  // message namespace
  "HumanSignal",  // message name
  2,  // number of fields
  sizeof(hri_signals_interfaces::msg::HumanSignal),
  HumanSignal_message_member_array,  // message members
  HumanSignal_init_function,  // function to initialize message memory (memory has to be allocated)
  HumanSignal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t HumanSignal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &HumanSignal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace hri_signals_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hri_signals_interfaces::msg::HumanSignal>()
{
  return &::hri_signals_interfaces::msg::rosidl_typesupport_introspection_cpp::HumanSignal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hri_signals_interfaces, msg, HumanSignal)() {
  return &::hri_signals_interfaces::msg::rosidl_typesupport_introspection_cpp::HumanSignal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
