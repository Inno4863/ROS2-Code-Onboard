// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from more_interfaces:srv/Alert.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__SRV__DETAIL__ALERT__STRUCT_H_
#define MORE_INTERFACES__SRV__DETAIL__ALERT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'waypoints'
// Member 'execute_action'
// Member 'mission_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Alert in the package more_interfaces.
typedef struct more_interfaces__srv__Alert_Request
{
  bool alert_trigger;
  rosidl_runtime_c__String__Sequence waypoints;
  rosidl_runtime_c__String execute_action;
  rosidl_runtime_c__String mission_id;
} more_interfaces__srv__Alert_Request;

// Struct for a sequence of more_interfaces__srv__Alert_Request.
typedef struct more_interfaces__srv__Alert_Request__Sequence
{
  more_interfaces__srv__Alert_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} more_interfaces__srv__Alert_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Alert in the package more_interfaces.
typedef struct more_interfaces__srv__Alert_Response
{
  bool success_trigger;
} more_interfaces__srv__Alert_Response;

// Struct for a sequence of more_interfaces__srv__Alert_Response.
typedef struct more_interfaces__srv__Alert_Response__Sequence
{
  more_interfaces__srv__Alert_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} more_interfaces__srv__Alert_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORE_INTERFACES__SRV__DETAIL__ALERT__STRUCT_H_
