// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from more_interfaces:srv/Arduino1.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__SRV__DETAIL__ARDUINO1__STRUCT_HPP_
#define MORE_INTERFACES__SRV__DETAIL__ARDUINO1__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__more_interfaces__srv__Arduino1_Request __attribute__((deprecated))
#else
# define DEPRECATED__more_interfaces__srv__Arduino1_Request __declspec(deprecated)
#endif

namespace more_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Arduino1_Request_
{
  using Type = Arduino1_Request_<ContainerAllocator>;

  explicit Arduino1_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->mission_id = "";
      this->trigger = false;
    }
  }

  explicit Arduino1_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc),
    mission_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->mission_id = "";
      this->trigger = false;
    }
  }

  // field types and members
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _mission_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mission_id_type mission_id;
  using _trigger_type =
    bool;
  _trigger_type trigger;

  // setters for named parameter idiom
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__mission_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mission_id = _arg;
    return *this;
  }
  Type & set__trigger(
    const bool & _arg)
  {
    this->trigger = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    more_interfaces::srv::Arduino1_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const more_interfaces::srv::Arduino1_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<more_interfaces::srv::Arduino1_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<more_interfaces::srv::Arduino1_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      more_interfaces::srv::Arduino1_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<more_interfaces::srv::Arduino1_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      more_interfaces::srv::Arduino1_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<more_interfaces::srv::Arduino1_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<more_interfaces::srv::Arduino1_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<more_interfaces::srv::Arduino1_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__more_interfaces__srv__Arduino1_Request
    std::shared_ptr<more_interfaces::srv::Arduino1_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__more_interfaces__srv__Arduino1_Request
    std::shared_ptr<more_interfaces::srv::Arduino1_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Arduino1_Request_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    if (this->mission_id != other.mission_id) {
      return false;
    }
    if (this->trigger != other.trigger) {
      return false;
    }
    return true;
  }
  bool operator!=(const Arduino1_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Arduino1_Request_

// alias to use template instance with default allocator
using Arduino1_Request =
  more_interfaces::srv::Arduino1_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace more_interfaces


#ifndef _WIN32
# define DEPRECATED__more_interfaces__srv__Arduino1_Response __attribute__((deprecated))
#else
# define DEPRECATED__more_interfaces__srv__Arduino1_Response __declspec(deprecated)
#endif

namespace more_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Arduino1_Response_
{
  using Type = Arduino1_Response_<ContainerAllocator>;

  explicit Arduino1_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->outcome = false;
      this->outcome2 = "";
    }
  }

  explicit Arduino1_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : outcome2(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->outcome = false;
      this->outcome2 = "";
    }
  }

  // field types and members
  using _outcome_type =
    bool;
  _outcome_type outcome;
  using _outcome2_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _outcome2_type outcome2;

  // setters for named parameter idiom
  Type & set__outcome(
    const bool & _arg)
  {
    this->outcome = _arg;
    return *this;
  }
  Type & set__outcome2(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->outcome2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    more_interfaces::srv::Arduino1_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const more_interfaces::srv::Arduino1_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<more_interfaces::srv::Arduino1_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<more_interfaces::srv::Arduino1_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      more_interfaces::srv::Arduino1_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<more_interfaces::srv::Arduino1_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      more_interfaces::srv::Arduino1_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<more_interfaces::srv::Arduino1_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<more_interfaces::srv::Arduino1_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<more_interfaces::srv::Arduino1_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__more_interfaces__srv__Arduino1_Response
    std::shared_ptr<more_interfaces::srv::Arduino1_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__more_interfaces__srv__Arduino1_Response
    std::shared_ptr<more_interfaces::srv::Arduino1_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Arduino1_Response_ & other) const
  {
    if (this->outcome != other.outcome) {
      return false;
    }
    if (this->outcome2 != other.outcome2) {
      return false;
    }
    return true;
  }
  bool operator!=(const Arduino1_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Arduino1_Response_

// alias to use template instance with default allocator
using Arduino1_Response =
  more_interfaces::srv::Arduino1_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace more_interfaces

namespace more_interfaces
{

namespace srv
{

struct Arduino1
{
  using Request = more_interfaces::srv::Arduino1_Request;
  using Response = more_interfaces::srv::Arduino1_Response;
};

}  // namespace srv

}  // namespace more_interfaces

#endif  // MORE_INTERFACES__SRV__DETAIL__ARDUINO1__STRUCT_HPP_
