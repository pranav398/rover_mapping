// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/Fov.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_msgs/msg/fov.hpp"


#ifndef CUSTOM_MSGS__MSG__DETAIL__FOV__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__FOV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/fov__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_Fov_goal_cells
{
public:
  explicit Init_Fov_goal_cells(::custom_msgs::msg::Fov & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::Fov goal_cells(::custom_msgs::msg::Fov::_goal_cells_type arg)
  {
    msg_.goal_cells = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::Fov msg_;
};

class Init_Fov_wetness
{
public:
  explicit Init_Fov_wetness(::custom_msgs::msg::Fov & msg)
  : msg_(msg)
  {}
  Init_Fov_goal_cells wetness(::custom_msgs::msg::Fov::_wetness_type arg)
  {
    msg_.wetness = std::move(arg);
    return Init_Fov_goal_cells(msg_);
  }

private:
  ::custom_msgs::msg::Fov msg_;
};

class Init_Fov_muddiness
{
public:
  explicit Init_Fov_muddiness(::custom_msgs::msg::Fov & msg)
  : msg_(msg)
  {}
  Init_Fov_wetness muddiness(::custom_msgs::msg::Fov::_muddiness_type arg)
  {
    msg_.muddiness = std::move(arg);
    return Init_Fov_wetness(msg_);
  }

private:
  ::custom_msgs::msg::Fov msg_;
};

class Init_Fov_roughness
{
public:
  explicit Init_Fov_roughness(::custom_msgs::msg::Fov & msg)
  : msg_(msg)
  {}
  Init_Fov_muddiness roughness(::custom_msgs::msg::Fov::_roughness_type arg)
  {
    msg_.roughness = std::move(arg);
    return Init_Fov_muddiness(msg_);
  }

private:
  ::custom_msgs::msg::Fov msg_;
};

class Init_Fov_height
{
public:
  explicit Init_Fov_height(::custom_msgs::msg::Fov & msg)
  : msg_(msg)
  {}
  Init_Fov_roughness height(::custom_msgs::msg::Fov::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_Fov_roughness(msg_);
  }

private:
  ::custom_msgs::msg::Fov msg_;
};

class Init_Fov_target_rad
{
public:
  explicit Init_Fov_target_rad(::custom_msgs::msg::Fov & msg)
  : msg_(msg)
  {}
  Init_Fov_height target_rad(::custom_msgs::msg::Fov::_target_rad_type arg)
  {
    msg_.target_rad = std::move(arg);
    return Init_Fov_height(msg_);
  }

private:
  ::custom_msgs::msg::Fov msg_;
};

class Init_Fov_target_y
{
public:
  explicit Init_Fov_target_y(::custom_msgs::msg::Fov & msg)
  : msg_(msg)
  {}
  Init_Fov_target_rad target_y(::custom_msgs::msg::Fov::_target_y_type arg)
  {
    msg_.target_y = std::move(arg);
    return Init_Fov_target_rad(msg_);
  }

private:
  ::custom_msgs::msg::Fov msg_;
};

class Init_Fov_target_x
{
public:
  explicit Init_Fov_target_x(::custom_msgs::msg::Fov & msg)
  : msg_(msg)
  {}
  Init_Fov_target_y target_x(::custom_msgs::msg::Fov::_target_x_type arg)
  {
    msg_.target_x = std::move(arg);
    return Init_Fov_target_y(msg_);
  }

private:
  ::custom_msgs::msg::Fov msg_;
};

class Init_Fov_fov_size
{
public:
  explicit Init_Fov_fov_size(::custom_msgs::msg::Fov & msg)
  : msg_(msg)
  {}
  Init_Fov_target_x fov_size(::custom_msgs::msg::Fov::_fov_size_type arg)
  {
    msg_.fov_size = std::move(arg);
    return Init_Fov_target_x(msg_);
  }

private:
  ::custom_msgs::msg::Fov msg_;
};

class Init_Fov_battery
{
public:
  explicit Init_Fov_battery(::custom_msgs::msg::Fov & msg)
  : msg_(msg)
  {}
  Init_Fov_fov_size battery(::custom_msgs::msg::Fov::_battery_type arg)
  {
    msg_.battery = std::move(arg);
    return Init_Fov_fov_size(msg_);
  }

private:
  ::custom_msgs::msg::Fov msg_;
};

class Init_Fov_y
{
public:
  explicit Init_Fov_y(::custom_msgs::msg::Fov & msg)
  : msg_(msg)
  {}
  Init_Fov_battery y(::custom_msgs::msg::Fov::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Fov_battery(msg_);
  }

private:
  ::custom_msgs::msg::Fov msg_;
};

class Init_Fov_x
{
public:
  Init_Fov_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fov_y x(::custom_msgs::msg::Fov::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Fov_y(msg_);
  }

private:
  ::custom_msgs::msg::Fov msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::Fov>()
{
  return custom_msgs::msg::builder::Init_Fov_x();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__FOV__BUILDER_HPP_
