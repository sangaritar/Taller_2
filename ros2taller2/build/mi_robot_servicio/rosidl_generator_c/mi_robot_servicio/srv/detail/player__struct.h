// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mi_robot_servicio:srv/Player.idl
// generated code does not contain a copyright notice

#ifndef MI_ROBOT_SERVICIO__SRV__DETAIL__PLAYER__STRUCT_H_
#define MI_ROBOT_SERVICIO__SRV__DETAIL__PLAYER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'player'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Player in the package mi_robot_servicio.
typedef struct mi_robot_servicio__srv__Player_Request
{
  rosidl_runtime_c__String player;
} mi_robot_servicio__srv__Player_Request;

// Struct for a sequence of mi_robot_servicio__srv__Player_Request.
typedef struct mi_robot_servicio__srv__Player_Request__Sequence
{
  mi_robot_servicio__srv__Player_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mi_robot_servicio__srv__Player_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Player in the package mi_robot_servicio.
typedef struct mi_robot_servicio__srv__Player_Response
{
  bool sum;
} mi_robot_servicio__srv__Player_Response;

// Struct for a sequence of mi_robot_servicio__srv__Player_Response.
typedef struct mi_robot_servicio__srv__Player_Response__Sequence
{
  mi_robot_servicio__srv__Player_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mi_robot_servicio__srv__Player_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MI_ROBOT_SERVICIO__SRV__DETAIL__PLAYER__STRUCT_H_
