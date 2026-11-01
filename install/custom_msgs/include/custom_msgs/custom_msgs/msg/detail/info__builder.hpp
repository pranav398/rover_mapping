// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/Info.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_msgs/msg/info.hpp"


#ifndef CUSTOM_MSGS__MSG__DETAIL__INFO__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_Info_y
{
public:
  explicit Init_Info_y(::custom_msgs::msg::Info & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::Info y(::custom_msgs::msg::Info::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::Info msg_;
};

class Init_Info_x
{
public:
  explicit Init_Info_x(::custom_msgs::msg::Info & msg)
  : msg_(msg)
  {}
  Init_Info_y x(::custom_msgs::msg::Info::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Info_y(msg_);
  }

private:
  ::custom_msgs::msg::Info msg_;
};

class Init_Info_battery
{
public:
  Init_Info_battery()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Info_x battery(::custom_msgs::msg::Info::_battery_type arg)
  {
    msg_.battery = std::move(arg);
    return Init_Info_x(msg_);
  }

private:
  ::custom_msgs::msg::Info msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::Info>()
{
  return custom_msgs::msg::builder::Init_Info_battery();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__INFO__BUILDER_HPP_
