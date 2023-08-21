// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from more_interfaces:srv/Comms.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__SRV__DETAIL__COMMS__BUILDER_HPP_
#define MORE_INTERFACES__SRV__DETAIL__COMMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "more_interfaces/srv/detail/comms__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace more_interfaces
{

namespace srv
{

namespace builder
{

class Init_Comms_Request_turn_yaw
{
public:
  explicit Init_Comms_Request_turn_yaw(::more_interfaces::srv::Comms_Request & msg)
  : msg_(msg)
  {}
  ::more_interfaces::srv::Comms_Request turn_yaw(::more_interfaces::srv::Comms_Request::_turn_yaw_type arg)
  {
    msg_.turn_yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::more_interfaces::srv::Comms_Request msg_;
};

class Init_Comms_Request_pos_altitude
{
public:
  explicit Init_Comms_Request_pos_altitude(::more_interfaces::srv::Comms_Request & msg)
  : msg_(msg)
  {}
  Init_Comms_Request_turn_yaw pos_altitude(::more_interfaces::srv::Comms_Request::_pos_altitude_type arg)
  {
    msg_.pos_altitude = std::move(arg);
    return Init_Comms_Request_turn_yaw(msg_);
  }

private:
  ::more_interfaces::srv::Comms_Request msg_;
};

class Init_Comms_Request_pos_latitude
{
public:
  explicit Init_Comms_Request_pos_latitude(::more_interfaces::srv::Comms_Request & msg)
  : msg_(msg)
  {}
  Init_Comms_Request_pos_altitude pos_latitude(::more_interfaces::srv::Comms_Request::_pos_latitude_type arg)
  {
    msg_.pos_latitude = std::move(arg);
    return Init_Comms_Request_pos_altitude(msg_);
  }

private:
  ::more_interfaces::srv::Comms_Request msg_;
};

class Init_Comms_Request_pos_longitude
{
public:
  explicit Init_Comms_Request_pos_longitude(::more_interfaces::srv::Comms_Request & msg)
  : msg_(msg)
  {}
  Init_Comms_Request_pos_latitude pos_longitude(::more_interfaces::srv::Comms_Request::_pos_longitude_type arg)
  {
    msg_.pos_longitude = std::move(arg);
    return Init_Comms_Request_pos_latitude(msg_);
  }

private:
  ::more_interfaces::srv::Comms_Request msg_;
};

class Init_Comms_Request_message
{
public:
  explicit Init_Comms_Request_message(::more_interfaces::srv::Comms_Request & msg)
  : msg_(msg)
  {}
  Init_Comms_Request_pos_longitude message(::more_interfaces::srv::Comms_Request::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_Comms_Request_pos_longitude(msg_);
  }

private:
  ::more_interfaces::srv::Comms_Request msg_;
};

class Init_Comms_Request_trigger
{
public:
  Init_Comms_Request_trigger()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Comms_Request_message trigger(::more_interfaces::srv::Comms_Request::_trigger_type arg)
  {
    msg_.trigger = std::move(arg);
    return Init_Comms_Request_message(msg_);
  }

private:
  ::more_interfaces::srv::Comms_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::more_interfaces::srv::Comms_Request>()
{
  return more_interfaces::srv::builder::Init_Comms_Request_trigger();
}

}  // namespace more_interfaces


namespace more_interfaces
{

namespace srv
{

namespace builder
{

class Init_Comms_Response_connect_success
{
public:
  Init_Comms_Response_connect_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::more_interfaces::srv::Comms_Response connect_success(::more_interfaces::srv::Comms_Response::_connect_success_type arg)
  {
    msg_.connect_success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::more_interfaces::srv::Comms_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::more_interfaces::srv::Comms_Response>()
{
  return more_interfaces::srv::builder::Init_Comms_Response_connect_success();
}

}  // namespace more_interfaces

#endif  // MORE_INTERFACES__SRV__DETAIL__COMMS__BUILDER_HPP_
