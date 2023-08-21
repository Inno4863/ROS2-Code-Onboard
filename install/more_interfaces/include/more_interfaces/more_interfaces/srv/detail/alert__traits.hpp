// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from more_interfaces:srv/Alert.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__SRV__DETAIL__ALERT__TRAITS_HPP_
#define MORE_INTERFACES__SRV__DETAIL__ALERT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "more_interfaces/srv/detail/alert__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace more_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Alert_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: alert_trigger
  {
    out << "alert_trigger: ";
    rosidl_generator_traits::value_to_yaml(msg.alert_trigger, out);
    out << ", ";
  }

  // member: waypoints
  {
    if (msg.waypoints.size() == 0) {
      out << "waypoints: []";
    } else {
      out << "waypoints: [";
      size_t pending_items = msg.waypoints.size();
      for (auto item : msg.waypoints) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: execute_action
  {
    out << "execute_action: ";
    rosidl_generator_traits::value_to_yaml(msg.execute_action, out);
    out << ", ";
  }

  // member: mission_id
  {
    out << "mission_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Alert_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: alert_trigger
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alert_trigger: ";
    rosidl_generator_traits::value_to_yaml(msg.alert_trigger, out);
    out << "\n";
  }

  // member: waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.waypoints.size() == 0) {
      out << "waypoints: []\n";
    } else {
      out << "waypoints:\n";
      for (auto item : msg.waypoints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: execute_action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "execute_action: ";
    rosidl_generator_traits::value_to_yaml(msg.execute_action, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Alert_Request & msg, bool use_flow_style = false)
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
  const more_interfaces::srv::Alert_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  more_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use more_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const more_interfaces::srv::Alert_Request & msg)
{
  return more_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<more_interfaces::srv::Alert_Request>()
{
  return "more_interfaces::srv::Alert_Request";
}

template<>
inline const char * name<more_interfaces::srv::Alert_Request>()
{
  return "more_interfaces/srv/Alert_Request";
}

template<>
struct has_fixed_size<more_interfaces::srv::Alert_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<more_interfaces::srv::Alert_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<more_interfaces::srv::Alert_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace more_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Alert_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success_trigger
  {
    out << "success_trigger: ";
    rosidl_generator_traits::value_to_yaml(msg.success_trigger, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Alert_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success_trigger
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success_trigger: ";
    rosidl_generator_traits::value_to_yaml(msg.success_trigger, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Alert_Response & msg, bool use_flow_style = false)
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
  const more_interfaces::srv::Alert_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  more_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use more_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const more_interfaces::srv::Alert_Response & msg)
{
  return more_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<more_interfaces::srv::Alert_Response>()
{
  return "more_interfaces::srv::Alert_Response";
}

template<>
inline const char * name<more_interfaces::srv::Alert_Response>()
{
  return "more_interfaces/srv/Alert_Response";
}

template<>
struct has_fixed_size<more_interfaces::srv::Alert_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<more_interfaces::srv::Alert_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<more_interfaces::srv::Alert_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<more_interfaces::srv::Alert>()
{
  return "more_interfaces::srv::Alert";
}

template<>
inline const char * name<more_interfaces::srv::Alert>()
{
  return "more_interfaces/srv/Alert";
}

template<>
struct has_fixed_size<more_interfaces::srv::Alert>
  : std::integral_constant<
    bool,
    has_fixed_size<more_interfaces::srv::Alert_Request>::value &&
    has_fixed_size<more_interfaces::srv::Alert_Response>::value
  >
{
};

template<>
struct has_bounded_size<more_interfaces::srv::Alert>
  : std::integral_constant<
    bool,
    has_bounded_size<more_interfaces::srv::Alert_Request>::value &&
    has_bounded_size<more_interfaces::srv::Alert_Response>::value
  >
{
};

template<>
struct is_service<more_interfaces::srv::Alert>
  : std::true_type
{
};

template<>
struct is_service_request<more_interfaces::srv::Alert_Request>
  : std::true_type
{
};

template<>
struct is_service_response<more_interfaces::srv::Alert_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MORE_INTERFACES__SRV__DETAIL__ALERT__TRAITS_HPP_
