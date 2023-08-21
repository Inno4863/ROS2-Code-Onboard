// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from more_interfaces:srv/Arduino1.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__SRV__DETAIL__ARDUINO1__BUILDER_HPP_
#define MORE_INTERFACES__SRV__DETAIL__ARDUINO1__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "more_interfaces/srv/detail/arduino1__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace more_interfaces
{

namespace srv
{

namespace builder
{

class Init_Arduino1_Request_trigger
{
public:
  explicit Init_Arduino1_Request_trigger(::more_interfaces::srv::Arduino1_Request & msg)
  : msg_(msg)
  {}
  ::more_interfaces::srv::Arduino1_Request trigger(::more_interfaces::srv::Arduino1_Request::_trigger_type arg)
  {
    msg_.trigger = std::move(arg);
    return std::move(msg_);
  }

private:
  ::more_interfaces::srv::Arduino1_Request msg_;
};

class Init_Arduino1_Request_mission_id
{
public:
  explicit Init_Arduino1_Request_mission_id(::more_interfaces::srv::Arduino1_Request & msg)
  : msg_(msg)
  {}
  Init_Arduino1_Request_trigger mission_id(::more_interfaces::srv::Arduino1_Request::_mission_id_type arg)
  {
    msg_.mission_id = std::move(arg);
    return Init_Arduino1_Request_trigger(msg_);
  }

private:
  ::more_interfaces::srv::Arduino1_Request msg_;
};

class Init_Arduino1_Request_message
{
public:
  Init_Arduino1_Request_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Arduino1_Request_mission_id message(::more_interfaces::srv::Arduino1_Request::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_Arduino1_Request_mission_id(msg_);
  }

private:
  ::more_interfaces::srv::Arduino1_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::more_interfaces::srv::Arduino1_Request>()
{
  return more_interfaces::srv::builder::Init_Arduino1_Request_message();
}

}  // namespace more_interfaces


namespace more_interfaces
{

namespace srv
{

namespace builder
{

class Init_Arduino1_Response_outcome2
{
public:
  explicit Init_Arduino1_Response_outcome2(::more_interfaces::srv::Arduino1_Response & msg)
  : msg_(msg)
  {}
  ::more_interfaces::srv::Arduino1_Response outcome2(::more_interfaces::srv::Arduino1_Response::_outcome2_type arg)
  {
    msg_.outcome2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::more_interfaces::srv::Arduino1_Response msg_;
};

class Init_Arduino1_Response_outcome
{
public:
  Init_Arduino1_Response_outcome()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Arduino1_Response_outcome2 outcome(::more_interfaces::srv::Arduino1_Response::_outcome_type arg)
  {
    msg_.outcome = std::move(arg);
    return Init_Arduino1_Response_outcome2(msg_);
  }

private:
  ::more_interfaces::srv::Arduino1_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::more_interfaces::srv::Arduino1_Response>()
{
  return more_interfaces::srv::builder::Init_Arduino1_Response_outcome();
}

}  // namespace more_interfaces

#endif  // MORE_INTERFACES__SRV__DETAIL__ARDUINO1__BUILDER_HPP_
