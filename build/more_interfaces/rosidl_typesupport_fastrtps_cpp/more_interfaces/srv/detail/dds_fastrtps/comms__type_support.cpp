// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from more_interfaces:srv/Comms.idl
// generated code does not contain a copyright notice
#include "more_interfaces/srv/detail/comms__rosidl_typesupport_fastrtps_cpp.hpp"
#include "more_interfaces/srv/detail/comms__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace more_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_more_interfaces
cdr_serialize(
  const more_interfaces::srv::Comms_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: trigger
  cdr << (ros_message.trigger ? true : false);
  // Member: message
  cdr << ros_message.message;
  // Member: pos_longitude
  cdr << ros_message.pos_longitude;
  // Member: pos_latitude
  cdr << ros_message.pos_latitude;
  // Member: pos_altitude
  cdr << ros_message.pos_altitude;
  // Member: turn_yaw
  cdr << ros_message.turn_yaw;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_more_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  more_interfaces::srv::Comms_Request & ros_message)
{
  // Member: trigger
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.trigger = tmp ? true : false;
  }

  // Member: message
  cdr >> ros_message.message;

  // Member: pos_longitude
  cdr >> ros_message.pos_longitude;

  // Member: pos_latitude
  cdr >> ros_message.pos_latitude;

  // Member: pos_altitude
  cdr >> ros_message.pos_altitude;

  // Member: turn_yaw
  cdr >> ros_message.turn_yaw;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_more_interfaces
get_serialized_size(
  const more_interfaces::srv::Comms_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: trigger
  {
    size_t item_size = sizeof(ros_message.trigger);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.message.size() + 1);
  // Member: pos_longitude
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.pos_longitude.size() + 1);
  // Member: pos_latitude
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.pos_latitude.size() + 1);
  // Member: pos_altitude
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.pos_altitude.size() + 1);
  // Member: turn_yaw
  {
    size_t item_size = sizeof(ros_message.turn_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_more_interfaces
max_serialized_size_Comms_Request(
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


  // Member: trigger
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: message
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

  // Member: pos_longitude
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

  // Member: pos_latitude
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

  // Member: pos_altitude
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

  // Member: turn_yaw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Comms_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const more_interfaces::srv::Comms_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Comms_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<more_interfaces::srv::Comms_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Comms_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const more_interfaces::srv::Comms_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Comms_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Comms_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Comms_Request__callbacks = {
  "more_interfaces::srv",
  "Comms_Request",
  _Comms_Request__cdr_serialize,
  _Comms_Request__cdr_deserialize,
  _Comms_Request__get_serialized_size,
  _Comms_Request__max_serialized_size
};

static rosidl_message_type_support_t _Comms_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Comms_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace more_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_more_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<more_interfaces::srv::Comms_Request>()
{
  return &more_interfaces::srv::typesupport_fastrtps_cpp::_Comms_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, more_interfaces, srv, Comms_Request)() {
  return &more_interfaces::srv::typesupport_fastrtps_cpp::_Comms_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace more_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_more_interfaces
cdr_serialize(
  const more_interfaces::srv::Comms_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: connect_success
  cdr << (ros_message.connect_success ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_more_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  more_interfaces::srv::Comms_Response & ros_message)
{
  // Member: connect_success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.connect_success = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_more_interfaces
get_serialized_size(
  const more_interfaces::srv::Comms_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: connect_success
  {
    size_t item_size = sizeof(ros_message.connect_success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_more_interfaces
max_serialized_size_Comms_Response(
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


  // Member: connect_success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _Comms_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const more_interfaces::srv::Comms_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Comms_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<more_interfaces::srv::Comms_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Comms_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const more_interfaces::srv::Comms_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Comms_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Comms_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Comms_Response__callbacks = {
  "more_interfaces::srv",
  "Comms_Response",
  _Comms_Response__cdr_serialize,
  _Comms_Response__cdr_deserialize,
  _Comms_Response__get_serialized_size,
  _Comms_Response__max_serialized_size
};

static rosidl_message_type_support_t _Comms_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Comms_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace more_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_more_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<more_interfaces::srv::Comms_Response>()
{
  return &more_interfaces::srv::typesupport_fastrtps_cpp::_Comms_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, more_interfaces, srv, Comms_Response)() {
  return &more_interfaces::srv::typesupport_fastrtps_cpp::_Comms_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace more_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _Comms__callbacks = {
  "more_interfaces::srv",
  "Comms",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, more_interfaces, srv, Comms_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, more_interfaces, srv, Comms_Response)(),
};

static rosidl_service_type_support_t _Comms__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Comms__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace more_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_more_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<more_interfaces::srv::Comms>()
{
  return &more_interfaces::srv::typesupport_fastrtps_cpp::_Comms__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, more_interfaces, srv, Comms)() {
  return &more_interfaces::srv::typesupport_fastrtps_cpp::_Comms__handle;
}

#ifdef __cplusplus
}
#endif
