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
      0xa1, 0x56, 0x89, 0x98, 0x23, 0x56, 0xa0, 0x79,
      0xe6, 0xe8, 0x8d, 0x0a, 0x91, 0x00, 0x85, 0x2b,
      0x43, 0x85, 0x0a, 0xdf, 0x36, 0xb8, 0x18, 0x18,
      0x01, 0x2f, 0x48, 0x36, 0x8e, 0x13, 0x47, 0x76,
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
static char custom_msgs__msg__Fov__FIELD_NAME__battery[] = "battery";
static char custom_msgs__msg__Fov__FIELD_NAME__fov_size[] = "fov_size";
static char custom_msgs__msg__Fov__FIELD_NAME__target_x[] = "target_x";
static char custom_msgs__msg__Fov__FIELD_NAME__target_y[] = "target_y";
static char custom_msgs__msg__Fov__FIELD_NAME__target_rad[] = "target_rad";
static char custom_msgs__msg__Fov__FIELD_NAME__height[] = "height";
static char custom_msgs__msg__Fov__FIELD_NAME__roughness[] = "roughness";
static char custom_msgs__msg__Fov__FIELD_NAME__muddiness[] = "muddiness";
static char custom_msgs__msg__Fov__FIELD_NAME__wetness[] = "wetness";
static char custom_msgs__msg__Fov__FIELD_NAME__goal_cells[] = "goal_cells";

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
    {custom_msgs__msg__Fov__FIELD_NAME__battery, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
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
    {custom_msgs__msg__Fov__FIELD_NAME__target_x, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msgs__msg__Fov__FIELD_NAME__target_y, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msgs__msg__Fov__FIELD_NAME__target_rad, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
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
  {
    {custom_msgs__msg__Fov__FIELD_NAME__goal_cells, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_UNBOUNDED_SEQUENCE,
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
      {custom_msgs__msg__Fov__FIELDS, 12, 12},
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
  "float32 battery\n"
  "uint32 fov_size\n"
  "int32 target_x\n"
  "int32 target_y\n"
  "int32 target_rad\n"
  "float32[] height\n"
  "float32[] roughness\n"
  "float32[] muddiness\n"
  "float32[] wetness\n"
  "bool[] goal_cells";

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
    {toplevel_type_raw_source, 188, 188},
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
