// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from more_interfaces:srv/Arduino1.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "more_interfaces/srv/detail/arduino1__rosidl_typesupport_introspection_c.h"
#include "more_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "more_interfaces/srv/detail/arduino1__functions.h"
#include "more_interfaces/srv/detail/arduino1__struct.h"


// Include directives for member types
// Member `message`
// Member `mission_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void more_interfaces__srv__Arduino1_Request__rosidl_typesupport_introspection_c__Arduino1_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  more_interfaces__srv__Arduino1_Request__init(message_memory);
}

void more_interfaces__srv__Arduino1_Request__rosidl_typesupport_introspection_c__Arduino1_Request_fini_function(void * message_memory)
{
  more_interfaces__srv__Arduino1_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember more_interfaces__srv__Arduino1_Request__rosidl_typesupport_introspection_c__Arduino1_Request_message_member_array[3] = {
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(more_interfaces__srv__Arduino1_Request, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mission_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(more_interfaces__srv__Arduino1_Request, mission_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trigger",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(more_interfaces__srv__Arduino1_Request, trigger),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers more_interfaces__srv__Arduino1_Request__rosidl_typesupport_introspection_c__Arduino1_Request_message_members = {
  "more_interfaces__srv",  // message namespace
  "Arduino1_Request",  // message name
  3,  // number of fields
  sizeof(more_interfaces__srv__Arduino1_Request),
  more_interfaces__srv__Arduino1_Request__rosidl_typesupport_introspection_c__Arduino1_Request_message_member_array,  // message members
  more_interfaces__srv__Arduino1_Request__rosidl_typesupport_introspection_c__Arduino1_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  more_interfaces__srv__Arduino1_Request__rosidl_typesupport_introspection_c__Arduino1_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t more_interfaces__srv__Arduino1_Request__rosidl_typesupport_introspection_c__Arduino1_Request_message_type_support_handle = {
  0,
  &more_interfaces__srv__Arduino1_Request__rosidl_typesupport_introspection_c__Arduino1_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_more_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, more_interfaces, srv, Arduino1_Request)() {
  if (!more_interfaces__srv__Arduino1_Request__rosidl_typesupport_introspection_c__Arduino1_Request_message_type_support_handle.typesupport_identifier) {
    more_interfaces__srv__Arduino1_Request__rosidl_typesupport_introspection_c__Arduino1_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &more_interfaces__srv__Arduino1_Request__rosidl_typesupport_introspection_c__Arduino1_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "more_interfaces/srv/detail/arduino1__rosidl_typesupport_introspection_c.h"
// already included above
// #include "more_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "more_interfaces/srv/detail/arduino1__functions.h"
// already included above
// #include "more_interfaces/srv/detail/arduino1__struct.h"


// Include directives for member types
// Member `outcome2`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void more_interfaces__srv__Arduino1_Response__rosidl_typesupport_introspection_c__Arduino1_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  more_interfaces__srv__Arduino1_Response__init(message_memory);
}

void more_interfaces__srv__Arduino1_Response__rosidl_typesupport_introspection_c__Arduino1_Response_fini_function(void * message_memory)
{
  more_interfaces__srv__Arduino1_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember more_interfaces__srv__Arduino1_Response__rosidl_typesupport_introspection_c__Arduino1_Response_message_member_array[2] = {
  {
    "outcome",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(more_interfaces__srv__Arduino1_Response, outcome),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "outcome2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(more_interfaces__srv__Arduino1_Response, outcome2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers more_interfaces__srv__Arduino1_Response__rosidl_typesupport_introspection_c__Arduino1_Response_message_members = {
  "more_interfaces__srv",  // message namespace
  "Arduino1_Response",  // message name
  2,  // number of fields
  sizeof(more_interfaces__srv__Arduino1_Response),
  more_interfaces__srv__Arduino1_Response__rosidl_typesupport_introspection_c__Arduino1_Response_message_member_array,  // message members
  more_interfaces__srv__Arduino1_Response__rosidl_typesupport_introspection_c__Arduino1_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  more_interfaces__srv__Arduino1_Response__rosidl_typesupport_introspection_c__Arduino1_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t more_interfaces__srv__Arduino1_Response__rosidl_typesupport_introspection_c__Arduino1_Response_message_type_support_handle = {
  0,
  &more_interfaces__srv__Arduino1_Response__rosidl_typesupport_introspection_c__Arduino1_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_more_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, more_interfaces, srv, Arduino1_Response)() {
  if (!more_interfaces__srv__Arduino1_Response__rosidl_typesupport_introspection_c__Arduino1_Response_message_type_support_handle.typesupport_identifier) {
    more_interfaces__srv__Arduino1_Response__rosidl_typesupport_introspection_c__Arduino1_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &more_interfaces__srv__Arduino1_Response__rosidl_typesupport_introspection_c__Arduino1_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "more_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "more_interfaces/srv/detail/arduino1__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers more_interfaces__srv__detail__arduino1__rosidl_typesupport_introspection_c__Arduino1_service_members = {
  "more_interfaces__srv",  // service namespace
  "Arduino1",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // more_interfaces__srv__detail__arduino1__rosidl_typesupport_introspection_c__Arduino1_Request_message_type_support_handle,
  NULL  // response message
  // more_interfaces__srv__detail__arduino1__rosidl_typesupport_introspection_c__Arduino1_Response_message_type_support_handle
};

static rosidl_service_type_support_t more_interfaces__srv__detail__arduino1__rosidl_typesupport_introspection_c__Arduino1_service_type_support_handle = {
  0,
  &more_interfaces__srv__detail__arduino1__rosidl_typesupport_introspection_c__Arduino1_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, more_interfaces, srv, Arduino1_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, more_interfaces, srv, Arduino1_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_more_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, more_interfaces, srv, Arduino1)() {
  if (!more_interfaces__srv__detail__arduino1__rosidl_typesupport_introspection_c__Arduino1_service_type_support_handle.typesupport_identifier) {
    more_interfaces__srv__detail__arduino1__rosidl_typesupport_introspection_c__Arduino1_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)more_interfaces__srv__detail__arduino1__rosidl_typesupport_introspection_c__Arduino1_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, more_interfaces, srv, Arduino1_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, more_interfaces, srv, Arduino1_Response)()->data;
  }

  return &more_interfaces__srv__detail__arduino1__rosidl_typesupport_introspection_c__Arduino1_service_type_support_handle;
}
