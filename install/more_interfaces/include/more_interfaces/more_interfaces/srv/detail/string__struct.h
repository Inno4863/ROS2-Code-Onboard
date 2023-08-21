// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from more_interfaces:srv/String.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__SRV__DETAIL__STRING__STRUCT_H_
#define MORE_INTERFACES__SRV__DETAIL__STRING__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/String in the package more_interfaces.
typedef struct more_interfaces__srv__String_Request
{
  rosidl_runtime_c__String message;
} more_interfaces__srv__String_Request;

// Struct for a sequence of more_interfaces__srv__String_Request.
typedef struct more_interfaces__srv__String_Request__Sequence
{
  more_interfaces__srv__String_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} more_interfaces__srv__String_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/String in the package more_interfaces.
typedef struct more_interfaces__srv__String_Response
{
  bool outcome;
} more_interfaces__srv__String_Response;

// Struct for a sequence of more_interfaces__srv__String_Response.
typedef struct more_interfaces__srv__String_Response__Sequence
{
  more_interfaces__srv__String_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} more_interfaces__srv__String_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORE_INTERFACES__SRV__DETAIL__STRING__STRUCT_H_
