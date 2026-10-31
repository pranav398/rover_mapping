// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/Fov.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_msgs/msg/fov.hpp"


#ifndef CUSTOM_MSGS__MSG__DETAIL__FOV__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__FOV__STRUCT_HPP_

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
# define DEPRECATED__custom_msgs__msg__Fov __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__Fov __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Fov_
{
  using Type = Fov_<ContainerAllocator>;

  explicit Fov_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0l;
      this->y = 0l;
      this->fov_size = 0ul;
    }
  }

  explicit Fov_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0l;
      this->y = 0l;
      this->fov_size = 0ul;
    }
  }

  // field types and members
  using _x_type =
    int32_t;
  _x_type x;
  using _y_type =
    int32_t;
  _y_type y;
  using _fov_size_type =
    uint32_t;
  _fov_size_type fov_size;
  using _height_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _height_type height;
  using _roughness_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _roughness_type roughness;
  using _muddiness_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _muddiness_type muddiness;
  using _wetness_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _wetness_type wetness;

  // setters for named parameter idiom
  Type & set__x(
    const int32_t & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const int32_t & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__fov_size(
    const uint32_t & _arg)
  {
    this->fov_size = _arg;
    return *this;
  }
  Type & set__height(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__roughness(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->roughness = _arg;
    return *this;
  }
  Type & set__muddiness(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->muddiness = _arg;
    return *this;
  }
  Type & set__wetness(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->wetness = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::Fov_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::Fov_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::Fov_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::Fov_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::Fov_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::Fov_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::Fov_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::Fov_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::Fov_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::Fov_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__Fov
    std::shared_ptr<custom_msgs::msg::Fov_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__Fov
    std::shared_ptr<custom_msgs::msg::Fov_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Fov_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->fov_size != other.fov_size) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->roughness != other.roughness) {
      return false;
    }
    if (this->muddiness != other.muddiness) {
      return false;
    }
    if (this->wetness != other.wetness) {
      return false;
    }
    return true;
  }
  bool operator!=(const Fov_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Fov_

// alias to use template instance with default allocator
using Fov =
  custom_msgs::msg::Fov_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__FOV__STRUCT_HPP_
