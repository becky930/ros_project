// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hri_signals_interfaces:msg/HumanSignal.idl
// generated code does not contain a copyright notice
#include "hri_signals_interfaces/msg/detail/human_signal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `gesture`
#include "rosidl_runtime_c/string_functions.h"

bool
hri_signals_interfaces__msg__HumanSignal__init(hri_signals_interfaces__msg__HumanSignal * msg)
{
  if (!msg) {
    return false;
  }
  // gesture
  if (!rosidl_runtime_c__String__init(&msg->gesture)) {
    hri_signals_interfaces__msg__HumanSignal__fini(msg);
    return false;
  }
  // intensity
  return true;
}

void
hri_signals_interfaces__msg__HumanSignal__fini(hri_signals_interfaces__msg__HumanSignal * msg)
{
  if (!msg) {
    return;
  }
  // gesture
  rosidl_runtime_c__String__fini(&msg->gesture);
  // intensity
}

bool
hri_signals_interfaces__msg__HumanSignal__are_equal(const hri_signals_interfaces__msg__HumanSignal * lhs, const hri_signals_interfaces__msg__HumanSignal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // gesture
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->gesture), &(rhs->gesture)))
  {
    return false;
  }
  // intensity
  if (lhs->intensity != rhs->intensity) {
    return false;
  }
  return true;
}

bool
hri_signals_interfaces__msg__HumanSignal__copy(
  const hri_signals_interfaces__msg__HumanSignal * input,
  hri_signals_interfaces__msg__HumanSignal * output)
{
  if (!input || !output) {
    return false;
  }
  // gesture
  if (!rosidl_runtime_c__String__copy(
      &(input->gesture), &(output->gesture)))
  {
    return false;
  }
  // intensity
  output->intensity = input->intensity;
  return true;
}

hri_signals_interfaces__msg__HumanSignal *
hri_signals_interfaces__msg__HumanSignal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hri_signals_interfaces__msg__HumanSignal * msg = (hri_signals_interfaces__msg__HumanSignal *)allocator.allocate(sizeof(hri_signals_interfaces__msg__HumanSignal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hri_signals_interfaces__msg__HumanSignal));
  bool success = hri_signals_interfaces__msg__HumanSignal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hri_signals_interfaces__msg__HumanSignal__destroy(hri_signals_interfaces__msg__HumanSignal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hri_signals_interfaces__msg__HumanSignal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hri_signals_interfaces__msg__HumanSignal__Sequence__init(hri_signals_interfaces__msg__HumanSignal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hri_signals_interfaces__msg__HumanSignal * data = NULL;

  if (size) {
    data = (hri_signals_interfaces__msg__HumanSignal *)allocator.zero_allocate(size, sizeof(hri_signals_interfaces__msg__HumanSignal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hri_signals_interfaces__msg__HumanSignal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hri_signals_interfaces__msg__HumanSignal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
hri_signals_interfaces__msg__HumanSignal__Sequence__fini(hri_signals_interfaces__msg__HumanSignal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hri_signals_interfaces__msg__HumanSignal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

hri_signals_interfaces__msg__HumanSignal__Sequence *
hri_signals_interfaces__msg__HumanSignal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hri_signals_interfaces__msg__HumanSignal__Sequence * array = (hri_signals_interfaces__msg__HumanSignal__Sequence *)allocator.allocate(sizeof(hri_signals_interfaces__msg__HumanSignal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hri_signals_interfaces__msg__HumanSignal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hri_signals_interfaces__msg__HumanSignal__Sequence__destroy(hri_signals_interfaces__msg__HumanSignal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hri_signals_interfaces__msg__HumanSignal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hri_signals_interfaces__msg__HumanSignal__Sequence__are_equal(const hri_signals_interfaces__msg__HumanSignal__Sequence * lhs, const hri_signals_interfaces__msg__HumanSignal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hri_signals_interfaces__msg__HumanSignal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hri_signals_interfaces__msg__HumanSignal__Sequence__copy(
  const hri_signals_interfaces__msg__HumanSignal__Sequence * input,
  hri_signals_interfaces__msg__HumanSignal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hri_signals_interfaces__msg__HumanSignal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hri_signals_interfaces__msg__HumanSignal * data =
      (hri_signals_interfaces__msg__HumanSignal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hri_signals_interfaces__msg__HumanSignal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hri_signals_interfaces__msg__HumanSignal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hri_signals_interfaces__msg__HumanSignal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
