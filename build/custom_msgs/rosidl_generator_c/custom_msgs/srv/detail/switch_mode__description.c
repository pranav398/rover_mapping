// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from custom_msgs:srv/SwitchMode.idl
// generated code does not contain a copyright notice

#include "custom_msgs/srv/detail/switch_mode__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
const rosidl_type_hash_t *
custom_msgs__srv__SwitchMode__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf4, 0xb2, 0xf2, 0xb9, 0xbc, 0x55, 0x10, 0x34,
      0x20, 0xd2, 0xe8, 0xe4, 0x17, 0x12, 0xfa, 0x8f,
      0xc7, 0x37, 0x4e, 0xb7, 0xa1, 0x75, 0x81, 0x91,
      0x1f, 0x15, 0xbd, 0x07, 0x55, 0x9f, 0x38, 0xa3,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
const rosidl_type_hash_t *
custom_msgs__srv__SwitchMode_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xef, 0x70, 0xaa, 0x83, 0xb1, 0xc7, 0x48, 0xff,
      0x24, 0xf4, 0xbb, 0x7f, 0xe9, 0xa2, 0xf2, 0x53,
      0x86, 0xcc, 0x55, 0x0f, 0x1a, 0x60, 0x1d, 0x3f,
      0x08, 0x32, 0x16, 0x31, 0x22, 0x64, 0xb6, 0x58,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
const rosidl_type_hash_t *
custom_msgs__srv__SwitchMode_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x08, 0xe8, 0x4c, 0x13, 0xcb, 0x3e, 0x9b, 0x6b,
      0x34, 0xef, 0x46, 0xa4, 0xc5, 0xcc, 0xf8, 0x4a,
      0x34, 0x28, 0xb8, 0x57, 0x26, 0xe8, 0x02, 0x09,
      0x48, 0x96, 0x1a, 0x40, 0x7e, 0xb7, 0x97, 0xe5,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
const rosidl_type_hash_t *
custom_msgs__srv__SwitchMode_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x95, 0xbd, 0x3d, 0x15, 0x24, 0xfc, 0x2c, 0x4c,
      0xed, 0x86, 0xe7, 0x6f, 0x1e, 0x96, 0xf2, 0xe1,
      0x29, 0x19, 0xc1, 0x90, 0xca, 0x44, 0x8b, 0x43,
      0xfb, 0xd3, 0xab, 0xc0, 0x47, 0x4d, 0x9e, 0xe0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char custom_msgs__srv__SwitchMode__TYPE_NAME[] = "custom_msgs/srv/SwitchMode";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char custom_msgs__srv__SwitchMode_Event__TYPE_NAME[] = "custom_msgs/srv/SwitchMode_Event";
static char custom_msgs__srv__SwitchMode_Request__TYPE_NAME[] = "custom_msgs/srv/SwitchMode_Request";
static char custom_msgs__srv__SwitchMode_Response__TYPE_NAME[] = "custom_msgs/srv/SwitchMode_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char custom_msgs__srv__SwitchMode__FIELD_NAME__request_message[] = "request_message";
static char custom_msgs__srv__SwitchMode__FIELD_NAME__response_message[] = "response_message";
static char custom_msgs__srv__SwitchMode__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field custom_msgs__srv__SwitchMode__FIELDS[] = {
  {
    {custom_msgs__srv__SwitchMode__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {custom_msgs__srv__SwitchMode_Request__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msgs__srv__SwitchMode__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {custom_msgs__srv__SwitchMode_Response__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msgs__srv__SwitchMode__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {custom_msgs__srv__SwitchMode_Event__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription custom_msgs__srv__SwitchMode__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {custom_msgs__srv__SwitchMode_Event__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {custom_msgs__srv__SwitchMode_Request__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {custom_msgs__srv__SwitchMode_Response__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_msgs__srv__SwitchMode__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_msgs__srv__SwitchMode__TYPE_NAME, 26, 26},
      {custom_msgs__srv__SwitchMode__FIELDS, 3, 3},
    },
    {custom_msgs__srv__SwitchMode__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = custom_msgs__srv__SwitchMode_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = custom_msgs__srv__SwitchMode_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = custom_msgs__srv__SwitchMode_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char custom_msgs__srv__SwitchMode_Request__FIELD_NAME__mode[] = "mode";

static rosidl_runtime_c__type_description__Field custom_msgs__srv__SwitchMode_Request__FIELDS[] = {
  {
    {custom_msgs__srv__SwitchMode_Request__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_msgs__srv__SwitchMode_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_msgs__srv__SwitchMode_Request__TYPE_NAME, 34, 34},
      {custom_msgs__srv__SwitchMode_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char custom_msgs__srv__SwitchMode_Response__FIELD_NAME__success[] = "success";
static char custom_msgs__srv__SwitchMode_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field custom_msgs__srv__SwitchMode_Response__FIELDS[] = {
  {
    {custom_msgs__srv__SwitchMode_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msgs__srv__SwitchMode_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_msgs__srv__SwitchMode_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_msgs__srv__SwitchMode_Response__TYPE_NAME, 35, 35},
      {custom_msgs__srv__SwitchMode_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char custom_msgs__srv__SwitchMode_Event__FIELD_NAME__info[] = "info";
static char custom_msgs__srv__SwitchMode_Event__FIELD_NAME__request[] = "request";
static char custom_msgs__srv__SwitchMode_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field custom_msgs__srv__SwitchMode_Event__FIELDS[] = {
  {
    {custom_msgs__srv__SwitchMode_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msgs__srv__SwitchMode_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {custom_msgs__srv__SwitchMode_Request__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msgs__srv__SwitchMode_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {custom_msgs__srv__SwitchMode_Response__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription custom_msgs__srv__SwitchMode_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {custom_msgs__srv__SwitchMode_Request__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {custom_msgs__srv__SwitchMode_Response__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_msgs__srv__SwitchMode_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_msgs__srv__SwitchMode_Event__TYPE_NAME, 32, 32},
      {custom_msgs__srv__SwitchMode_Event__FIELDS, 3, 3},
    },
    {custom_msgs__srv__SwitchMode_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = custom_msgs__srv__SwitchMode_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = custom_msgs__srv__SwitchMode_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool mode\n"
  "---\n"
  "bool success\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
custom_msgs__srv__SwitchMode__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_msgs__srv__SwitchMode__TYPE_NAME, 26, 26},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 42, 42},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
custom_msgs__srv__SwitchMode_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_msgs__srv__SwitchMode_Request__TYPE_NAME, 34, 34},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
custom_msgs__srv__SwitchMode_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_msgs__srv__SwitchMode_Response__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
custom_msgs__srv__SwitchMode_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_msgs__srv__SwitchMode_Event__TYPE_NAME, 32, 32},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_msgs__srv__SwitchMode__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_msgs__srv__SwitchMode__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *custom_msgs__srv__SwitchMode_Event__get_individual_type_description_source(NULL);
    sources[3] = *custom_msgs__srv__SwitchMode_Request__get_individual_type_description_source(NULL);
    sources[4] = *custom_msgs__srv__SwitchMode_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_msgs__srv__SwitchMode_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_msgs__srv__SwitchMode_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_msgs__srv__SwitchMode_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_msgs__srv__SwitchMode_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_msgs__srv__SwitchMode_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_msgs__srv__SwitchMode_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *custom_msgs__srv__SwitchMode_Request__get_individual_type_description_source(NULL);
    sources[3] = *custom_msgs__srv__SwitchMode_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
