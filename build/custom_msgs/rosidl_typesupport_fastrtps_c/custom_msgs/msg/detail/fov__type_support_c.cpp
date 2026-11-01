// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msgs:msg/Fov.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/fov__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs/msg/detail/fov__struct.h"
#include "custom_msgs/msg/detail/fov__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // goal_cells, height, muddiness, roughness, wetness
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // goal_cells, height, muddiness, roughness, wetness

// forward declare type support functions


using _Fov__ros_msg_type = custom_msgs__msg__Fov;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
bool cdr_serialize_custom_msgs__msg__Fov(
  const custom_msgs__msg__Fov * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: x
  {
    cdr << ros_message->x;
  }

  // Field name: y
  {
    cdr << ros_message->y;
  }

  // Field name: battery
  {
    cdr << ros_message->battery;
  }

  // Field name: fov_size
  {
    cdr << ros_message->fov_size;
  }

  // Field name: target_x
  {
    cdr << ros_message->target_x;
  }

  // Field name: target_y
  {
    cdr << ros_message->target_y;
  }

  // Field name: target_rad
  {
    cdr << ros_message->target_rad;
  }

  // Field name: height
  {
    size_t size = ros_message->height.size;
    auto array_ptr = ros_message->height.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: roughness
  {
    size_t size = ros_message->roughness.size;
    auto array_ptr = ros_message->roughness.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: muddiness
  {
    size_t size = ros_message->muddiness.size;
    auto array_ptr = ros_message->muddiness.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: wetness
  {
    size_t size = ros_message->wetness.size;
    auto array_ptr = ros_message->wetness.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: goal_cells
  {
    size_t size = ros_message->goal_cells.size;
    auto array_ptr = ros_message->goal_cells.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
bool cdr_deserialize_custom_msgs__msg__Fov(
  eprosima::fastcdr::Cdr & cdr,
  custom_msgs__msg__Fov * ros_message)
{
  // Field name: x
  {
    cdr >> ros_message->x;
  }

  // Field name: y
  {
    cdr >> ros_message->y;
  }

  // Field name: battery
  {
    cdr >> ros_message->battery;
  }

  // Field name: fov_size
  {
    cdr >> ros_message->fov_size;
  }

  // Field name: target_x
  {
    cdr >> ros_message->target_x;
  }

  // Field name: target_y
  {
    cdr >> ros_message->target_y;
  }

  // Field name: target_rad
  {
    cdr >> ros_message->target_rad;
  }

  // Field name: height
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->height.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->height);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->height, size)) {
      fprintf(stderr, "failed to create array for field 'height'");
      return false;
    }
    auto array_ptr = ros_message->height.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: roughness
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->roughness.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->roughness);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->roughness, size)) {
      fprintf(stderr, "failed to create array for field 'roughness'");
      return false;
    }
    auto array_ptr = ros_message->roughness.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: muddiness
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->muddiness.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->muddiness);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->muddiness, size)) {
      fprintf(stderr, "failed to create array for field 'muddiness'");
      return false;
    }
    auto array_ptr = ros_message->muddiness.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: wetness
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->wetness.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->wetness);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->wetness, size)) {
      fprintf(stderr, "failed to create array for field 'wetness'");
      return false;
    }
    auto array_ptr = ros_message->wetness.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: goal_cells
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->goal_cells.data) {
      rosidl_runtime_c__boolean__Sequence__fini(&ros_message->goal_cells);
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&ros_message->goal_cells, size)) {
      fprintf(stderr, "failed to create array for field 'goal_cells'");
      return false;
    }
    auto array_ptr = ros_message->goal_cells.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t get_serialized_size_custom_msgs__msg__Fov(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Fov__ros_msg_type * ros_message = static_cast<const _Fov__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: x
  {
    size_t item_size = sizeof(ros_message->x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: y
  {
    size_t item_size = sizeof(ros_message->y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: battery
  {
    size_t item_size = sizeof(ros_message->battery);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fov_size
  {
    size_t item_size = sizeof(ros_message->fov_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: target_x
  {
    size_t item_size = sizeof(ros_message->target_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: target_y
  {
    size_t item_size = sizeof(ros_message->target_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: target_rad
  {
    size_t item_size = sizeof(ros_message->target_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: height
  {
    size_t array_size = ros_message->height.size;
    auto array_ptr = ros_message->height.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: roughness
  {
    size_t array_size = ros_message->roughness.size;
    auto array_ptr = ros_message->roughness.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: muddiness
  {
    size_t array_size = ros_message->muddiness.size;
    auto array_ptr = ros_message->muddiness.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: wetness
  {
    size_t array_size = ros_message->wetness.size;
    auto array_ptr = ros_message->wetness.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: goal_cells
  {
    size_t array_size = ros_message->goal_cells.size;
    auto array_ptr = ros_message->goal_cells.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_custom_msgs__msg__Fov(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: battery
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: fov_size
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: target_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: target_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: target_rad
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: height
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: roughness
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: muddiness
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: wetness
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: goal_cells
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = custom_msgs__msg__Fov;
    is_plain =
      (
      offsetof(DataType, goal_cells) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
bool cdr_serialize_key_custom_msgs__msg__Fov(
  const custom_msgs__msg__Fov * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: x
  {
    cdr << ros_message->x;
  }

  // Field name: y
  {
    cdr << ros_message->y;
  }

  // Field name: battery
  {
    cdr << ros_message->battery;
  }

  // Field name: fov_size
  {
    cdr << ros_message->fov_size;
  }

  // Field name: target_x
  {
    cdr << ros_message->target_x;
  }

  // Field name: target_y
  {
    cdr << ros_message->target_y;
  }

  // Field name: target_rad
  {
    cdr << ros_message->target_rad;
  }

  // Field name: height
  {
    size_t size = ros_message->height.size;
    auto array_ptr = ros_message->height.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: roughness
  {
    size_t size = ros_message->roughness.size;
    auto array_ptr = ros_message->roughness.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: muddiness
  {
    size_t size = ros_message->muddiness.size;
    auto array_ptr = ros_message->muddiness.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: wetness
  {
    size_t size = ros_message->wetness.size;
    auto array_ptr = ros_message->wetness.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: goal_cells
  {
    size_t size = ros_message->goal_cells.size;
    auto array_ptr = ros_message->goal_cells.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t get_serialized_size_key_custom_msgs__msg__Fov(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Fov__ros_msg_type * ros_message = static_cast<const _Fov__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: x
  {
    size_t item_size = sizeof(ros_message->x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: y
  {
    size_t item_size = sizeof(ros_message->y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: battery
  {
    size_t item_size = sizeof(ros_message->battery);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fov_size
  {
    size_t item_size = sizeof(ros_message->fov_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: target_x
  {
    size_t item_size = sizeof(ros_message->target_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: target_y
  {
    size_t item_size = sizeof(ros_message->target_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: target_rad
  {
    size_t item_size = sizeof(ros_message->target_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: height
  {
    size_t array_size = ros_message->height.size;
    auto array_ptr = ros_message->height.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: roughness
  {
    size_t array_size = ros_message->roughness.size;
    auto array_ptr = ros_message->roughness.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: muddiness
  {
    size_t array_size = ros_message->muddiness.size;
    auto array_ptr = ros_message->muddiness.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: wetness
  {
    size_t array_size = ros_message->wetness.size;
    auto array_ptr = ros_message->wetness.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: goal_cells
  {
    size_t array_size = ros_message->goal_cells.size;
    auto array_ptr = ros_message->goal_cells.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_key_custom_msgs__msg__Fov(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: battery
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: fov_size
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: target_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: target_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: target_rad
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: height
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: roughness
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: muddiness
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: wetness
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: goal_cells
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = custom_msgs__msg__Fov;
    is_plain =
      (
      offsetof(DataType, goal_cells) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Fov__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const custom_msgs__msg__Fov * ros_message = static_cast<const custom_msgs__msg__Fov *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_custom_msgs__msg__Fov(ros_message, cdr);
}

static bool _Fov__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  custom_msgs__msg__Fov * ros_message = static_cast<custom_msgs__msg__Fov *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_custom_msgs__msg__Fov(cdr, ros_message);
}

static uint32_t _Fov__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs__msg__Fov(
      untyped_ros_message, 0));
}

static size_t _Fov__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_custom_msgs__msg__Fov(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
bool cdr_serialize_with_endpoint_custom_msgs__msg__Fov(
  const custom_msgs__msg__Fov * ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  (void)ros_message;
  (void)endpoint_info;
  (void)serialization_context;
  // Field name: x
  {
    cdr << ros_message->x;
  }

  // Field name: y
  {
    cdr << ros_message->y;
  }

  // Field name: battery
  {
    cdr << ros_message->battery;
  }

  // Field name: fov_size
  {
    cdr << ros_message->fov_size;
  }

  // Field name: target_x
  {
    cdr << ros_message->target_x;
  }

  // Field name: target_y
  {
    cdr << ros_message->target_y;
  }

  // Field name: target_rad
  {
    cdr << ros_message->target_rad;
  }

  // Field name: height
  {
    size_t size = ros_message->height.size;
    auto array_ptr = ros_message->height.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: roughness
  {
    size_t size = ros_message->roughness.size;
    auto array_ptr = ros_message->roughness.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: muddiness
  {
    size_t size = ros_message->muddiness.size;
    auto array_ptr = ros_message->muddiness.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: wetness
  {
    size_t size = ros_message->wetness.size;
    auto array_ptr = ros_message->wetness.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: goal_cells
  {
    size_t size = ros_message->goal_cells.size;
    auto array_ptr = ros_message->goal_cells.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
bool cdr_deserialize_with_endpoint_custom_msgs__msg__Fov(
  eprosima::fastcdr::Cdr & cdr,
  custom_msgs__msg__Fov * ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  (void)ros_message;
  (void)endpoint_info;
  (void)serialization_context;
  // Field name: x
  {
    cdr >> ros_message->x;
  }

  // Field name: y
  {
    cdr >> ros_message->y;
  }

  // Field name: battery
  {
    cdr >> ros_message->battery;
  }

  // Field name: fov_size
  {
    cdr >> ros_message->fov_size;
  }

  // Field name: target_x
  {
    cdr >> ros_message->target_x;
  }

  // Field name: target_y
  {
    cdr >> ros_message->target_y;
  }

  // Field name: target_rad
  {
    cdr >> ros_message->target_rad;
  }

  // Field name: height
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->height.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->height);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->height, size)) {
      fprintf(stderr, "failed to create array for field 'height'");
      return false;
    }
    auto array_ptr = ros_message->height.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: roughness
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->roughness.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->roughness);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->roughness, size)) {
      fprintf(stderr, "failed to create array for field 'roughness'");
      return false;
    }
    auto array_ptr = ros_message->roughness.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: muddiness
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->muddiness.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->muddiness);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->muddiness, size)) {
      fprintf(stderr, "failed to create array for field 'muddiness'");
      return false;
    }
    auto array_ptr = ros_message->muddiness.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: wetness
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->wetness.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->wetness);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->wetness, size)) {
      fprintf(stderr, "failed to create array for field 'wetness'");
      return false;
    }
    auto array_ptr = ros_message->wetness.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: goal_cells
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->goal_cells.data) {
      rosidl_runtime_c__boolean__Sequence__fini(&ros_message->goal_cells);
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&ros_message->goal_cells, size)) {
      fprintf(stderr, "failed to create array for field 'goal_cells'");
      return false;
    }
    auto array_ptr = ros_message->goal_cells.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

static bool _Fov__cdr_serialize_with_endpoint(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const custom_msgs__msg__Fov * ros_message =
    static_cast<const custom_msgs__msg__Fov *>(untyped_ros_message);
  return cdr_serialize_with_endpoint_custom_msgs__msg__Fov(
    ros_message, cdr, endpoint_info, serialization_context);
}

static bool _Fov__cdr_deserialize_with_endpoint(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  custom_msgs__msg__Fov * ros_message =
    static_cast<custom_msgs__msg__Fov *>(untyped_ros_message);
  return cdr_deserialize_with_endpoint_custom_msgs__msg__Fov(
    cdr, ros_message, endpoint_info, serialization_context);
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
bool has_buffer_fields_custom_msgs__msg__Fov()
{
  return
    false;
}

static message_type_support_callbacks_t __callbacks_Fov = {
  "custom_msgs::msg",
  "Fov",
  _Fov__cdr_serialize,
  _Fov__cdr_deserialize,
  _Fov__get_serialized_size,
  _Fov__max_serialized_size,
  nullptr,
  has_buffer_fields_custom_msgs__msg__Fov(),
  _Fov__cdr_serialize_with_endpoint,
  _Fov__cdr_deserialize_with_endpoint
};

static rosidl_message_type_support_t _Fov__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Fov,
  get_message_typesupport_handle_function,
  &custom_msgs__msg__Fov__get_type_hash,
  &custom_msgs__msg__Fov__get_type_description,
  &custom_msgs__msg__Fov__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, Fov)() {
  return &_Fov__type_support;
}

#if defined(__cplusplus)
}
#endif
