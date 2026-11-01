// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:srv/SwitchMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_msgs/srv/switch_mode.hpp"


#ifndef CUSTOM_MSGS__SRV__DETAIL__SWITCH_MODE__BUILDER_HPP_
#define CUSTOM_MSGS__SRV__DETAIL__SWITCH_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/srv/detail/switch_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace srv
{

namespace builder
{

class Init_SwitchMode_Request_mode
{
public:
  Init_SwitchMode_Request_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_msgs::srv::SwitchMode_Request mode(::custom_msgs::srv::SwitchMode_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::srv::SwitchMode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::srv::SwitchMode_Request>()
{
  return custom_msgs::srv::builder::Init_SwitchMode_Request_mode();
}

}  // namespace custom_msgs


namespace custom_msgs
{

namespace srv
{

namespace builder
{

class Init_SwitchMode_Response_message
{
public:
  explicit Init_SwitchMode_Response_message(::custom_msgs::srv::SwitchMode_Response & msg)
  : msg_(msg)
  {}
  ::custom_msgs::srv::SwitchMode_Response message(::custom_msgs::srv::SwitchMode_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::srv::SwitchMode_Response msg_;
};

class Init_SwitchMode_Response_success
{
public:
  Init_SwitchMode_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SwitchMode_Response_message success(::custom_msgs::srv::SwitchMode_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SwitchMode_Response_message(msg_);
  }

private:
  ::custom_msgs::srv::SwitchMode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::srv::SwitchMode_Response>()
{
  return custom_msgs::srv::builder::Init_SwitchMode_Response_success();
}

}  // namespace custom_msgs


namespace custom_msgs
{

namespace srv
{

namespace builder
{

class Init_SwitchMode_Event_response
{
public:
  explicit Init_SwitchMode_Event_response(::custom_msgs::srv::SwitchMode_Event & msg)
  : msg_(msg)
  {}
  ::custom_msgs::srv::SwitchMode_Event response(::custom_msgs::srv::SwitchMode_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::srv::SwitchMode_Event msg_;
};

class Init_SwitchMode_Event_request
{
public:
  explicit Init_SwitchMode_Event_request(::custom_msgs::srv::SwitchMode_Event & msg)
  : msg_(msg)
  {}
  Init_SwitchMode_Event_response request(::custom_msgs::srv::SwitchMode_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SwitchMode_Event_response(msg_);
  }

private:
  ::custom_msgs::srv::SwitchMode_Event msg_;
};

class Init_SwitchMode_Event_info
{
public:
  Init_SwitchMode_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SwitchMode_Event_request info(::custom_msgs::srv::SwitchMode_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SwitchMode_Event_request(msg_);
  }

private:
  ::custom_msgs::srv::SwitchMode_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::srv::SwitchMode_Event>()
{
  return custom_msgs::srv::builder::Init_SwitchMode_Event_info();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__SRV__DETAIL__SWITCH_MODE__BUILDER_HPP_
