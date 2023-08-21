// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from more_interfaces:msg/Trials1.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__MSG__DETAIL__TRIALS1__STRUCT_HPP_
#define MORE_INTERFACES__MSG__DETAIL__TRIALS1__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__more_interfaces__msg__Trials1 __attribute__((deprecated))
#else
# define DEPRECATED__more_interfaces__msg__Trials1 __declspec(deprecated)
#endif

namespace more_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Trials1_
{
  using Type = Trials1_<ContainerAllocator>;

  explicit Trials1_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_in_air = false;
      this->armed = false;
      this->battery_percentage = 0.0;
      this->pos_latitude = 0.0;
      this->pos_longitude = 0.0;
      this->pos_altitude = 0.0f;
      this->rel_altitude = 0.0f;
      this->gps_satellites = 0l;
      this->landed_state = 0l;
      this->velocity_x = 0.0;
      this->velocity_y = 0.0;
      this->velocity_z = 0.0;
      this->drone_id = 0l;
      this->mission_done = false;
      this->current_yaw = 0.0;
      this->flight_mode = 0l;
    }
  }

  explicit Trials1_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_in_air = false;
      this->armed = false;
      this->battery_percentage = 0.0;
      this->pos_latitude = 0.0;
      this->pos_longitude = 0.0;
      this->pos_altitude = 0.0f;
      this->rel_altitude = 0.0f;
      this->gps_satellites = 0l;
      this->landed_state = 0l;
      this->velocity_x = 0.0;
      this->velocity_y = 0.0;
      this->velocity_z = 0.0;
      this->drone_id = 0l;
      this->mission_done = false;
      this->current_yaw = 0.0;
      this->flight_mode = 0l;
    }
  }

  // field types and members
  using _is_in_air_type =
    bool;
  _is_in_air_type is_in_air;
  using _armed_type =
    bool;
  _armed_type armed;
  using _battery_percentage_type =
    double;
  _battery_percentage_type battery_percentage;
  using _pos_latitude_type =
    double;
  _pos_latitude_type pos_latitude;
  using _pos_longitude_type =
    double;
  _pos_longitude_type pos_longitude;
  using _pos_altitude_type =
    float;
  _pos_altitude_type pos_altitude;
  using _rel_altitude_type =
    float;
  _rel_altitude_type rel_altitude;
  using _gps_satellites_type =
    int32_t;
  _gps_satellites_type gps_satellites;
  using _landed_state_type =
    int32_t;
  _landed_state_type landed_state;
  using _velocity_x_type =
    double;
  _velocity_x_type velocity_x;
  using _velocity_y_type =
    double;
  _velocity_y_type velocity_y;
  using _velocity_z_type =
    double;
  _velocity_z_type velocity_z;
  using _drone_id_type =
    int32_t;
  _drone_id_type drone_id;
  using _mission_done_type =
    bool;
  _mission_done_type mission_done;
  using _current_yaw_type =
    double;
  _current_yaw_type current_yaw;
  using _flight_mode_type =
    int32_t;
  _flight_mode_type flight_mode;

  // setters for named parameter idiom
  Type & set__is_in_air(
    const bool & _arg)
  {
    this->is_in_air = _arg;
    return *this;
  }
  Type & set__armed(
    const bool & _arg)
  {
    this->armed = _arg;
    return *this;
  }
  Type & set__battery_percentage(
    const double & _arg)
  {
    this->battery_percentage = _arg;
    return *this;
  }
  Type & set__pos_latitude(
    const double & _arg)
  {
    this->pos_latitude = _arg;
    return *this;
  }
  Type & set__pos_longitude(
    const double & _arg)
  {
    this->pos_longitude = _arg;
    return *this;
  }
  Type & set__pos_altitude(
    const float & _arg)
  {
    this->pos_altitude = _arg;
    return *this;
  }
  Type & set__rel_altitude(
    const float & _arg)
  {
    this->rel_altitude = _arg;
    return *this;
  }
  Type & set__gps_satellites(
    const int32_t & _arg)
  {
    this->gps_satellites = _arg;
    return *this;
  }
  Type & set__landed_state(
    const int32_t & _arg)
  {
    this->landed_state = _arg;
    return *this;
  }
  Type & set__velocity_x(
    const double & _arg)
  {
    this->velocity_x = _arg;
    return *this;
  }
  Type & set__velocity_y(
    const double & _arg)
  {
    this->velocity_y = _arg;
    return *this;
  }
  Type & set__velocity_z(
    const double & _arg)
  {
    this->velocity_z = _arg;
    return *this;
  }
  Type & set__drone_id(
    const int32_t & _arg)
  {
    this->drone_id = _arg;
    return *this;
  }
  Type & set__mission_done(
    const bool & _arg)
  {
    this->mission_done = _arg;
    return *this;
  }
  Type & set__current_yaw(
    const double & _arg)
  {
    this->current_yaw = _arg;
    return *this;
  }
  Type & set__flight_mode(
    const int32_t & _arg)
  {
    this->flight_mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    more_interfaces::msg::Trials1_<ContainerAllocator> *;
  using ConstRawPtr =
    const more_interfaces::msg::Trials1_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<more_interfaces::msg::Trials1_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<more_interfaces::msg::Trials1_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      more_interfaces::msg::Trials1_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<more_interfaces::msg::Trials1_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      more_interfaces::msg::Trials1_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<more_interfaces::msg::Trials1_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<more_interfaces::msg::Trials1_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<more_interfaces::msg::Trials1_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__more_interfaces__msg__Trials1
    std::shared_ptr<more_interfaces::msg::Trials1_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__more_interfaces__msg__Trials1
    std::shared_ptr<more_interfaces::msg::Trials1_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Trials1_ & other) const
  {
    if (this->is_in_air != other.is_in_air) {
      return false;
    }
    if (this->armed != other.armed) {
      return false;
    }
    if (this->battery_percentage != other.battery_percentage) {
      return false;
    }
    if (this->pos_latitude != other.pos_latitude) {
      return false;
    }
    if (this->pos_longitude != other.pos_longitude) {
      return false;
    }
    if (this->pos_altitude != other.pos_altitude) {
      return false;
    }
    if (this->rel_altitude != other.rel_altitude) {
      return false;
    }
    if (this->gps_satellites != other.gps_satellites) {
      return false;
    }
    if (this->landed_state != other.landed_state) {
      return false;
    }
    if (this->velocity_x != other.velocity_x) {
      return false;
    }
    if (this->velocity_y != other.velocity_y) {
      return false;
    }
    if (this->velocity_z != other.velocity_z) {
      return false;
    }
    if (this->drone_id != other.drone_id) {
      return false;
    }
    if (this->mission_done != other.mission_done) {
      return false;
    }
    if (this->current_yaw != other.current_yaw) {
      return false;
    }
    if (this->flight_mode != other.flight_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const Trials1_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Trials1_

// alias to use template instance with default allocator
using Trials1 =
  more_interfaces::msg::Trials1_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace more_interfaces

#endif  // MORE_INTERFACES__MSG__DETAIL__TRIALS1__STRUCT_HPP_
