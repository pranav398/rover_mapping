// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:srv/Move.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_msgs/srv/move.hpp"


#ifndef CUSTOM_MSGS__SRV__DETAIL__MOVE__STRUCT_HPP_
#define CUSTOM_MSGS__SRV__DETAIL__MOVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_buffer/buffer.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_msgs__srv__Move_Request __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__srv__Move_Request __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Move_Request_
{
  using Type = Move_Request_<ContainerAllocator>;

  explicit Move_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->delta_x = 0l;
      this->delta_y = 0l;
      this->deduction = 0.0f;
    }
  }

  explicit Move_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->delta_x = 0l;
      this->delta_y = 0l;
      this->deduction = 0.0f;
    }
  }

  // field types and members
  using _delta_x_type =
    int32_t;
  _delta_x_type delta_x;
  using _delta_y_type =
    int32_t;
  _delta_y_type delta_y;
  using _deduction_type =
    float;
  _deduction_type deduction;

  // setters for named parameter idiom
  Type & set__delta_x(
    const int32_t & _arg)
  {
    this->delta_x = _arg;
    return *this;
  }
  Type & set__delta_y(
    const int32_t & _arg)
  {
    this->delta_y = _arg;
    return *this;
  }
  Type & set__deduction(
    const float & _arg)
  {
    this->deduction = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::srv::Move_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::srv::Move_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::srv::Move_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::srv::Move_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::srv::Move_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::srv::Move_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::srv::Move_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::srv::Move_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::srv::Move_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::srv::Move_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__srv__Move_Request
    std::shared_ptr<custom_msgs::srv::Move_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__srv__Move_Request
    std::shared_ptr<custom_msgs::srv::Move_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Move_Request_ & other) const
  {
    if (this->delta_x != other.delta_x) {
      return false;
    }
    if (this->delta_y != other.delta_y) {
      return false;
    }
    if (this->deduction != other.deduction) {
      return false;
    }
    return true;
  }
  bool operator!=(const Move_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Move_Request_

// alias to use template instance with default allocator
using Move_Request =
  custom_msgs::srv::Move_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_msgs


#ifndef _WIN32
# define DEPRECATED__custom_msgs__srv__Move_Response __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__srv__Move_Response __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Move_Response_
{
  using Type = Move_Response_<ContainerAllocator>;

  explicit Move_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
      this->reason = "";
    }
  }

  explicit Move_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
      this->reason = "";
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _reason_type reason;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__reason(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->reason = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::srv::Move_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::srv::Move_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::srv::Move_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::srv::Move_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::srv::Move_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::srv::Move_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::srv::Move_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::srv::Move_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::srv::Move_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::srv::Move_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__srv__Move_Response
    std::shared_ptr<custom_msgs::srv::Move_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__srv__Move_Response
    std::shared_ptr<custom_msgs::srv::Move_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Move_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->reason != other.reason) {
      return false;
    }
    return true;
  }
  bool operator!=(const Move_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Move_Response_

// alias to use template instance with default allocator
using Move_Response =
  custom_msgs::srv::Move_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_msgs__srv__Move_Event __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__srv__Move_Event __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Move_Event_
{
  using Type = Move_Event_<ContainerAllocator>;

  explicit Move_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit Move_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<custom_msgs::srv::Move_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<custom_msgs::srv::Move_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<custom_msgs::srv::Move_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<custom_msgs::srv::Move_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<custom_msgs::srv::Move_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<custom_msgs::srv::Move_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<custom_msgs::srv::Move_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<custom_msgs::srv::Move_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::srv::Move_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::srv::Move_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::srv::Move_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::srv::Move_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::srv::Move_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::srv::Move_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::srv::Move_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::srv::Move_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::srv::Move_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::srv::Move_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__srv__Move_Event
    std::shared_ptr<custom_msgs::srv::Move_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__srv__Move_Event
    std::shared_ptr<custom_msgs::srv::Move_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Move_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const Move_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Move_Event_

// alias to use template instance with default allocator
using Move_Event =
  custom_msgs::srv::Move_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_msgs

namespace custom_msgs
{

namespace srv
{

struct Move
{
  using Request = custom_msgs::srv::Move_Request;
  using Response = custom_msgs::srv::Move_Response;
  using Event = custom_msgs::srv::Move_Event;
};

}  // namespace srv

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__SRV__DETAIL__MOVE__STRUCT_HPP_
