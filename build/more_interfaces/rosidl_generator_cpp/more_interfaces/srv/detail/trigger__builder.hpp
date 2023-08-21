// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from more_interfaces:srv/Trigger.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__SRV__DETAIL__TRIGGER__BUILDER_HPP_
#define MORE_INTERFACES__SRV__DETAIL__TRIGGER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "more_interfaces/srv/detail/trigger__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace more_interfaces
{

namespace srv
{

namespace builder
{

class Init_Trigger_Request_mission_id
{
public:
  explicit Init_Trigger_Request_mission_id(::more_interfaces::srv::Trigger_Request & msg)
  : msg_(msg)
  {}
  ::more_interfaces::srv::Trigger_Request mission_id(::more_interfaces::srv::Trigger_Request::_mission_id_type arg)
  {
    msg_.mission_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::more_interfaces::srv::Trigger_Request msg_;
};

class Init_Trigger_Request_trigger
{
public:
  Init_Trigger_Request_trigger()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trigger_Request_mission_id trigger(::more_interfaces::srv::Trigger_Request::_trigger_type arg)
  {
    msg_.trigger = std::move(arg);
    return Init_Trigger_Request_mission_id(msg_);
  }

private:
  ::more_interfaces::srv::Trigger_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::more_interfaces::srv::Trigger_Request>()
{
  return more_interfaces::srv::builder::Init_Trigger_Request_trigger();
}

}  // namespace more_interfaces


namespace more_interfaces
{

namespace srv
{

namespace builder
{

class Init_Trigger_Response_success
{
public:
  Init_Trigger_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::more_interfaces::srv::Trigger_Response success(::more_interfaces::srv::Trigger_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::more_interfaces::srv::Trigger_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::more_interfaces::srv::Trigger_Response>()
{
  return more_interfaces::srv::builder::Init_Trigger_Response_success();
}

}  // namespace more_interfaces

#endif  // MORE_INTERFACES__SRV__DETAIL__TRIGGER__BUILDER_HPP_
