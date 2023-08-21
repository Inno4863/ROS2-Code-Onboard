// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from more_interfaces:srv/Arduino1.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__SRV__DETAIL__ARDUINO1__TRAITS_HPP_
#define MORE_INTERFACES__SRV__DETAIL__ARDUINO1__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "more_interfaces/srv/detail/arduino1__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace more_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Arduino1_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: mission_id
  {
    out << "mission_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_id, out);
    out << ", ";
  }

  // member: trigger
  {
    out << "trigger: ";
    rosidl_generator_traits::value_to_yaml(msg.trigger, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Arduino1_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: mission_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_id, out);
    out << "\n";
  }

  // member: trigger
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trigger: ";
    rosidl_generator_traits::value_to_yaml(msg.trigger, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Arduino1_Request & msg, bool use_flow_style = false)
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
  const more_interfaces::srv::Arduino1_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  more_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use more_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const more_interfaces::srv::Arduino1_Request & msg)
{
  return more_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<more_interfaces::srv::Arduino1_Request>()
{
  return "more_interfaces::srv::Arduino1_Request";
}

template<>
inline const char * name<more_interfaces::srv::Arduino1_Request>()
{
  return "more_interfaces/srv/Arduino1_Request";
}

template<>
struct has_fixed_size<more_interfaces::srv::Arduino1_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<more_interfaces::srv::Arduino1_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<more_interfaces::srv::Arduino1_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace more_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Arduino1_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: outcome
  {
    out << "outcome: ";
    rosidl_generator_traits::value_to_yaml(msg.outcome, out);
    out << ", ";
  }

  // member: outcome2
  {
    out << "outcome2: ";
    rosidl_generator_traits::value_to_yaml(msg.outcome2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Arduino1_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: outcome
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "outcome: ";
    rosidl_generator_traits::value_to_yaml(msg.outcome, out);
    out << "\n";
  }

  // member: outcome2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "outcome2: ";
    rosidl_generator_traits::value_to_yaml(msg.outcome2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Arduino1_Response & msg, bool use_flow_style = false)
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
  const more_interfaces::srv::Arduino1_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  more_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use more_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const more_interfaces::srv::Arduino1_Response & msg)
{
  return more_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<more_interfaces::srv::Arduino1_Response>()
{
  return "more_interfaces::srv::Arduino1_Response";
}

template<>
inline const char * name<more_interfaces::srv::Arduino1_Response>()
{
  return "more_interfaces/srv/Arduino1_Response";
}

template<>
struct has_fixed_size<more_interfaces::srv::Arduino1_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<more_interfaces::srv::Arduino1_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<more_interfaces::srv::Arduino1_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<more_interfaces::srv::Arduino1>()
{
  return "more_interfaces::srv::Arduino1";
}

template<>
inline const char * name<more_interfaces::srv::Arduino1>()
{
  return "more_interfaces/srv/Arduino1";
}

template<>
struct has_fixed_size<more_interfaces::srv::Arduino1>
  : std::integral_constant<
    bool,
    has_fixed_size<more_interfaces::srv::Arduino1_Request>::value &&
    has_fixed_size<more_interfaces::srv::Arduino1_Response>::value
  >
{
};

template<>
struct has_bounded_size<more_interfaces::srv::Arduino1>
  : std::integral_constant<
    bool,
    has_bounded_size<more_interfaces::srv::Arduino1_Request>::value &&
    has_bounded_size<more_interfaces::srv::Arduino1_Response>::value
  >
{
};

template<>
struct is_service<more_interfaces::srv::Arduino1>
  : std::true_type
{
};

template<>
struct is_service_request<more_interfaces::srv::Arduino1_Request>
  : std::true_type
{
};

template<>
struct is_service_response<more_interfaces::srv::Arduino1_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MORE_INTERFACES__SRV__DETAIL__ARDUINO1__TRAITS_HPP_
