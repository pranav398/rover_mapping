// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_msgs:msg/Fov.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_msgs/msg/detail/fov__rosidl_typesupport_introspection_c.h"
#include "custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_msgs/msg/detail/fov__functions.h"
#include "custom_msgs/msg/detail/fov__struct.h"


// Include directives for member types
// Member `height`
// Member `roughness`
// Member `muddiness`
// Member `wetness`
// Member `goal_cells`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__Fov_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_msgs__msg__Fov__init(message_memory);
}

void custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__Fov_fini_function(void * message_memory)
{
  custom_msgs__msg__Fov__fini(message_memory);
}

size_t custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__size_function__Fov__height(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__get_const_function__Fov__height(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__get_function__Fov__height(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__fetch_function__Fov__height(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__get_const_function__Fov__height(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__assign_function__Fov__height(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__get_function__Fov__height(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__resize_function__Fov__height(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__size_function__Fov__roughness(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__get_const_function__Fov__roughness(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__get_function__Fov__roughness(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__fetch_function__Fov__roughness(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__get_const_function__Fov__roughness(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__assign_function__Fov__roughness(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__get_function__Fov__roughness(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__resize_function__Fov__roughness(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__size_function__Fov__muddiness(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__get_const_function__Fov__muddiness(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__get_function__Fov__muddiness(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__fetch_function__Fov__muddiness(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__get_const_function__Fov__muddiness(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__assign_function__Fov__muddiness(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__get_function__Fov__muddiness(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__resize_function__Fov__muddiness(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__size_function__Fov__wetness(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__get_const_function__Fov__wetness(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__get_function__Fov__wetness(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__fetch_function__Fov__wetness(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__get_const_function__Fov__wetness(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__assign_function__Fov__wetness(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__get_function__Fov__wetness(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__resize_function__Fov__wetness(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__size_function__Fov__goal_cells(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__get_const_function__Fov__goal_cells(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__get_function__Fov__goal_cells(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__fetch_function__Fov__goal_cells(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__get_const_function__Fov__goal_cells(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__assign_function__Fov__goal_cells(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__get_function__Fov__goal_cells(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__resize_function__Fov__goal_cells(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__Fov_message_member_array[12] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__Fov, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__Fov, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "battery",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__Fov, battery),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "fov_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__Fov, fov_size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "target_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__Fov, target_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "target_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__Fov, target_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "target_rad",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__Fov, target_rad),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__Fov, height),  // bytes offset in struct
    NULL,  // default value
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__size_function__Fov__height,  // size() function pointer
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__get_const_function__Fov__height,  // get_const(index) function pointer
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__get_function__Fov__height,  // get(index) function pointer
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__fetch_function__Fov__height,  // fetch(index, &value) function pointer
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__assign_function__Fov__height,  // assign(index, value) function pointer
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__resize_function__Fov__height,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "roughness",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__Fov, roughness),  // bytes offset in struct
    NULL,  // default value
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__size_function__Fov__roughness,  // size() function pointer
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__get_const_function__Fov__roughness,  // get_const(index) function pointer
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__get_function__Fov__roughness,  // get(index) function pointer
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__fetch_function__Fov__roughness,  // fetch(index, &value) function pointer
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__assign_function__Fov__roughness,  // assign(index, value) function pointer
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__resize_function__Fov__roughness,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "muddiness",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__Fov, muddiness),  // bytes offset in struct
    NULL,  // default value
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__size_function__Fov__muddiness,  // size() function pointer
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__get_const_function__Fov__muddiness,  // get_const(index) function pointer
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__get_function__Fov__muddiness,  // get(index) function pointer
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__fetch_function__Fov__muddiness,  // fetch(index, &value) function pointer
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__assign_function__Fov__muddiness,  // assign(index, value) function pointer
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__resize_function__Fov__muddiness,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "wetness",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__Fov, wetness),  // bytes offset in struct
    NULL,  // default value
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__size_function__Fov__wetness,  // size() function pointer
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__get_const_function__Fov__wetness,  // get_const(index) function pointer
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__get_function__Fov__wetness,  // get(index) function pointer
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__fetch_function__Fov__wetness,  // fetch(index, &value) function pointer
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__assign_function__Fov__wetness,  // assign(index, value) function pointer
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__resize_function__Fov__wetness,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "goal_cells",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__Fov, goal_cells),  // bytes offset in struct
    NULL,  // default value
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__size_function__Fov__goal_cells,  // size() function pointer
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__get_const_function__Fov__goal_cells,  // get_const(index) function pointer
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__get_function__Fov__goal_cells,  // get(index) function pointer
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__fetch_function__Fov__goal_cells,  // fetch(index, &value) function pointer
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__assign_function__Fov__goal_cells,  // assign(index, value) function pointer
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__resize_function__Fov__goal_cells,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__Fov_message_members = {
  "custom_msgs__msg",  // message namespace
  "Fov",  // message name
  12,  // number of fields
  sizeof(custom_msgs__msg__Fov),
  false,  // has_any_key_member_
  custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__Fov_message_member_array,  // message members
  custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__Fov_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__Fov_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__Fov_message_type_support_handle = {
  0,
  &custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__Fov_message_members,
  get_message_typesupport_handle_function,
  &custom_msgs__msg__Fov__get_type_hash,
  &custom_msgs__msg__Fov__get_type_description,
  &custom_msgs__msg__Fov__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, Fov)() {
  if (!custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__Fov_message_type_support_handle.typesupport_identifier) {
    custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__Fov_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_msgs__msg__Fov__rosidl_typesupport_introspection_c__Fov_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
