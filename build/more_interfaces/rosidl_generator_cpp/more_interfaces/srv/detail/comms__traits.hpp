// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from more_interfaces:srv/Comms.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__SRV__DETAIL__COMMS__TRAITS_HPP_
#define MORE_INTERFACES__SRV__DETAIL__COMMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "more_interfaces/srv/detail/comms__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace more_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Comms_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: trigger
  {
    out << "trigger: ";
    rosidl_generator_traits::value_to_yaml(msg.trigger, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: pos_longitude
  {
    out << "pos_longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_longitude, out);
    out << ", ";
  }

  // member: pos_latitude
  {
    out << "pos_latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_latitude, out);
    out << ", ";
  }

  // member: pos_altitude
  {
    out << "pos_altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_altitude, out);
    out << ", ";
  }

  // member: turn_yaw
  {
    out << "turn_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_yaw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Comms_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: trigger
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trigger: ";
    rosidl_generator_traits::value_to_yaml(msg.trigger, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
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

  // member: pos_latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_latitude, out);
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

  // member: turn_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_yaw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Comms_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace more_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use more_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const more_interfaces::srv::Comms_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  more_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use more_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const more_interfaces::srv::Comms_Request & msg)
{
  return more_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<more_interfaces::srv::Comms_Request>()
{
  return "more_interfaces::srv::Comms_Request";
}

template<>
inline const char * name<more_interfaces::srv::Comms_Request>()
{
  return "more_interfaces/srv/Comms_Request";
}

template<>
struct has_fixed_size<more_interfaces::srv::Comms_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<more_interfaces::srv::Comms_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<more_interfaces::srv::Comms_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace more_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Comms_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: connect_success
  {
    out << "connect_success: ";
    rosidl_generator_traits::value_to_yaml(msg.connect_success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Comms_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: connect_success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connect_success: ";
    rosidl_generator_traits::value_to_yaml(msg.connect_success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Comms_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace more_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use more_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const more_interfaces::srv::Comms_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  more_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use more_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const more_interfaces::srv::Comms_Response & msg)
{
  return more_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<more_interfaces::srv::Comms_Response>()
{
  return "more_interfaces::srv::Comms_Response";
}

template<>
inline const char * name<more_interfaces::srv::Comms_Response>()
{
  return "more_interfaces/srv/Comms_Response";
}

template<>
struct has_fixed_size<more_interfaces::srv::Comms_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<more_interfaces::srv::Comms_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<more_interfaces::srv::Comms_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<more_interfaces::srv::Comms>()
{
  return "more_interfaces::srv::Comms";
}

template<>
inline const char * name<more_interfaces::srv::Comms>()
{
  return "more_interfaces/srv/Comms";
}

template<>
struct has_fixed_size<more_interfaces::srv::Comms>
  : std::integral_constant<
    bool,
    has_fixed_size<more_interfaces::srv::Comms_Request>::value &&
    has_fixed_size<more_interfaces::srv::Comms_Response>::value
  >
{
};

template<>
struct has_bounded_size<more_interfaces::srv::Comms>
  : std::integral_constant<
    bool,
    has_bounded_size<more_interfaces::srv::Comms_Request>::value &&
    has_bounded_size<more_interfaces::srv::Comms_Response>::value
  >
{
};

template<>
struct is_service<more_interfaces::srv::Comms>
  : std::true_type
{
};

template<>
struct is_service_request<more_interfaces::srv::Comms_Request>
  : std::true_type
{
};

template<>
struct is_service_response<more_interfaces::srv::Comms_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MORE_INTERFACES__SRV__DETAIL__COMMS__TRAITS_HPP_
