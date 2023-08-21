// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from more_interfaces:msg/Trials1.idl
// generated code does not contain a copyright notice
#include "more_interfaces/msg/detail/trials1__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "more_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "more_interfaces/msg/detail/trials1__struct.h"
#include "more_interfaces/msg/detail/trials1__functions.h"
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


// forward declare type support functions


using _Trials1__ros_msg_type = more_interfaces__msg__Trials1;

static bool _Trials1__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Trials1__ros_msg_type * ros_message = static_cast<const _Trials1__ros_msg_type *>(untyped_ros_message);
  // Field name: is_in_air
  {
    cdr << (ros_message->is_in_air ? true : false);
  }

  // Field name: armed
  {
    cdr << (ros_message->armed ? true : false);
  }

  // Field name: battery_percentage
  {
    cdr << ros_message->battery_percentage;
  }

  // Field name: pos_latitude
  {
    cdr << ros_message->pos_latitude;
  }

  // Field name: pos_longitude
  {
    cdr << ros_message->pos_longitude;
  }

  // Field name: pos_altitude
  {
    cdr << ros_message->pos_altitude;
  }

  // Field name: rel_altitude
  {
    cdr << ros_message->rel_altitude;
  }

  // Field name: gps_satellites
  {
    cdr << ros_message->gps_satellites;
  }

  // Field name: landed_state
  {
    cdr << ros_message->landed_state;
  }

  // Field name: velocity_x
  {
    cdr << ros_message->velocity_x;
  }

  // Field name: velocity_y
  {
    cdr << ros_message->velocity_y;
  }

  // Field name: velocity_z
  {
    cdr << ros_message->velocity_z;
  }

  // Field name: drone_id
  {
    cdr << ros_message->drone_id;
  }

  // Field name: mission_done
  {
    cdr << (ros_message->mission_done ? true : false);
  }

  // Field name: current_yaw
  {
    cdr << ros_message->current_yaw;
  }

  // Field name: flight_mode
  {
    cdr << ros_message->flight_mode;
  }

  return true;
}

static bool _Trials1__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Trials1__ros_msg_type * ros_message = static_cast<_Trials1__ros_msg_type *>(untyped_ros_message);
  // Field name: is_in_air
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_in_air = tmp ? true : false;
  }

  // Field name: armed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->armed = tmp ? true : false;
  }

  // Field name: battery_percentage
  {
    cdr >> ros_message->battery_percentage;
  }

  // Field name: pos_latitude
  {
    cdr >> ros_message->pos_latitude;
  }

  // Field name: pos_longitude
  {
    cdr >> ros_message->pos_longitude;
  }

  // Field name: pos_altitude
  {
    cdr >> ros_message->pos_altitude;
  }

  // Field name: rel_altitude
  {
    cdr >> ros_message->rel_altitude;
  }

  // Field name: gps_satellites
  {
    cdr >> ros_message->gps_satellites;
  }

  // Field name: landed_state
  {
    cdr >> ros_message->landed_state;
  }

  // Field name: velocity_x
  {
    cdr >> ros_message->velocity_x;
  }

  // Field name: velocity_y
  {
    cdr >> ros_message->velocity_y;
  }

  // Field name: velocity_z
  {
    cdr >> ros_message->velocity_z;
  }

  // Field name: drone_id
  {
    cdr >> ros_message->drone_id;
  }

  // Field name: mission_done
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mission_done = tmp ? true : false;
  }

  // Field name: current_yaw
  {
    cdr >> ros_message->current_yaw;
  }

  // Field name: flight_mode
  {
    cdr >> ros_message->flight_mode;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_more_interfaces
size_t get_serialized_size_more_interfaces__msg__Trials1(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Trials1__ros_msg_type * ros_message = static_cast<const _Trials1__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name is_in_air
  {
    size_t item_size = sizeof(ros_message->is_in_air);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name armed
  {
    size_t item_size = sizeof(ros_message->armed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery_percentage
  {
    size_t item_size = sizeof(ros_message->battery_percentage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_latitude
  {
    size_t item_size = sizeof(ros_message->pos_latitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_longitude
  {
    size_t item_size = sizeof(ros_message->pos_longitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_altitude
  {
    size_t item_size = sizeof(ros_message->pos_altitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rel_altitude
  {
    size_t item_size = sizeof(ros_message->rel_altitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_satellites
  {
    size_t item_size = sizeof(ros_message->gps_satellites);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name landed_state
  {
    size_t item_size = sizeof(ros_message->landed_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity_x
  {
    size_t item_size = sizeof(ros_message->velocity_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity_y
  {
    size_t item_size = sizeof(ros_message->velocity_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity_z
  {
    size_t item_size = sizeof(ros_message->velocity_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drone_id
  {
    size_t item_size = sizeof(ros_message->drone_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mission_done
  {
    size_t item_size = sizeof(ros_message->mission_done);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_yaw
  {
    size_t item_size = sizeof(ros_message->current_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flight_mode
  {
    size_t item_size = sizeof(ros_message->flight_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Trials1__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_more_interfaces__msg__Trials1(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_more_interfaces
size_t max_serialized_size_more_interfaces__msg__Trials1(
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

  // member: is_in_air
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: armed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: battery_percentage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pos_latitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pos_longitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pos_altitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rel_altitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gps_satellites
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: landed_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: velocity_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: velocity_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: velocity_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: drone_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mission_done
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: current_yaw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: flight_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Trials1__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_more_interfaces__msg__Trials1(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Trials1 = {
  "more_interfaces::msg",
  "Trials1",
  _Trials1__cdr_serialize,
  _Trials1__cdr_deserialize,
  _Trials1__get_serialized_size,
  _Trials1__max_serialized_size
};

static rosidl_message_type_support_t _Trials1__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Trials1,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, more_interfaces, msg, Trials1)() {
  return &_Trials1__type_support;
}

#if defined(__cplusplus)
}
#endif
