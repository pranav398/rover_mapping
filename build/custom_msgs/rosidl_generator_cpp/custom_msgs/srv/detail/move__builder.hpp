// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:srv/Move.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_msgs/srv/move.hpp"


#ifndef CUSTOM_MSGS__SRV__DETAIL__MOVE__BUILDER_HPP_
#define CUSTOM_MSGS__SRV__DETAIL__MOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/srv/detail/move__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace srv
{

namespace builder
{

class Init_Move_Request_deduction
{
public:
  explicit Init_Move_Request_deduction(::custom_msgs::srv::Move_Request & msg)
  : msg_(msg)
  {}
  ::custom_msgs::srv::Move_Request deduction(::custom_msgs::srv::Move_Request::_deduction_type arg)
  {
    msg_.deduction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::srv::Move_Request msg_;
};

class Init_Move_Request_delta_y
{
public:
  explicit Init_Move_Request_delta_y(::custom_msgs::srv::Move_Request & msg)
  : msg_(msg)
  {}
  Init_Move_Request_deduction delta_y(::custom_msgs::srv::Move_Request::_delta_y_type arg)
  {
    msg_.delta_y = std::move(arg);
    return Init_Move_Request_deduction(msg_);
  }

private:
  ::custom_msgs::srv::Move_Request msg_;
};

class Init_Move_Request_delta_x
{
public:
  Init_Move_Request_delta_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_Request_delta_y delta_x(::custom_msgs::srv::Move_Request::_delta_x_type arg)
  {
    msg_.delta_x = std::move(arg);
    return Init_Move_Request_delta_y(msg_);
  }

private:
  ::custom_msgs::srv::Move_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::srv::Move_Request>()
{
  return custom_msgs::srv::builder::Init_Move_Request_delta_x();
}

}  // namespace custom_msgs


namespace custom_msgs
{

namespace srv
{

namespace builder
{

class Init_Move_Response_reason
{
public:
  explicit Init_Move_Response_reason(::custom_msgs::srv::Move_Response & msg)
  : msg_(msg)
  {}
  ::custom_msgs::srv::Move_Response reason(::custom_msgs::srv::Move_Response::_reason_type arg)
  {
    msg_.reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::srv::Move_Response msg_;
};

class Init_Move_Response_accepted
{
public:
  Init_Move_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_Response_reason accepted(::custom_msgs::srv::Move_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Move_Response_reason(msg_);
  }

private:
  ::custom_msgs::srv::Move_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::srv::Move_Response>()
{
  return custom_msgs::srv::builder::Init_Move_Response_accepted();
}

}  // namespace custom_msgs


namespace custom_msgs
{

namespace srv
{

namespace builder
{

class Init_Move_Event_response
{
public:
  explicit Init_Move_Event_response(::custom_msgs::srv::Move_Event & msg)
  : msg_(msg)
  {}
  ::custom_msgs::srv::Move_Event response(::custom_msgs::srv::Move_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::srv::Move_Event msg_;
};

class Init_Move_Event_request
{
public:
  explicit Init_Move_Event_request(::custom_msgs::srv::Move_Event & msg)
  : msg_(msg)
  {}
  Init_Move_Event_response request(::custom_msgs::srv::Move_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Move_Event_response(msg_);
  }

private:
  ::custom_msgs::srv::Move_Event msg_;
};

class Init_Move_Event_info
{
public:
  Init_Move_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_Event_request info(::custom_msgs::srv::Move_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Move_Event_request(msg_);
  }

private:
  ::custom_msgs::srv::Move_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::srv::Move_Event>()
{
  return custom_msgs::srv::builder::Init_Move_Event_info();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__SRV__DETAIL__MOVE__BUILDER_HPP_
