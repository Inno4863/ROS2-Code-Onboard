// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from more_interfaces:msg/Trials1.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__MSG__DETAIL__TRIALS1__BUILDER_HPP_
#define MORE_INTERFACES__MSG__DETAIL__TRIALS1__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "more_interfaces/msg/detail/trials1__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace more_interfaces
{

namespace msg
{

namespace builder
{

class Init_Trials1_flight_mode
{
public:
  explicit Init_Trials1_flight_mode(::more_interfaces::msg::Trials1 & msg)
  : msg_(msg)
  {}
  ::more_interfaces::msg::Trials1 flight_mode(::more_interfaces::msg::Trials1::_flight_mode_type arg)
  {
    msg_.flight_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::more_interfaces::msg::Trials1 msg_;
};

class Init_Trials1_current_yaw
{
public:
  explicit Init_Trials1_current_yaw(::more_interfaces::msg::Trials1 & msg)
  : msg_(msg)
  {}
  Init_Trials1_flight_mode current_yaw(::more_interfaces::msg::Trials1::_current_yaw_type arg)
  {
    msg_.current_yaw = std::move(arg);
    return Init_Trials1_flight_mode(msg_);
  }

private:
  ::more_interfaces::msg::Trials1 msg_;
};

class Init_Trials1_mission_done
{
public:
  explicit Init_Trials1_mission_done(::more_interfaces::msg::Trials1 & msg)
  : msg_(msg)
  {}
  Init_Trials1_current_yaw mission_done(::more_interfaces::msg::Trials1::_mission_done_type arg)
  {
    msg_.mission_done = std::move(arg);
    return Init_Trials1_current_yaw(msg_);
  }

private:
  ::more_interfaces::msg::Trials1 msg_;
};

class Init_Trials1_drone_id
{
public:
  explicit Init_Trials1_drone_id(::more_interfaces::msg::Trials1 & msg)
  : msg_(msg)
  {}
  Init_Trials1_mission_done drone_id(::more_interfaces::msg::Trials1::_drone_id_type arg)
  {
    msg_.drone_id = std::move(arg);
    return Init_Trials1_mission_done(msg_);
  }

private:
  ::more_interfaces::msg::Trials1 msg_;
};

class Init_Trials1_velocity_z
{
public:
  explicit Init_Trials1_velocity_z(::more_interfaces::msg::Trials1 & msg)
  : msg_(msg)
  {}
  Init_Trials1_drone_id velocity_z(::more_interfaces::msg::Trials1::_velocity_z_type arg)
  {
    msg_.velocity_z = std::move(arg);
    return Init_Trials1_drone_id(msg_);
  }

private:
  ::more_interfaces::msg::Trials1 msg_;
};

class Init_Trials1_velocity_y
{
public:
  explicit Init_Trials1_velocity_y(::more_interfaces::msg::Trials1 & msg)
  : msg_(msg)
  {}
  Init_Trials1_velocity_z velocity_y(::more_interfaces::msg::Trials1::_velocity_y_type arg)
  {
    msg_.velocity_y = std::move(arg);
    return Init_Trials1_velocity_z(msg_);
  }

private:
  ::more_interfaces::msg::Trials1 msg_;
};

class Init_Trials1_velocity_x
{
public:
  explicit Init_Trials1_velocity_x(::more_interfaces::msg::Trials1 & msg)
  : msg_(msg)
  {}
  Init_Trials1_velocity_y velocity_x(::more_interfaces::msg::Trials1::_velocity_x_type arg)
  {
    msg_.velocity_x = std::move(arg);
    return Init_Trials1_velocity_y(msg_);
  }

private:
  ::more_interfaces::msg::Trials1 msg_;
};

class Init_Trials1_landed_state
{
public:
  explicit Init_Trials1_landed_state(::more_interfaces::msg::Trials1 & msg)
  : msg_(msg)
  {}
  Init_Trials1_velocity_x landed_state(::more_interfaces::msg::Trials1::_landed_state_type arg)
  {
    msg_.landed_state = std::move(arg);
    return Init_Trials1_velocity_x(msg_);
  }

private:
  ::more_interfaces::msg::Trials1 msg_;
};

class Init_Trials1_gps_satellites
{
public:
  explicit Init_Trials1_gps_satellites(::more_interfaces::msg::Trials1 & msg)
  : msg_(msg)
  {}
  Init_Trials1_landed_state gps_satellites(::more_interfaces::msg::Trials1::_gps_satellites_type arg)
  {
    msg_.gps_satellites = std::move(arg);
    return Init_Trials1_landed_state(msg_);
  }

private:
  ::more_interfaces::msg::Trials1 msg_;
};

class Init_Trials1_rel_altitude
{
public:
  explicit Init_Trials1_rel_altitude(::more_interfaces::msg::Trials1 & msg)
  : msg_(msg)
  {}
  Init_Trials1_gps_satellites rel_altitude(::more_interfaces::msg::Trials1::_rel_altitude_type arg)
  {
    msg_.rel_altitude = std::move(arg);
    return Init_Trials1_gps_satellites(msg_);
  }

private:
  ::more_interfaces::msg::Trials1 msg_;
};

class Init_Trials1_pos_altitude
{
public:
  explicit Init_Trials1_pos_altitude(::more_interfaces::msg::Trials1 & msg)
  : msg_(msg)
  {}
  Init_Trials1_rel_altitude pos_altitude(::more_interfaces::msg::Trials1::_pos_altitude_type arg)
  {
    msg_.pos_altitude = std::move(arg);
    return Init_Trials1_rel_altitude(msg_);
  }

private:
  ::more_interfaces::msg::Trials1 msg_;
};

class Init_Trials1_pos_longitude
{
public:
  explicit Init_Trials1_pos_longitude(::more_interfaces::msg::Trials1 & msg)
  : msg_(msg)
  {}
  Init_Trials1_pos_altitude pos_longitude(::more_interfaces::msg::Trials1::_pos_longitude_type arg)
  {
    msg_.pos_longitude = std::move(arg);
    return Init_Trials1_pos_altitude(msg_);
  }

private:
  ::more_interfaces::msg::Trials1 msg_;
};

class Init_Trials1_pos_latitude
{
public:
  explicit Init_Trials1_pos_latitude(::more_interfaces::msg::Trials1 & msg)
  : msg_(msg)
  {}
  Init_Trials1_pos_longitude pos_latitude(::more_interfaces::msg::Trials1::_pos_latitude_type arg)
  {
    msg_.pos_latitude = std::move(arg);
    return Init_Trials1_pos_longitude(msg_);
  }

private:
  ::more_interfaces::msg::Trials1 msg_;
};

class Init_Trials1_battery_percentage
{
public:
  explicit Init_Trials1_battery_percentage(::more_interfaces::msg::Trials1 & msg)
  : msg_(msg)
  {}
  Init_Trials1_pos_latitude battery_percentage(::more_interfaces::msg::Trials1::_battery_percentage_type arg)
  {
    msg_.battery_percentage = std::move(arg);
    return Init_Trials1_pos_latitude(msg_);
  }

private:
  ::more_interfaces::msg::Trials1 msg_;
};

class Init_Trials1_armed
{
public:
  explicit Init_Trials1_armed(::more_interfaces::msg::Trials1 & msg)
  : msg_(msg)
  {}
  Init_Trials1_battery_percentage armed(::more_interfaces::msg::Trials1::_armed_type arg)
  {
    msg_.armed = std::move(arg);
    return Init_Trials1_battery_percentage(msg_);
  }

private:
  ::more_interfaces::msg::Trials1 msg_;
};

class Init_Trials1_is_in_air
{
public:
  Init_Trials1_is_in_air()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trials1_armed is_in_air(::more_interfaces::msg::Trials1::_is_in_air_type arg)
  {
    msg_.is_in_air = std::move(arg);
    return Init_Trials1_armed(msg_);
  }

private:
  ::more_interfaces::msg::Trials1 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::more_interfaces::msg::Trials1>()
{
  return more_interfaces::msg::builder::Init_Trials1_is_in_air();
}

}  // namespace more_interfaces

#endif  // MORE_INTERFACES__MSG__DETAIL__TRIALS1__BUILDER_HPP_
