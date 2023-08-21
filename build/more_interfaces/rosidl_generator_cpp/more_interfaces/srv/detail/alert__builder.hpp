// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from more_interfaces:srv/Alert.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__SRV__DETAIL__ALERT__BUILDER_HPP_
#define MORE_INTERFACES__SRV__DETAIL__ALERT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "more_interfaces/srv/detail/alert__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace more_interfaces
{

namespace srv
{

namespace builder
{

class Init_Alert_Request_mission_id
{
public:
  explicit Init_Alert_Request_mission_id(::more_interfaces::srv::Alert_Request & msg)
  : msg_(msg)
  {}
  ::more_interfaces::srv::Alert_Request mission_id(::more_interfaces::srv::Alert_Request::_mission_id_type arg)
  {
    msg_.mission_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::more_interfaces::srv::Alert_Request msg_;
};

class Init_Alert_Request_execute_action
{
public:
  explicit Init_Alert_Request_execute_action(::more_interfaces::srv::Alert_Request & msg)
  : msg_(msg)
  {}
  Init_Alert_Request_mission_id execute_action(::more_interfaces::srv::Alert_Request::_execute_action_type arg)
  {
    msg_.execute_action = std::move(arg);
    return Init_Alert_Request_mission_id(msg_);
  }

private:
  ::more_interfaces::srv::Alert_Request msg_;
};

class Init_Alert_Request_waypoints
{
public:
  explicit Init_Alert_Request_waypoints(::more_interfaces::srv::Alert_Request & msg)
  : msg_(msg)
  {}
  Init_Alert_Request_execute_action waypoints(::more_interfaces::srv::Alert_Request::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return Init_Alert_Request_execute_action(msg_);
  }

private:
  ::more_interfaces::srv::Alert_Request msg_;
};

class Init_Alert_Request_alert_trigger
{
public:
  Init_Alert_Request_alert_trigger()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Alert_Request_waypoints alert_trigger(::more_interfaces::srv::Alert_Request::_alert_trigger_type arg)
  {
    msg_.alert_trigger = std::move(arg);
    return Init_Alert_Request_waypoints(msg_);
  }

private:
  ::more_interfaces::srv::Alert_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::more_interfaces::srv::Alert_Request>()
{
  return more_interfaces::srv::builder::Init_Alert_Request_alert_trigger();
}

}  // namespace more_interfaces


namespace more_interfaces
{

namespace srv
{

namespace builder
{

class Init_Alert_Response_success_trigger
{
public:
  Init_Alert_Response_success_trigger()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::more_interfaces::srv::Alert_Response success_trigger(::more_interfaces::srv::Alert_Response::_success_trigger_type arg)
  {
    msg_.success_trigger = std::move(arg);
    return std::move(msg_);
  }

private:
  ::more_interfaces::srv::Alert_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::more_interfaces::srv::Alert_Response>()
{
  return more_interfaces::srv::builder::Init_Alert_Response_success_trigger();
}

}  // namespace more_interfaces

#endif  // MORE_INTERFACES__SRV__DETAIL__ALERT__BUILDER_HPP_
