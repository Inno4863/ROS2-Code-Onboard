// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from more_interfaces:msg/Trials1.idl
// generated code does not contain a copyright notice
#include "more_interfaces/msg/detail/trials1__rosidl_typesupport_fastrtps_cpp.hpp"
#include "more_interfaces/msg/detail/trials1__struct.hpp"

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

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_more_interfaces
cdr_serialize(
  const more_interfaces::msg::Trials1 & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: is_in_air
  cdr << (ros_message.is_in_air ? true : false);
  // Member: armed
  cdr << (ros_message.armed ? true : false);
  // Member: battery_percentage
  cdr << ros_message.battery_percentage;
  // Member: pos_latitude
  cdr << ros_message.pos_latitude;
  // Member: pos_longitude
  cdr << ros_message.pos_longitude;
  // Member: pos_altitude
  cdr << ros_message.pos_altitude;
  // Member: rel_altitude
  cdr << ros_message.rel_altitude;
  // Member: gps_satellites
  cdr << ros_message.gps_satellites;
  // Member: landed_state
  cdr << ros_message.landed_state;
  // Member: velocity_x
  cdr << ros_message.velocity_x;
  // Member: velocity_y
  cdr << ros_message.velocity_y;
  // Member: velocity_z
  cdr << ros_message.velocity_z;
  // Member: drone_id
  cdr << ros_message.drone_id;
  // Member: mission_done
  cdr << (ros_message.mission_done ? true : false);
  // Member: current_yaw
  cdr << ros_message.current_yaw;
  // Member: flight_mode
  cdr << ros_message.flight_mode;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_more_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  more_interfaces::msg::Trials1 & ros_message)
{
  // Member: is_in_air
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_in_air = tmp ? true : false;
  }

  // Member: armed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.armed = tmp ? true : false;
  }

  // Member: battery_percentage
  cdr >> ros_message.battery_percentage;

  // Member: pos_latitude
  cdr >> ros_message.pos_latitude;

  // Member: pos_longitude
  cdr >> ros_message.pos_longitude;

  // Member: pos_altitude
  cdr >> ros_message.pos_altitude;

  // Member: rel_altitude
  cdr >> ros_message.rel_altitude;

  // Member: gps_satellites
  cdr >> ros_message.gps_satellites;

  // Member: landed_state
  cdr >> ros_message.landed_state;

  // Member: velocity_x
  cdr >> ros_message.velocity_x;

  // Member: velocity_y
  cdr >> ros_message.velocity_y;

  // Member: velocity_z
  cdr >> ros_message.velocity_z;

  // Member: drone_id
  cdr >> ros_message.drone_id;

  // Member: mission_done
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mission_done = tmp ? true : false;
  }

  // Member: current_yaw
  cdr >> ros_message.current_yaw;

  // Member: flight_mode
  cdr >> ros_message.flight_mode;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_more_interfaces
get_serialized_size(
  const more_interfaces::msg::Trials1 & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: is_in_air
  {
    size_t item_size = sizeof(ros_message.is_in_air);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: armed
  {
    size_t item_size = sizeof(ros_message.armed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_percentage
  {
    size_t item_size = sizeof(ros_message.battery_percentage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_latitude
  {
    size_t item_size = sizeof(ros_message.pos_latitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_longitude
  {
    size_t item_size = sizeof(ros_message.pos_longitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_altitude
  {
    size_t item_size = sizeof(ros_message.pos_altitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rel_altitude
  {
    size_t item_size = sizeof(ros_message.rel_altitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps_satellites
  {
    size_t item_size = sizeof(ros_message.gps_satellites);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: landed_state
  {
    size_t item_size = sizeof(ros_message.landed_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: velocity_x
  {
    size_t item_size = sizeof(ros_message.velocity_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: velocity_y
  {
    size_t item_size = sizeof(ros_message.velocity_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: velocity_z
  {
    size_t item_size = sizeof(ros_message.velocity_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: drone_id
  {
    size_t item_size = sizeof(ros_message.drone_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mission_done
  {
    size_t item_size = sizeof(ros_message.mission_done);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: current_yaw
  {
    size_t item_size = sizeof(ros_message.current_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flight_mode
  {
    size_t item_size = sizeof(ros_message.flight_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_more_interfaces
max_serialized_size_Trials1(
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


  // Member: is_in_air
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: armed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: battery_percentage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: pos_latitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: pos_longitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: pos_altitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rel_altitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gps_satellites
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: landed_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: velocity_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: velocity_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: velocity_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: drone_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mission_done
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: current_yaw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: flight_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Trials1__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const more_interfaces::msg::Trials1 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Trials1__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<more_interfaces::msg::Trials1 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Trials1__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const more_interfaces::msg::Trials1 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Trials1__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Trials1(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Trials1__callbacks = {
  "more_interfaces::msg",
  "Trials1",
  _Trials1__cdr_serialize,
  _Trials1__cdr_deserialize,
  _Trials1__get_serialized_size,
  _Trials1__max_serialized_size
};

static rosidl_message_type_support_t _Trials1__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Trials1__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace more_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_more_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<more_interfaces::msg::Trials1>()
{
  return &more_interfaces::msg::typesupport_fastrtps_cpp::_Trials1__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, more_interfaces, msg, Trials1)() {
  return &more_interfaces::msg::typesupport_fastrtps_cpp::_Trials1__handle;
}

#ifdef __cplusplus
}
#endif
