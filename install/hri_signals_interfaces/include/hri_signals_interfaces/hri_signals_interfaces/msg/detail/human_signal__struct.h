// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hri_signals_interfaces:msg/HumanSignal.idl
// generated code does not contain a copyright notice

#ifndef HRI_SIGNALS_INTERFACES__MSG__DETAIL__HUMAN_SIGNAL__STRUCT_H_
#define HRI_SIGNALS_INTERFACES__MSG__DETAIL__HUMAN_SIGNAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'gesture'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/HumanSignal in the package hri_signals_interfaces.
typedef struct hri_signals_interfaces__msg__HumanSignal
{
  rosidl_runtime_c__String gesture;
  int32_t intensity;
} hri_signals_interfaces__msg__HumanSignal;

// Struct for a sequence of hri_signals_interfaces__msg__HumanSignal.
typedef struct hri_signals_interfaces__msg__HumanSignal__Sequence
{
  hri_signals_interfaces__msg__HumanSignal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hri_signals_interfaces__msg__HumanSignal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HRI_SIGNALS_INTERFACES__MSG__DETAIL__HUMAN_SIGNAL__STRUCT_H_
