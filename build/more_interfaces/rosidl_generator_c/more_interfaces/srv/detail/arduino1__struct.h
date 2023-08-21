// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from more_interfaces:srv/Arduino1.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__SRV__DETAIL__ARDUINO1__STRUCT_H_
#define MORE_INTERFACES__SRV__DETAIL__ARDUINO1__STRUCT_H_

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
// Member 'mission_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Arduino1 in the package more_interfaces.
typedef struct more_interfaces__srv__Arduino1_Request
{
  rosidl_runtime_c__String message;
  rosidl_runtime_c__String mission_id;
  bool trigger;
} more_interfaces__srv__Arduino1_Request;

// Struct for a sequence of more_interfaces__srv__Arduino1_Request.
typedef struct more_interfaces__srv__Arduino1_Request__Sequence
{
  more_interfaces__srv__Arduino1_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} more_interfaces__srv__Arduino1_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'outcome2'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Arduino1 in the package more_interfaces.
typedef struct more_interfaces__srv__Arduino1_Response
{
  bool outcome;
  rosidl_runtime_c__String outcome2;
} more_interfaces__srv__Arduino1_Response;

// Struct for a sequence of more_interfaces__srv__Arduino1_Response.
typedef struct more_interfaces__srv__Arduino1_Response__Sequence
{
  more_interfaces__srv__Arduino1_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} more_interfaces__srv__Arduino1_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORE_INTERFACES__SRV__DETAIL__ARDUINO1__STRUCT_H_
