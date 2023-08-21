// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from more_interfaces:srv/Timer.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__SRV__DETAIL__TIMER__BUILDER_HPP_
#define MORE_INTERFACES__SRV__DETAIL__TIMER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "more_interfaces/srv/detail/timer__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace more_interfaces
{

namespace srv
{

namespace builder
{

class Init_Timer_Request_time
{
public:
  explicit Init_Timer_Request_time(::more_interfaces::srv::Timer_Request & msg)
  : msg_(msg)
  {}
  ::more_interfaces::srv::Timer_Request time(::more_interfaces::srv::Timer_Request::_time_type arg)
  {
    msg_.time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::more_interfaces::srv::Timer_Request msg_;
};

class Init_Timer_Request_trigger
{
public:
  Init_Timer_Request_trigger()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Timer_Request_time trigger(::more_interfaces::srv::Timer_Request::_trigger_type arg)
  {
    msg_.trigger = std::move(arg);
    return Init_Timer_Request_time(msg_);
  }

private:
  ::more_interfaces::srv::Timer_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::more_interfaces::srv::Timer_Request>()
{
  return more_interfaces::srv::builder::Init_Timer_Request_trigger();
}

}  // namespace more_interfaces


namespace more_interfaces
{

namespace srv
{

namespace builder
{

class Init_Timer_Response_message
{
public:
  explicit Init_Timer_Response_message(::more_interfaces::srv::Timer_Response & msg)
  : msg_(msg)
  {}
  ::more_interfaces::srv::Timer_Response message(::more_interfaces::srv::Timer_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::more_interfaces::srv::Timer_Response msg_;
};

class Init_Timer_Response_success
{
public:
  Init_Timer_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Timer_Response_message success(::more_interfaces::srv::Timer_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Timer_Response_message(msg_);
  }

private:
  ::more_interfaces::srv::Timer_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::more_interfaces::srv::Timer_Response>()
{
  return more_interfaces::srv::builder::Init_Timer_Response_success();
}

}  // namespace more_interfaces

#endif  // MORE_INTERFACES__SRV__DETAIL__TIMER__BUILDER_HPP_
