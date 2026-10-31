// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:srv/Battery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_msgs/srv/battery.hpp"


#ifndef CUSTOM_MSGS__SRV__DETAIL__BATTERY__BUILDER_HPP_
#define CUSTOM_MSGS__SRV__DETAIL__BATTERY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/srv/detail/battery__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace srv
{

namespace builder
{

class Init_Battery_Request_deduction
{
public:
  Init_Battery_Request_deduction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_msgs::srv::Battery_Request deduction(::custom_msgs::srv::Battery_Request::_deduction_type arg)
  {
    msg_.deduction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::srv::Battery_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::srv::Battery_Request>()
{
  return custom_msgs::srv::builder::Init_Battery_Request_deduction();
}

}  // namespace custom_msgs


namespace custom_msgs
{

namespace srv
{

namespace builder
{

class Init_Battery_Response_reason
{
public:
  explicit Init_Battery_Response_reason(::custom_msgs::srv::Battery_Response & msg)
  : msg_(msg)
  {}
  ::custom_msgs::srv::Battery_Response reason(::custom_msgs::srv::Battery_Response::_reason_type arg)
  {
    msg_.reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::srv::Battery_Response msg_;
};

class Init_Battery_Response_accepted
{
public:
  Init_Battery_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Battery_Response_reason accepted(::custom_msgs::srv::Battery_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Battery_Response_reason(msg_);
  }

private:
  ::custom_msgs::srv::Battery_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::srv::Battery_Response>()
{
  return custom_msgs::srv::builder::Init_Battery_Response_accepted();
}

}  // namespace custom_msgs


namespace custom_msgs
{

namespace srv
{

namespace builder
{

class Init_Battery_Event_response
{
public:
  explicit Init_Battery_Event_response(::custom_msgs::srv::Battery_Event & msg)
  : msg_(msg)
  {}
  ::custom_msgs::srv::Battery_Event response(::custom_msgs::srv::Battery_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::srv::Battery_Event msg_;
};

class Init_Battery_Event_request
{
public:
  explicit Init_Battery_Event_request(::custom_msgs::srv::Battery_Event & msg)
  : msg_(msg)
  {}
  Init_Battery_Event_response request(::custom_msgs::srv::Battery_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Battery_Event_response(msg_);
  }

private:
  ::custom_msgs::srv::Battery_Event msg_;
};

class Init_Battery_Event_info
{
public:
  Init_Battery_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Battery_Event_request info(::custom_msgs::srv::Battery_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Battery_Event_request(msg_);
  }

private:
  ::custom_msgs::srv::Battery_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::srv::Battery_Event>()
{
  return custom_msgs::srv::builder::Init_Battery_Event_info();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__SRV__DETAIL__BATTERY__BUILDER_HPP_
