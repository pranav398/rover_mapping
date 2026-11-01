// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msgs:msg/Info.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_msgs/msg/info.hpp"


#ifndef CUSTOM_MSGS__MSG__DETAIL__INFO__TRAITS_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__INFO__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "custom_msgs/msg/detail/info__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Info & msg,
  std::ostream & out)
{
  out << "{";
  // member: battery
  {
    out << "battery: ";
    rosidl_generator_traits::value_to_yaml(msg.battery, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Info & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: battery
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery: ";
    rosidl_generator_traits::value_to_yaml(msg.battery, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Info & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, custom_msgs::msg::Info>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).battery,
    std::forward<T>(msg).x,
    std::forward<T>(msg).y);
}

}  // namespace msg

}  // namespace custom_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<custom_msgs::msg::Info>()
{
  return "custom_msgs::msg::Info";
}

template<>
constexpr const char * name<custom_msgs::msg::Info>()
{
  return "custom_msgs/msg/Info";
}

template<>
struct has_fixed_size<custom_msgs::msg::Info>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_msgs::msg::Info>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_msgs::msg::Info>
  : std::true_type {};

template<>
struct MessageTraits<custom_msgs::msg::Info>
{
  static constexpr std::size_t member_count = 3;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "battery",
    "x",
    "y",
  };
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSGS__MSG__DETAIL__INFO__TRAITS_HPP_
