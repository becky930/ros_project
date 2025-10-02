// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hri_signals_interfaces:msg/HumanSignal.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hri_signals_interfaces/msg/detail/human_signal__rosidl_typesupport_introspection_c.h"
#include "hri_signals_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hri_signals_interfaces/msg/detail/human_signal__functions.h"
#include "hri_signals_interfaces/msg/detail/human_signal__struct.h"


// Include directives for member types
// Member `gesture`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hri_signals_interfaces__msg__HumanSignal__rosidl_typesupport_introspection_c__HumanSignal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hri_signals_interfaces__msg__HumanSignal__init(message_memory);
}

void hri_signals_interfaces__msg__HumanSignal__rosidl_typesupport_introspection_c__HumanSignal_fini_function(void * message_memory)
{
  hri_signals_interfaces__msg__HumanSignal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hri_signals_interfaces__msg__HumanSignal__rosidl_typesupport_introspection_c__HumanSignal_message_member_array[2] = {
  {
    "gesture",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hri_signals_interfaces__msg__HumanSignal, gesture),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "intensity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hri_signals_interfaces__msg__HumanSignal, intensity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hri_signals_interfaces__msg__HumanSignal__rosidl_typesupport_introspection_c__HumanSignal_message_members = {
  "hri_signals_interfaces__msg",  // message namespace
  "HumanSignal",  // message name
  2,  // number of fields
  sizeof(hri_signals_interfaces__msg__HumanSignal),
  hri_signals_interfaces__msg__HumanSignal__rosidl_typesupport_introspection_c__HumanSignal_message_member_array,  // message members
  hri_signals_interfaces__msg__HumanSignal__rosidl_typesupport_introspection_c__HumanSignal_init_function,  // function to initialize message memory (memory has to be allocated)
  hri_signals_interfaces__msg__HumanSignal__rosidl_typesupport_introspection_c__HumanSignal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hri_signals_interfaces__msg__HumanSignal__rosidl_typesupport_introspection_c__HumanSignal_message_type_support_handle = {
  0,
  &hri_signals_interfaces__msg__HumanSignal__rosidl_typesupport_introspection_c__HumanSignal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hri_signals_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hri_signals_interfaces, msg, HumanSignal)() {
  if (!hri_signals_interfaces__msg__HumanSignal__rosidl_typesupport_introspection_c__HumanSignal_message_type_support_handle.typesupport_identifier) {
    hri_signals_interfaces__msg__HumanSignal__rosidl_typesupport_introspection_c__HumanSignal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hri_signals_interfaces__msg__HumanSignal__rosidl_typesupport_introspection_c__HumanSignal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
