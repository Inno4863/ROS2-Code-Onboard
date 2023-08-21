// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from more_interfaces:srv/Error.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__SRV__DETAIL__ERROR__BUILDER_HPP_
#define MORE_INTERFACES__SRV__DETAIL__ERROR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "more_interfaces/srv/detail/error__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace more_interfaces
{

namespace srv
{

namespace builder
{

class Init_Error_Request_current_yaw
{
public:
  Init_Error_Request_current_yaw()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::more_interfaces::srv::Error_Request current_yaw(::more_interfaces::srv::Error_Request::_current_yaw_type arg)
  {
    msg_.current_yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::more_interfaces::srv::Error_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::more_interfaces::srv::Error_Request>()
{
  return more_interfaces::srv::builder::Init_Error_Request_current_yaw();
}

}  // namespace more_interfaces


namespace more_interfaces
{

namespace srv
{

namespace builder
{

class Init_Error_Response_desired_yaw
{
public:
  Init_Error_Response_desired_yaw()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::more_interfaces::srv::Error_Response desired_yaw(::more_interfaces::srv::Error_Response::_desired_yaw_type arg)
  {
    msg_.desired_yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::more_interfaces::srv::Error_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::more_interfaces::srv::Error_Response>()
{
  return more_interfaces::srv::builder::Init_Error_Response_desired_yaw();
}

}  // namespace more_interfaces

#endif  // MORE_INTERFACES__SRV__DETAIL__ERROR__BUILDER_HPP_
