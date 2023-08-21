// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from more_interfaces:srv/Comms.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__SRV__DETAIL__COMMS__STRUCT_HPP_
#define MORE_INTERFACES__SRV__DETAIL__COMMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__more_interfaces__srv__Comms_Request __attribute__((deprecated))
#else
# define DEPRECATED__more_interfaces__srv__Comms_Request __declspec(deprecated)
#endif

namespace more_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Comms_Request_
{
  using Type = Comms_Request_<ContainerAllocator>;

  explicit Comms_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->trigger = false;
      this->message = "";
      this->pos_longitude = "";
      this->pos_latitude = "";
      this->pos_altitude = "";
      this->turn_yaw = 0.0;
    }
  }

  explicit Comms_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc),
    pos_longitude(_alloc),
    pos_latitude(_alloc),
    pos_altitude(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->trigger = false;
      this->message = "";
      this->pos_longitude = "";
      this->pos_latitude = "";
      this->pos_altitude = "";
      this->turn_yaw = 0.0;
    }
  }

  // field types and members
  using _trigger_type =
    bool;
  _trigger_type trigger;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _pos_longitude_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pos_longitude_type pos_longitude;
  using _pos_latitude_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pos_latitude_type pos_latitude;
  using _pos_altitude_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pos_altitude_type pos_altitude;
  using _turn_yaw_type =
    double;
  _turn_yaw_type turn_yaw;

  // setters for named parameter idiom
  Type & set__trigger(
    const bool & _arg)
  {
    this->trigger = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__pos_longitude(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pos_longitude = _arg;
    return *this;
  }
  Type & set__pos_latitude(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pos_latitude = _arg;
    return *this;
  }
  Type & set__pos_altitude(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pos_altitude = _arg;
    return *this;
  }
  Type & set__turn_yaw(
    const double & _arg)
  {
    this->turn_yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    more_interfaces::srv::Comms_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const more_interfaces::srv::Comms_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<more_interfaces::srv::Comms_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<more_interfaces::srv::Comms_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      more_interfaces::srv::Comms_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<more_interfaces::srv::Comms_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      more_interfaces::srv::Comms_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<more_interfaces::srv::Comms_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<more_interfaces::srv::Comms_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<more_interfaces::srv::Comms_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__more_interfaces__srv__Comms_Request
    std::shared_ptr<more_interfaces::srv::Comms_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__more_interfaces__srv__Comms_Request
    std::shared_ptr<more_interfaces::srv::Comms_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Comms_Request_ & other) const
  {
    if (this->trigger != other.trigger) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->pos_longitude != other.pos_longitude) {
      return false;
    }
    if (this->pos_latitude != other.pos_latitude) {
      return false;
    }
    if (this->pos_altitude != other.pos_altitude) {
      return false;
    }
    if (this->turn_yaw != other.turn_yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const Comms_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Comms_Request_

// alias to use template instance with default allocator
using Comms_Request =
  more_interfaces::srv::Comms_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace more_interfaces


#ifndef _WIN32
# define DEPRECATED__more_interfaces__srv__Comms_Response __attribute__((deprecated))
#else
# define DEPRECATED__more_interfaces__srv__Comms_Response __declspec(deprecated)
#endif

namespace more_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Comms_Response_
{
  using Type = Comms_Response_<ContainerAllocator>;

  explicit Comms_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->connect_success = false;
    }
  }

  explicit Comms_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->connect_success = false;
    }
  }

  // field types and members
  using _connect_success_type =
    bool;
  _connect_success_type connect_success;

  // setters for named parameter idiom
  Type & set__connect_success(
    const bool & _arg)
  {
    this->connect_success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    more_interfaces::srv::Comms_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const more_interfaces::srv::Comms_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<more_interfaces::srv::Comms_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<more_interfaces::srv::Comms_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      more_interfaces::srv::Comms_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<more_interfaces::srv::Comms_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      more_interfaces::srv::Comms_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<more_interfaces::srv::Comms_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<more_interfaces::srv::Comms_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<more_interfaces::srv::Comms_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__more_interfaces__srv__Comms_Response
    std::shared_ptr<more_interfaces::srv::Comms_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__more_interfaces__srv__Comms_Response
    std::shared_ptr<more_interfaces::srv::Comms_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Comms_Response_ & other) const
  {
    if (this->connect_success != other.connect_success) {
      return false;
    }
    return true;
  }
  bool operator!=(const Comms_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Comms_Response_

// alias to use template instance with default allocator
using Comms_Response =
  more_interfaces::srv::Comms_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace more_interfaces

namespace more_interfaces
{

namespace srv
{

struct Comms
{
  using Request = more_interfaces::srv::Comms_Request;
  using Response = more_interfaces::srv::Comms_Response;
};

}  // namespace srv

}  // namespace more_interfaces

#endif  // MORE_INTERFACES__SRV__DETAIL__COMMS__STRUCT_HPP_
