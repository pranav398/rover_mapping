// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs:msg/Fov.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/fov__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `height`
// Member `roughness`
// Member `muddiness`
// Member `wetness`
// Member `goal_cells`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
custom_msgs__msg__Fov__init(custom_msgs__msg__Fov * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // battery
  // fov_size
  // target_x
  // target_y
  // target_rad
  // height
  if (!rosidl_runtime_c__float__Sequence__init(&msg->height, 0)) {
    custom_msgs__msg__Fov__fini(msg);
    return false;
  }
  // roughness
  if (!rosidl_runtime_c__float__Sequence__init(&msg->roughness, 0)) {
    custom_msgs__msg__Fov__fini(msg);
    return false;
  }
  // muddiness
  if (!rosidl_runtime_c__float__Sequence__init(&msg->muddiness, 0)) {
    custom_msgs__msg__Fov__fini(msg);
    return false;
  }
  // wetness
  if (!rosidl_runtime_c__float__Sequence__init(&msg->wetness, 0)) {
    custom_msgs__msg__Fov__fini(msg);
    return false;
  }
  // goal_cells
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->goal_cells, 0)) {
    custom_msgs__msg__Fov__fini(msg);
    return false;
  }
  return true;
}

void
custom_msgs__msg__Fov__fini(custom_msgs__msg__Fov * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // battery
  // fov_size
  // target_x
  // target_y
  // target_rad
  // height
  rosidl_runtime_c__float__Sequence__fini(&msg->height);
  // roughness
  rosidl_runtime_c__float__Sequence__fini(&msg->roughness);
  // muddiness
  rosidl_runtime_c__float__Sequence__fini(&msg->muddiness);
  // wetness
  rosidl_runtime_c__float__Sequence__fini(&msg->wetness);
  // goal_cells
  rosidl_runtime_c__boolean__Sequence__fini(&msg->goal_cells);
}

bool
custom_msgs__msg__Fov__are_equal(const custom_msgs__msg__Fov * lhs, const custom_msgs__msg__Fov * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // battery
  if (lhs->battery != rhs->battery) {
    return false;
  }
  // fov_size
  if (lhs->fov_size != rhs->fov_size) {
    return false;
  }
  // target_x
  if (lhs->target_x != rhs->target_x) {
    return false;
  }
  // target_y
  if (lhs->target_y != rhs->target_y) {
    return false;
  }
  // target_rad
  if (lhs->target_rad != rhs->target_rad) {
    return false;
  }
  // height
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->height), &(rhs->height)))
  {
    return false;
  }
  // roughness
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->roughness), &(rhs->roughness)))
  {
    return false;
  }
  // muddiness
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->muddiness), &(rhs->muddiness)))
  {
    return false;
  }
  // wetness
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->wetness), &(rhs->wetness)))
  {
    return false;
  }
  // goal_cells
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->goal_cells), &(rhs->goal_cells)))
  {
    return false;
  }
  return true;
}

bool
custom_msgs__msg__Fov__copy(
  const custom_msgs__msg__Fov * input,
  custom_msgs__msg__Fov * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // battery
  output->battery = input->battery;
  // fov_size
  output->fov_size = input->fov_size;
  // target_x
  output->target_x = input->target_x;
  // target_y
  output->target_y = input->target_y;
  // target_rad
  output->target_rad = input->target_rad;
  // height
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->height), &(output->height)))
  {
    return false;
  }
  // roughness
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->roughness), &(output->roughness)))
  {
    return false;
  }
  // muddiness
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->muddiness), &(output->muddiness)))
  {
    return false;
  }
  // wetness
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->wetness), &(output->wetness)))
  {
    return false;
  }
  // goal_cells
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->goal_cells), &(output->goal_cells)))
  {
    return false;
  }
  return true;
}

custom_msgs__msg__Fov *
custom_msgs__msg__Fov__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__Fov * msg = (custom_msgs__msg__Fov *)allocator.allocate(sizeof(custom_msgs__msg__Fov), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs__msg__Fov));
  bool success = custom_msgs__msg__Fov__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_msgs__msg__Fov__destroy(custom_msgs__msg__Fov * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_msgs__msg__Fov__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_msgs__msg__Fov__Sequence__init(custom_msgs__msg__Fov__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__Fov * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(custom_msgs__msg__Fov)) {
      return false;
    }
    data = (custom_msgs__msg__Fov *)allocator.zero_allocate(size, sizeof(custom_msgs__msg__Fov), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs__msg__Fov__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs__msg__Fov__fini(&data[i - 1]);
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
custom_msgs__msg__Fov__Sequence__fini(custom_msgs__msg__Fov__Sequence * array)
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
      custom_msgs__msg__Fov__fini(&array->data[i]);
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

custom_msgs__msg__Fov__Sequence *
custom_msgs__msg__Fov__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__Fov__Sequence * array = (custom_msgs__msg__Fov__Sequence *)allocator.allocate(sizeof(custom_msgs__msg__Fov__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs__msg__Fov__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_msgs__msg__Fov__Sequence__destroy(custom_msgs__msg__Fov__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_msgs__msg__Fov__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_msgs__msg__Fov__Sequence__are_equal(const custom_msgs__msg__Fov__Sequence * lhs, const custom_msgs__msg__Fov__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_msgs__msg__Fov__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_msgs__msg__Fov__Sequence__copy(
  const custom_msgs__msg__Fov__Sequence * input,
  custom_msgs__msg__Fov__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(custom_msgs__msg__Fov)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(custom_msgs__msg__Fov);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_msgs__msg__Fov * data =
      (custom_msgs__msg__Fov *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_msgs__msg__Fov__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_msgs__msg__Fov__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_msgs__msg__Fov__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
