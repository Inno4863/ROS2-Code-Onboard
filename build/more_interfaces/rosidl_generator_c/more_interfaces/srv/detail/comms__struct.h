// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from more_interfaces:srv/Comms.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__SRV__DETAIL__COMMS__STRUCT_H_
#define MORE_INTERFACES__SRV__DETAIL__COMMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'message'
// Member 'pos_longitude'
// Member 'pos_latitude'
// Member 'pos_altitude'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Comms in the package more_interfaces.
typedef struct more_interfaces__srv__Comms_Request
{
  bool trigger;
  rosidl_runtime_c__String message;
  rosidl_runtime_c__String pos_longitude;
  rosidl_runtime_c__String pos_latitude;
  rosidl_runtime_c__String pos_altitude;
  double turn_yaw;
} more_interfaces__srv__Comms_Request;

// Struct for a sequence of more_interfaces__srv__Comms_Request.
typedef struct more_interfaces__srv__Comms_Request__Sequence
{
  more_interfaces__srv__Comms_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} more_interfaces__srv__Comms_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Comms in the package more_interfaces.
typedef struct more_interfaces__srv__Comms_Response
{
  bool connect_success;
} more_interfaces__srv__Comms_Response;

// Struct for a sequence of more_interfaces__srv__Comms_Response.
typedef struct more_interfaces__srv__Comms_Response__Sequence
{
  more_interfaces__srv__Comms_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} more_interfaces__srv__Comms_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORE_INTERFACES__SRV__DETAIL__COMMS__STRUCT_H_
