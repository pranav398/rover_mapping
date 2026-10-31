// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from custom_msgs:msg/Info.idl
// generated code does not contain a copyright notice

#include "custom_msgs/msg/detail/info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
const rosidl_type_hash_t *
custom_msgs__msg__Info__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x48, 0x96, 0x62, 0x73, 0x28, 0xc1, 0xd8, 0x87,
      0xbd, 0x78, 0x30, 0x7c, 0x2b, 0xde, 0xc0, 0xc1,
      0xb0, 0xf1, 0x1c, 0xd7, 0xf6, 0xbe, 0x13, 0x33,
      0x4e, 0xdc, 0x07, 0xb2, 0xbb, 0xee, 0x2e, 0x33,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char custom_msgs__msg__Info__TYPE_NAME[] = "custom_msgs/msg/Info";

// Define type names, field names, and default values
static char custom_msgs__msg__Info__FIELD_NAME__battery[] = "battery";
static char custom_msgs__msg__Info__FIELD_NAME__x[] = "x";
static char custom_msgs__msg__Info__FIELD_NAME__y[] = "y";

static rosidl_runtime_c__type_description__Field custom_msgs__msg__Info__FIELDS[] = {
  {
    {custom_msgs__msg__Info__FIELD_NAME__battery, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msgs__msg__Info__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msgs__msg__Info__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_msgs__msg__Info__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_msgs__msg__Info__TYPE_NAME, 20, 20},
      {custom_msgs__msg__Info__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 battery\n"
  "int32 x\n"
  "int32 y";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
custom_msgs__msg__Info__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_msgs__msg__Info__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 32, 32},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_msgs__msg__Info__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_msgs__msg__Info__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
