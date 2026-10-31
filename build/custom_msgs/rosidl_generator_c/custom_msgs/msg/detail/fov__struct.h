// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/Fov.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_msgs/msg/fov.h"


#ifndef CUSTOM_MSGS__MSG__DETAIL__FOV__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__FOV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'height'
// Member 'roughness'
// Member 'muddiness'
// Member 'wetness'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Fov in the package custom_msgs.
typedef struct custom_msgs__msg__Fov
{
  int32_t x;
  int32_t y;
  uint32_t fov_size;
  rosidl_runtime_c__float__Sequence height;
  rosidl_runtime_c__float__Sequence roughness;
  rosidl_runtime_c__float__Sequence muddiness;
  rosidl_runtime_c__float__Sequence wetness;
} custom_msgs__msg__Fov;

// Struct for a sequence of custom_msgs__msg__Fov.
typedef struct custom_msgs__msg__Fov__Sequence
{
  custom_msgs__msg__Fov * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__Fov__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__FOV__STRUCT_H_
