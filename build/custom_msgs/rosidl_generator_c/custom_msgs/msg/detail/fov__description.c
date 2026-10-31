// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from custom_msgs:msg/Fov.idl
// generated code does not contain a copyright notice

#include "custom_msgs/msg/detail/fov__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
const rosidl_type_hash_t *
custom_msgs__msg__Fov__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x54, 0x01, 0x57, 0x2c, 0x11, 0x88, 0x31, 0xd3,
      0x55, 0xe2, 0xde, 0x2c, 0x54, 0x5b, 0x22, 0xb6,
      0x48, 0xe0, 0x45, 0x82, 0xb5, 0x16, 0x07, 0x21,
      0xb4, 0x27, 0xa2, 0x69, 0x6f, 0x74, 0x31, 0x17,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char custom_msgs__msg__Fov__TYPE_NAME[] = "custom_msgs/msg/Fov";

// Define type names, field names, and default values
static char custom_msgs__msg__Fov__FIELD_NAME__x[] = "x";
static char custom_msgs__msg__Fov__FIELD_NAME__y[] = "y";
static char custom_msgs__msg__Fov__FIELD_NAME__fov_size[] = "fov_size";
static char custom_msgs__msg__Fov__FIELD_NAME__height[] = "height";
static char custom_msgs__msg__Fov__FIELD_NAME__roughness[] = "roughness";
static char custom_msgs__msg__Fov__FIELD_NAME__muddiness[] = "muddiness";
static char custom_msgs__msg__Fov__FIELD_NAME__wetness[] = "wetness";

static rosidl_runtime_c__type_description__Field custom_msgs__msg__Fov__FIELDS[] = {
  {
    {custom_msgs__msg__Fov__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msgs__msg__Fov__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msgs__msg__Fov__FIELD_NAME__fov_size, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msgs__msg__Fov__FIELD_NAME__height, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msgs__msg__Fov__FIELD_NAME__roughness, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msgs__msg__Fov__FIELD_NAME__muddiness, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msgs__msg__Fov__FIELD_NAME__wetness, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_msgs__msg__Fov__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_msgs__msg__Fov__TYPE_NAME, 19, 19},
      {custom_msgs__msg__Fov__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 x\n"
  "int32 y\n"
  "uint32 fov_size\n"
  "float32[] height\n"
  "float32[] roughness\n"
  "float32[] muddiness\n"
  "float32[] wetness";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
custom_msgs__msg__Fov__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_msgs__msg__Fov__TYPE_NAME, 19, 19},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 107, 107},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_msgs__msg__Fov__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_msgs__msg__Fov__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
