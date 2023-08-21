// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from more_interfaces:msg/Trials1.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__MSG__DETAIL__TRIALS1__TRAITS_HPP_
#define MORE_INTERFACES__MSG__DETAIL__TRIALS1__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "more_interfaces/msg/detail/trials1__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace more_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Trials1 & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_in_air
  {
    out << "is_in_air: ";
    rosidl_generator_traits::value_to_yaml(msg.is_in_air, out);
    out << ", ";
  }

  // member: armed
  {
    out << "armed: ";
    rosidl_generator_traits::value_to_yaml(msg.armed, out);
    out << ", ";
  }

  // member: battery_percentage
  {
    out << "battery_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_percentage, out);
    out << ", ";
  }

  // member: pos_latitude
  {
    out << "pos_latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_latitude, out);
    out << ", ";
  }

  // member: pos_longitude
  {
    out << "pos_longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_longitude, out);
    out << ", ";
  }

  // member: pos_altitude
  {
    out << "pos_altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_altitude, out);
    out << ", ";
  }

  // member: rel_altitude
  {
    out << "rel_altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_altitude, out);
    out << ", ";
  }

  // member: gps_satellites
  {
    out << "gps_satellites: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_satellites, out);
    out << ", ";
  }

  // member: landed_state
  {
    out << "landed_state: ";
    rosidl_generator_traits::value_to_yaml(msg.landed_state, out);
    out << ", ";
  }

  // member: velocity_x
  {
    out << "velocity_x: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_x, out);
    out << ", ";
  }

  // member: velocity_y
  {
    out << "velocity_y: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_y, out);
    out << ", ";
  }

  // member: velocity_z
  {
    out << "velocity_z: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_z, out);
    out << ", ";
  }

  // member: drone_id
  {
    out << "drone_id: ";
    rosidl_generator_traits::value_to_yaml(msg.drone_id, out);
    out << ", ";
  }

  // member: mission_done
  {
    out << "mission_done: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_done, out);
    out << ", ";
  }

  // member: current_yaw
  {
    out << "current_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.current_yaw, out);
    out << ", ";
  }

  // member: flight_mode
  {
    out << "flight_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.flight_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Trials1 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_in_air
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_in_air: ";
    rosidl_generator_traits::value_to_yaml(msg.is_in_air, out);
    out << "\n";
  }

  // member: armed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "armed: ";
    rosidl_generator_traits::value_to_yaml(msg.armed, out);
    out << "\n";
  }

  // member: battery_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_percentage, out);
    out << "\n";
  }

  // member: pos_latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_latitude, out);
    out << "\n";
  }

  // member: pos_longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_longitude, out);
    out << "\n";
  }

  // member: pos_altitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_altitude, out);
    out << "\n";
  }

  // member: rel_altitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rel_altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_altitude, out);
    out << "\n";
  }

  // member: gps_satellites
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_satellites: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_satellites, out);
    out << "\n";
  }

  // member: landed_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "landed_state: ";
    rosidl_generator_traits::value_to_yaml(msg.landed_state, out);
    out << "\n";
  }

  // member: velocity_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_x: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_x, out);
    out << "\n";
  }

  // member: velocity_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_y: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_y, out);
    out << "\n";
  }

  // member: velocity_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_z: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_z, out);
    out << "\n";
  }

  // member: drone_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drone_id: ";
    rosidl_generator_traits::value_to_yaml(msg.drone_id, out);
    out << "\n";
  }

  // member: mission_done
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_done: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_done, out);
    out << "\n";
  }

  // member: current_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.current_yaw, out);
    out << "\n";
  }

  // member: flight_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flight_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.flight_mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Trials1 & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace more_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use more_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const more_interfaces::msg::Trials1 & msg,
  std::ostream & out, size_t indentation = 0)
{
  more_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use more_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const more_interfaces::msg::Trials1 & msg)
{
  return more_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<more_interfaces::msg::Trials1>()
{
  return "more_interfaces::msg::Trials1";
}

template<>
inline const char * name<more_interfaces::msg::Trials1>()
{
  return "more_interfaces/msg/Trials1";
}

template<>
struct has_fixed_size<more_interfaces::msg::Trials1>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<more_interfaces::msg::Trials1>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<more_interfaces::msg::Trials1>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORE_INTERFACES__MSG__DETAIL__TRIALS1__TRAITS_HPP_
