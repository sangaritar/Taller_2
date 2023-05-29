// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mi_robot_servicio:srv/Player.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mi_robot_servicio/srv/detail/player__rosidl_typesupport_introspection_c.h"
#include "mi_robot_servicio/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mi_robot_servicio/srv/detail/player__functions.h"
#include "mi_robot_servicio/srv/detail/player__struct.h"


// Include directives for member types
// Member `player`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mi_robot_servicio__srv__Player_Request__rosidl_typesupport_introspection_c__Player_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mi_robot_servicio__srv__Player_Request__init(message_memory);
}

void mi_robot_servicio__srv__Player_Request__rosidl_typesupport_introspection_c__Player_Request_fini_function(void * message_memory)
{
  mi_robot_servicio__srv__Player_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mi_robot_servicio__srv__Player_Request__rosidl_typesupport_introspection_c__Player_Request_message_member_array[1] = {
  {
    "player",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mi_robot_servicio__srv__Player_Request, player),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mi_robot_servicio__srv__Player_Request__rosidl_typesupport_introspection_c__Player_Request_message_members = {
  "mi_robot_servicio__srv",  // message namespace
  "Player_Request",  // message name
  1,  // number of fields
  sizeof(mi_robot_servicio__srv__Player_Request),
  mi_robot_servicio__srv__Player_Request__rosidl_typesupport_introspection_c__Player_Request_message_member_array,  // message members
  mi_robot_servicio__srv__Player_Request__rosidl_typesupport_introspection_c__Player_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  mi_robot_servicio__srv__Player_Request__rosidl_typesupport_introspection_c__Player_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mi_robot_servicio__srv__Player_Request__rosidl_typesupport_introspection_c__Player_Request_message_type_support_handle = {
  0,
  &mi_robot_servicio__srv__Player_Request__rosidl_typesupport_introspection_c__Player_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mi_robot_servicio
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mi_robot_servicio, srv, Player_Request)() {
  if (!mi_robot_servicio__srv__Player_Request__rosidl_typesupport_introspection_c__Player_Request_message_type_support_handle.typesupport_identifier) {
    mi_robot_servicio__srv__Player_Request__rosidl_typesupport_introspection_c__Player_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mi_robot_servicio__srv__Player_Request__rosidl_typesupport_introspection_c__Player_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mi_robot_servicio/srv/detail/player__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mi_robot_servicio/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mi_robot_servicio/srv/detail/player__functions.h"
// already included above
// #include "mi_robot_servicio/srv/detail/player__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void mi_robot_servicio__srv__Player_Response__rosidl_typesupport_introspection_c__Player_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mi_robot_servicio__srv__Player_Response__init(message_memory);
}

void mi_robot_servicio__srv__Player_Response__rosidl_typesupport_introspection_c__Player_Response_fini_function(void * message_memory)
{
  mi_robot_servicio__srv__Player_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mi_robot_servicio__srv__Player_Response__rosidl_typesupport_introspection_c__Player_Response_message_member_array[1] = {
  {
    "sum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mi_robot_servicio__srv__Player_Response, sum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mi_robot_servicio__srv__Player_Response__rosidl_typesupport_introspection_c__Player_Response_message_members = {
  "mi_robot_servicio__srv",  // message namespace
  "Player_Response",  // message name
  1,  // number of fields
  sizeof(mi_robot_servicio__srv__Player_Response),
  mi_robot_servicio__srv__Player_Response__rosidl_typesupport_introspection_c__Player_Response_message_member_array,  // message members
  mi_robot_servicio__srv__Player_Response__rosidl_typesupport_introspection_c__Player_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  mi_robot_servicio__srv__Player_Response__rosidl_typesupport_introspection_c__Player_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mi_robot_servicio__srv__Player_Response__rosidl_typesupport_introspection_c__Player_Response_message_type_support_handle = {
  0,
  &mi_robot_servicio__srv__Player_Response__rosidl_typesupport_introspection_c__Player_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mi_robot_servicio
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mi_robot_servicio, srv, Player_Response)() {
  if (!mi_robot_servicio__srv__Player_Response__rosidl_typesupport_introspection_c__Player_Response_message_type_support_handle.typesupport_identifier) {
    mi_robot_servicio__srv__Player_Response__rosidl_typesupport_introspection_c__Player_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mi_robot_servicio__srv__Player_Response__rosidl_typesupport_introspection_c__Player_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mi_robot_servicio/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "mi_robot_servicio/srv/detail/player__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers mi_robot_servicio__srv__detail__player__rosidl_typesupport_introspection_c__Player_service_members = {
  "mi_robot_servicio__srv",  // service namespace
  "Player",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // mi_robot_servicio__srv__detail__player__rosidl_typesupport_introspection_c__Player_Request_message_type_support_handle,
  NULL  // response message
  // mi_robot_servicio__srv__detail__player__rosidl_typesupport_introspection_c__Player_Response_message_type_support_handle
};

static rosidl_service_type_support_t mi_robot_servicio__srv__detail__player__rosidl_typesupport_introspection_c__Player_service_type_support_handle = {
  0,
  &mi_robot_servicio__srv__detail__player__rosidl_typesupport_introspection_c__Player_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mi_robot_servicio, srv, Player_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mi_robot_servicio, srv, Player_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mi_robot_servicio
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mi_robot_servicio, srv, Player)() {
  if (!mi_robot_servicio__srv__detail__player__rosidl_typesupport_introspection_c__Player_service_type_support_handle.typesupport_identifier) {
    mi_robot_servicio__srv__detail__player__rosidl_typesupport_introspection_c__Player_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)mi_robot_servicio__srv__detail__player__rosidl_typesupport_introspection_c__Player_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mi_robot_servicio, srv, Player_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mi_robot_servicio, srv, Player_Response)()->data;
  }

  return &mi_robot_servicio__srv__detail__player__rosidl_typesupport_introspection_c__Player_service_type_support_handle;
}
