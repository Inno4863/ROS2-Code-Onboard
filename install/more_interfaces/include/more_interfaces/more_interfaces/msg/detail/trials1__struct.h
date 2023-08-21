// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from more_interfaces:msg/Trials1.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__MSG__DETAIL__TRIALS1__STRUCT_H_
#define MORE_INTERFACES__MSG__DETAIL__TRIALS1__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Trials1 in the package more_interfaces.
typedef struct more_interfaces__msg__Trials1
{
  bool is_in_air;
  bool armed;
  double battery_percentage;
  double pos_latitude;
  double pos_longitude;
  float pos_altitude;
  float rel_altitude;
  int32_t gps_satellites;
  int32_t landed_state;
  double velocity_x;
  double velocity_y;
  double velocity_z;
  int32_t drone_id;
  bool mission_done;
  double current_yaw;
  int32_t flight_mode;
} more_interfaces__msg__Trials1;

// Struct for a sequence of more_interfaces__msg__Trials1.
typedef struct more_interfaces__msg__Trials1__Sequence
{
  more_interfaces__msg__Trials1 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} more_interfaces__msg__Trials1__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORE_INTERFACES__MSG__DETAIL__TRIALS1__STRUCT_H_
