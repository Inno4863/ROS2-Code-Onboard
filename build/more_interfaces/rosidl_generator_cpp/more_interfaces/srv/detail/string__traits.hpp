// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from more_interfaces:srv/String.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__SRV__DETAIL__STRING__TRAITS_HPP_
#define MORE_INTERFACES__SRV__DETAIL__STRING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "more_interfaces/srv/detail/string__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace more_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const String_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const String_Request & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const String_Request & msg, bool use_flow_style = false)
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
  const more_interfaces::srv::String_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  more_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use more_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const more_interfaces::srv::String_Request & msg)
{
  return more_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<more_interfaces::srv::String_Request>()
{
  return "more_interfaces::srv::String_Request";
}

template<>
inline const char * name<more_interfaces::srv::String_Request>()
{
  return "more_interfaces/srv/String_Request";
}

template<>
struct has_fixed_size<more_interfaces::srv::String_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<more_interfaces::srv::String_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<more_interfaces::srv::String_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace more_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const String_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: outcome
  {
    out << "outcome: ";
    rosidl_generator_traits::value_to_yaml(msg.outcome, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const String_Response & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const String_Response & msg, bool use_flow_style = false)
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
  const more_interfaces::srv::String_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  more_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use more_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const more_interfaces::srv::String_Response & msg)
{
  return more_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<more_interfaces::srv::String_Response>()
{
  return "more_interfaces::srv::String_Response";
}

template<>
inline const char * name<more_interfaces::srv::String_Response>()
{
  return "more_interfaces/srv/String_Response";
}

template<>
struct has_fixed_size<more_interfaces::srv::String_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<more_interfaces::srv::String_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<more_interfaces::srv::String_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<more_interfaces::srv::String>()
{
  return "more_interfaces::srv::String";
}

template<>
inline const char * name<more_interfaces::srv::String>()
{
  return "more_interfaces/srv/String";
}

template<>
struct has_fixed_size<more_interfaces::srv::String>
  : std::integral_constant<
    bool,
    has_fixed_size<more_interfaces::srv::String_Request>::value &&
    has_fixed_size<more_interfaces::srv::String_Response>::value
  >
{
};

template<>
struct has_bounded_size<more_interfaces::srv::String>
  : std::integral_constant<
    bool,
    has_bounded_size<more_interfaces::srv::String_Request>::value &&
    has_bounded_size<more_interfaces::srv::String_Response>::value
  >
{
};

template<>
struct is_service<more_interfaces::srv::String>
  : std::true_type
{
};

template<>
struct is_service_request<more_interfaces::srv::String_Request>
  : std::true_type
{
};

template<>
struct is_service_response<more_interfaces::srv::String_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MORE_INTERFACES__SRV__DETAIL__STRING__TRAITS_HPP_
