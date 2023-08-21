// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from more_interfaces:srv/Error.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__SRV__DETAIL__ERROR__STRUCT_HPP_
#define MORE_INTERFACES__SRV__DETAIL__ERROR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__more_interfaces__srv__Error_Request __attribute__((deprecated))
#else
# define DEPRECATED__more_interfaces__srv__Error_Request __declspec(deprecated)
#endif

namespace more_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Error_Request_
{
  using Type = Error_Request_<ContainerAllocator>;

  explicit Error_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_yaw = 0.0;
    }
  }

  explicit Error_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_yaw = 0.0;
    }
  }

  // field types and members
  using _current_yaw_type =
    double;
  _current_yaw_type current_yaw;

  // setters for named parameter idiom
  Type & set__current_yaw(
    const double & _arg)
  {
    this->current_yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    more_interfaces::srv::Error_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const more_interfaces::srv::Error_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<more_interfaces::srv::Error_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<more_interfaces::srv::Error_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      more_interfaces::srv::Error_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<more_interfaces::srv::Error_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      more_interfaces::srv::Error_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<more_interfaces::srv::Error_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<more_interfaces::srv::Error_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<more_interfaces::srv::Error_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__more_interfaces__srv__Error_Request
    std::shared_ptr<more_interfaces::srv::Error_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__more_interfaces__srv__Error_Request
    std::shared_ptr<more_interfaces::srv::Error_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Error_Request_ & other) const
  {
    if (this->current_yaw != other.current_yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const Error_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Error_Request_

// alias to use template instance with default allocator
using Error_Request =
  more_interfaces::srv::Error_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace more_interfaces


#ifndef _WIN32
# define DEPRECATED__more_interfaces__srv__Error_Response __attribute__((deprecated))
#else
# define DEPRECATED__more_interfaces__srv__Error_Response __declspec(deprecated)
#endif

namespace more_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Error_Response_
{
  using Type = Error_Response_<ContainerAllocator>;

  explicit Error_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->desired_yaw = 0.0;
    }
  }

  explicit Error_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->desired_yaw = 0.0;
    }
  }

  // field types and members
  using _desired_yaw_type =
    double;
  _desired_yaw_type desired_yaw;

  // setters for named parameter idiom
  Type & set__desired_yaw(
    const double & _arg)
  {
    this->desired_yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    more_interfaces::srv::Error_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const more_interfaces::srv::Error_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<more_interfaces::srv::Error_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<more_interfaces::srv::Error_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      more_interfaces::srv::Error_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<more_interfaces::srv::Error_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      more_interfaces::srv::Error_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<more_interfaces::srv::Error_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<more_interfaces::srv::Error_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<more_interfaces::srv::Error_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__more_interfaces__srv__Error_Response
    std::shared_ptr<more_interfaces::srv::Error_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__more_interfaces__srv__Error_Response
    std::shared_ptr<more_interfaces::srv::Error_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Error_Response_ & other) const
  {
    if (this->desired_yaw != other.desired_yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const Error_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Error_Response_

// alias to use template instance with default allocator
using Error_Response =
  more_interfaces::srv::Error_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace more_interfaces

namespace more_interfaces
{

namespace srv
{

struct Error
{
  using Request = more_interfaces::srv::Error_Request;
  using Response = more_interfaces::srv::Error_Response;
};

}  // namespace srv

}  // namespace more_interfaces

#endif  // MORE_INTERFACES__SRV__DETAIL__ERROR__STRUCT_HPP_
