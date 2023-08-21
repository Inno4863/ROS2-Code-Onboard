// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from more_interfaces:srv/Mission.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__SRV__DETAIL__MISSION__STRUCT_HPP_
#define MORE_INTERFACES__SRV__DETAIL__MISSION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__more_interfaces__srv__Mission_Request __attribute__((deprecated))
#else
# define DEPRECATED__more_interfaces__srv__Mission_Request __declspec(deprecated)
#endif

namespace more_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Mission_Request_
{
  using Type = Mission_Request_<ContainerAllocator>;

  explicit Mission_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission_status = 0.0;
      this->mission_id = "";
    }
  }

  explicit Mission_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mission_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission_status = 0.0;
      this->mission_id = "";
    }
  }

  // field types and members
  using _mission_status_type =
    double;
  _mission_status_type mission_status;
  using _mission_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mission_id_type mission_id;

  // setters for named parameter idiom
  Type & set__mission_status(
    const double & _arg)
  {
    this->mission_status = _arg;
    return *this;
  }
  Type & set__mission_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mission_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    more_interfaces::srv::Mission_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const more_interfaces::srv::Mission_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<more_interfaces::srv::Mission_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<more_interfaces::srv::Mission_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      more_interfaces::srv::Mission_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<more_interfaces::srv::Mission_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      more_interfaces::srv::Mission_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<more_interfaces::srv::Mission_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<more_interfaces::srv::Mission_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<more_interfaces::srv::Mission_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__more_interfaces__srv__Mission_Request
    std::shared_ptr<more_interfaces::srv::Mission_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__more_interfaces__srv__Mission_Request
    std::shared_ptr<more_interfaces::srv::Mission_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Mission_Request_ & other) const
  {
    if (this->mission_status != other.mission_status) {
      return false;
    }
    if (this->mission_id != other.mission_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Mission_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Mission_Request_

// alias to use template instance with default allocator
using Mission_Request =
  more_interfaces::srv::Mission_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace more_interfaces


#ifndef _WIN32
# define DEPRECATED__more_interfaces__srv__Mission_Response __attribute__((deprecated))
#else
# define DEPRECATED__more_interfaces__srv__Mission_Response __declspec(deprecated)
#endif

namespace more_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Mission_Response_
{
  using Type = Mission_Response_<ContainerAllocator>;

  explicit Mission_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = "";
    }
  }

  explicit Mission_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : success(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = "";
    }
  }

  // field types and members
  using _success_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    more_interfaces::srv::Mission_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const more_interfaces::srv::Mission_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<more_interfaces::srv::Mission_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<more_interfaces::srv::Mission_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      more_interfaces::srv::Mission_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<more_interfaces::srv::Mission_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      more_interfaces::srv::Mission_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<more_interfaces::srv::Mission_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<more_interfaces::srv::Mission_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<more_interfaces::srv::Mission_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__more_interfaces__srv__Mission_Response
    std::shared_ptr<more_interfaces::srv::Mission_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__more_interfaces__srv__Mission_Response
    std::shared_ptr<more_interfaces::srv::Mission_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Mission_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const Mission_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Mission_Response_

// alias to use template instance with default allocator
using Mission_Response =
  more_interfaces::srv::Mission_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace more_interfaces

namespace more_interfaces
{

namespace srv
{

struct Mission
{
  using Request = more_interfaces::srv::Mission_Request;
  using Response = more_interfaces::srv::Mission_Response;
};

}  // namespace srv

}  // namespace more_interfaces

#endif  // MORE_INTERFACES__SRV__DETAIL__MISSION__STRUCT_HPP_
