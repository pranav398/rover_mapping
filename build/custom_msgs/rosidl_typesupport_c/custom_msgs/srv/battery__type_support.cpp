// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from custom_msgs:srv/Battery.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "custom_msgs/srv/detail/battery__struct.h"
#include "custom_msgs/srv/detail/battery__type_support.h"
#include "custom_msgs/srv/detail/battery__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace custom_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Battery_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Battery_Request_type_support_ids_t;

static const _Battery_Request_type_support_ids_t _Battery_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Battery_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Battery_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Battery_Request_type_support_symbol_names_t _Battery_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, srv, Battery_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, srv, Battery_Request)),
  }
};

typedef struct _Battery_Request_type_support_data_t
{
  void * data[2];
} _Battery_Request_type_support_data_t;

static _Battery_Request_type_support_data_t _Battery_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Battery_Request_message_typesupport_map = {
  2,
  "custom_msgs",
  &_Battery_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Battery_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Battery_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Battery_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Battery_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &custom_msgs__srv__Battery_Request__get_type_hash,
  &custom_msgs__srv__Battery_Request__get_type_description,
  &custom_msgs__srv__Battery_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace custom_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, custom_msgs, srv, Battery_Request)() {
  return &::custom_msgs::srv::rosidl_typesupport_c::Battery_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_msgs/srv/detail/battery__struct.h"
// already included above
// #include "custom_msgs/srv/detail/battery__type_support.h"
// already included above
// #include "custom_msgs/srv/detail/battery__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Battery_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Battery_Response_type_support_ids_t;

static const _Battery_Response_type_support_ids_t _Battery_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Battery_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Battery_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Battery_Response_type_support_symbol_names_t _Battery_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, srv, Battery_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, srv, Battery_Response)),
  }
};

typedef struct _Battery_Response_type_support_data_t
{
  void * data[2];
} _Battery_Response_type_support_data_t;

static _Battery_Response_type_support_data_t _Battery_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Battery_Response_message_typesupport_map = {
  2,
  "custom_msgs",
  &_Battery_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Battery_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Battery_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Battery_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Battery_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &custom_msgs__srv__Battery_Response__get_type_hash,
  &custom_msgs__srv__Battery_Response__get_type_description,
  &custom_msgs__srv__Battery_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace custom_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, custom_msgs, srv, Battery_Response)() {
  return &::custom_msgs::srv::rosidl_typesupport_c::Battery_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_msgs/srv/detail/battery__struct.h"
// already included above
// #include "custom_msgs/srv/detail/battery__type_support.h"
// already included above
// #include "custom_msgs/srv/detail/battery__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Battery_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Battery_Event_type_support_ids_t;

static const _Battery_Event_type_support_ids_t _Battery_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Battery_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Battery_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Battery_Event_type_support_symbol_names_t _Battery_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, srv, Battery_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, srv, Battery_Event)),
  }
};

typedef struct _Battery_Event_type_support_data_t
{
  void * data[2];
} _Battery_Event_type_support_data_t;

static _Battery_Event_type_support_data_t _Battery_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Battery_Event_message_typesupport_map = {
  2,
  "custom_msgs",
  &_Battery_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Battery_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Battery_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Battery_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Battery_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &custom_msgs__srv__Battery_Event__get_type_hash,
  &custom_msgs__srv__Battery_Event__get_type_description,
  &custom_msgs__srv__Battery_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace custom_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, custom_msgs, srv, Battery_Event)() {
  return &::custom_msgs::srv::rosidl_typesupport_c::Battery_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "custom_msgs/srv/detail/battery__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace custom_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _Battery_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Battery_type_support_ids_t;

static const _Battery_type_support_ids_t _Battery_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Battery_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Battery_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Battery_type_support_symbol_names_t _Battery_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, srv, Battery)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, srv, Battery)),
  }
};

typedef struct _Battery_type_support_data_t
{
  void * data[2];
} _Battery_type_support_data_t;

static _Battery_type_support_data_t _Battery_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Battery_service_typesupport_map = {
  2,
  "custom_msgs",
  &_Battery_service_typesupport_ids.typesupport_identifier[0],
  &_Battery_service_typesupport_symbol_names.symbol_name[0],
  &_Battery_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Battery_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Battery_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &Battery_Request_message_type_support_handle,
  &Battery_Response_message_type_support_handle,
  &Battery_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    custom_msgs,
    srv,
    Battery
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    custom_msgs,
    srv,
    Battery
  ),
  &custom_msgs__srv__Battery__get_type_hash,
  &custom_msgs__srv__Battery__get_type_description,
  &custom_msgs__srv__Battery__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace custom_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, custom_msgs, srv, Battery)() {
  return &::custom_msgs::srv::rosidl_typesupport_c::Battery_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
