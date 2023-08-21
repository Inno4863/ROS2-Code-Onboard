// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from more_interfaces:srv/String.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__SRV__DETAIL__STRING__BUILDER_HPP_
#define MORE_INTERFACES__SRV__DETAIL__STRING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "more_interfaces/srv/detail/string__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace more_interfaces
{

namespace srv
{

namespace builder
{

class Init_String_Request_message
{
public:
  Init_String_Request_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::more_interfaces::srv::String_Request message(::more_interfaces::srv::String_Request::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::more_interfaces::srv::String_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::more_interfaces::srv::String_Request>()
{
  return more_interfaces::srv::builder::Init_String_Request_message();
}

}  // namespace more_interfaces


namespace more_interfaces
{

namespace srv
{

namespace builder
{

class Init_String_Response_outcome
{
public:
  Init_String_Response_outcome()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::more_interfaces::srv::String_Response outcome(::more_interfaces::srv::String_Response::_outcome_type arg)
  {
    msg_.outcome = std::move(arg);
    return std::move(msg_);
  }

private:
  ::more_interfaces::srv::String_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::more_interfaces::srv::String_Response>()
{
  return more_interfaces::srv::builder::Init_String_Response_outcome();
}

}  // namespace more_interfaces

#endif  // MORE_INTERFACES__SRV__DETAIL__STRING__BUILDER_HPP_
