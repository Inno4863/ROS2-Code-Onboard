// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from more_interfaces:srv/Comms.idl
// generated code does not contain a copyright notice
#include "more_interfaces/srv/detail/comms__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "more_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "more_interfaces/srv/detail/comms__struct.h"
#include "more_interfaces/srv/detail/comms__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // message, pos_altitude, pos_latitude, pos_longitude
#include "rosidl_runtime_c/string_functions.h"  // message, pos_altitude, pos_latitude, pos_longitude

// forward declare type support functions


using _Comms_Request__ros_msg_type = more_interfaces__srv__Comms_Request;

static bool _Comms_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Comms_Request__ros_msg_type * ros_message = static_cast<const _Comms_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: trigger
  {
    cdr << (ros_message->trigger ? true : false);
  }

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: pos_longitude
  {
    const rosidl_runtime_c__String * str = &ros_message->pos_longitude;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: pos_latitude
  {
    const rosidl_runtime_c__String * str = &ros_message->pos_latitude;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: pos_altitude
  {
    const rosidl_runtime_c__String * str = &ros_message->pos_altitude;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: turn_yaw
  {
    cdr << ros_message->turn_yaw;
  }

  return true;
}

static bool _Comms_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Comms_Request__ros_msg_type * ros_message = static_cast<_Comms_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: trigger
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->trigger = tmp ? true : false;
  }

  // Field name: message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message.data) {
      rosidl_runtime_c__String__init(&ros_message->message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message'\n");
      return false;
    }
  }

  // Field name: pos_longitude
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->pos_longitude.data) {
      rosidl_runtime_c__String__init(&ros_message->pos_longitude);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->pos_longitude,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'pos_longitude'\n");
      return false;
    }
  }

  // Field name: pos_latitude
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->pos_latitude.data) {
      rosidl_runtime_c__String__init(&ros_message->pos_latitude);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->pos_latitude,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'pos_latitude'\n");
      return false;
    }
  }

  // Field name: pos_altitude
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->pos_altitude.data) {
      rosidl_runtime_c__String__init(&ros_message->pos_altitude);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->pos_altitude,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'pos_altitude'\n");
      return false;
    }
  }

  // Field name: turn_yaw
  {
    cdr >> ros_message->turn_yaw;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_more_interfaces
size_t get_serialized_size_more_interfaces__srv__Comms_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Comms_Request__ros_msg_type * ros_message = static_cast<const _Comms_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name trigger
  {
    size_t item_size = sizeof(ros_message->trigger);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);
  // field.name pos_longitude
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->pos_longitude.size + 1);
  // field.name pos_latitude
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->pos_latitude.size + 1);
  // field.name pos_altitude
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->pos_altitude.size + 1);
  // field.name turn_yaw
  {
    size_t item_size = sizeof(ros_message->turn_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Comms_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_more_interfaces__srv__Comms_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_more_interfaces
size_t max_serialized_size_more_interfaces__srv__Comms_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: trigger
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: message
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: pos_longitude
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: pos_latitude
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: pos_altitude
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: turn_yaw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Comms_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_more_interfaces__srv__Comms_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Comms_Request = {
  "more_interfaces::srv",
  "Comms_Request",
  _Comms_Request__cdr_serialize,
  _Comms_Request__cdr_deserialize,
  _Comms_Request__get_serialized_size,
  _Comms_Request__max_serialized_size
};

static rosidl_message_type_support_t _Comms_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Comms_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, more_interfaces, srv, Comms_Request)() {
  return &_Comms_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "more_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "more_interfaces/srv/detail/comms__struct.h"
// already included above
// #include "more_interfaces/srv/detail/comms__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Comms_Response__ros_msg_type = more_interfaces__srv__Comms_Response;

static bool _Comms_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Comms_Response__ros_msg_type * ros_message = static_cast<const _Comms_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: connect_success
  {
    cdr << (ros_message->connect_success ? true : false);
  }

  return true;
}

static bool _Comms_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Comms_Response__ros_msg_type * ros_message = static_cast<_Comms_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: connect_success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->connect_success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_more_interfaces
size_t get_serialized_size_more_interfaces__srv__Comms_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Comms_Response__ros_msg_type * ros_message = static_cast<const _Comms_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name connect_success
  {
    size_t item_size = sizeof(ros_message->connect_success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Comms_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_more_interfaces__srv__Comms_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_more_interfaces
size_t max_serialized_size_more_interfaces__srv__Comms_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: connect_success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Comms_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_more_interfaces__srv__Comms_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Comms_Response = {
  "more_interfaces::srv",
  "Comms_Response",
  _Comms_Response__cdr_serialize,
  _Comms_Response__cdr_deserialize,
  _Comms_Response__get_serialized_size,
  _Comms_Response__max_serialized_size
};

static rosidl_message_type_support_t _Comms_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Comms_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, more_interfaces, srv, Comms_Response)() {
  return &_Comms_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "more_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "more_interfaces/srv/comms.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Comms__callbacks = {
  "more_interfaces::srv",
  "Comms",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, more_interfaces, srv, Comms_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, more_interfaces, srv, Comms_Response)(),
};

static rosidl_service_type_support_t Comms__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Comms__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, more_interfaces, srv, Comms)() {
  return &Comms__handle;
}

#if defined(__cplusplus)
}
#endif
