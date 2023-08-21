// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from more_interfaces:srv/Alert.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__SRV__DETAIL__ALERT__STRUCT_HPP_
#define MORE_INTERFACES__SRV__DETAIL__ALERT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__more_interfaces__srv__Alert_Request __attribute__((deprecated))
#else
# define DEPRECATED__more_interfaces__srv__Alert_Request __declspec(deprecated)
#endif

namespace more_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Alert_Request_
{
  using Type = Alert_Request_<ContainerAllocator>;

  explicit Alert_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->alert_trigger = false;
      this->execute_action = "";
      this->mission_id = "";
    }
  }

  explicit Alert_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : execute_action(_alloc),
    mission_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->alert_trigger = false;
      this->execute_action = "";
      this->mission_id = "";
    }
  }

  // field types and members
  using _alert_trigger_type =
    bool;
  _alert_trigger_type alert_trigger;
  using _waypoints_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _waypoints_type waypoints;
  using _execute_action_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _execute_action_type execute_action;
  using _mission_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mission_id_type mission_id;

  // setters for named parameter idiom
  Type & set__alert_trigger(
    const bool & _arg)
  {
    this->alert_trigger = _arg;
    return *this;
  }
  Type & set__waypoints(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->waypoints = _arg;
    return *this;
  }
  Type & set__execute_action(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->execute_action = _arg;
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
    more_interfaces::srv::Alert_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const more_interfaces::srv::Alert_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<more_interfaces::srv::Alert_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<more_interfaces::srv::Alert_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      more_interfaces::srv::Alert_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<more_interfaces::srv::Alert_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      more_interfaces::srv::Alert_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<more_interfaces::srv::Alert_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<more_interfaces::srv::Alert_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<more_interfaces::srv::Alert_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__more_interfaces__srv__Alert_Request
    std::shared_ptr<more_interfaces::srv::Alert_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__more_interfaces__srv__Alert_Request
    std::shared_ptr<more_interfaces::srv::Alert_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Alert_Request_ & other) const
  {
    if (this->alert_trigger != other.alert_trigger) {
      return false;
    }
    if (this->waypoints != other.waypoints) {
      return false;
    }
    if (this->execute_action != other.execute_action) {
      return false;
    }
    if (this->mission_id != other.mission_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Alert_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Alert_Request_

// alias to use template instance with default allocator
using Alert_Request =
  more_interfaces::srv::Alert_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace more_interfaces


#ifndef _WIN32
# define DEPRECATED__more_interfaces__srv__Alert_Response __attribute__((deprecated))
#else
# define DEPRECATED__more_interfaces__srv__Alert_Response __declspec(deprecated)
#endif

namespace more_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Alert_Response_
{
  using Type = Alert_Response_<ContainerAllocator>;

  explicit Alert_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success_trigger = false;
    }
  }

  explicit Alert_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success_trigger = false;
    }
  }

  // field types and members
  using _success_trigger_type =
    bool;
  _success_trigger_type success_trigger;

  // setters for named parameter idiom
  Type & set__success_trigger(
    const bool & _arg)
  {
    this->success_trigger = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    more_interfaces::srv::Alert_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const more_interfaces::srv::Alert_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<more_interfaces::srv::Alert_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<more_interfaces::srv::Alert_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      more_interfaces::srv::Alert_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<more_interfaces::srv::Alert_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      more_interfaces::srv::Alert_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<more_interfaces::srv::Alert_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<more_interfaces::srv::Alert_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<more_interfaces::srv::Alert_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__more_interfaces__srv__Alert_Response
    std::shared_ptr<more_interfaces::srv::Alert_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__more_interfaces__srv__Alert_Response
    std::shared_ptr<more_interfaces::srv::Alert_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Alert_Response_ & other) const
  {
    if (this->success_trigger != other.success_trigger) {
      return false;
    }
    return true;
  }
  bool operator!=(const Alert_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Alert_Response_

// alias to use template instance with default allocator
using Alert_Response =
  more_interfaces::srv::Alert_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace more_interfaces

namespace more_interfaces
{

namespace srv
{

struct Alert
{
  using Request = more_interfaces::srv::Alert_Request;
  using Response = more_interfaces::srv::Alert_Response;
};

}  // namespace srv

}  // namespace more_interfaces

#endif  // MORE_INTERFACES__SRV__DETAIL__ALERT__STRUCT_HPP_
