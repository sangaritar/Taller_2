// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mi_robot_servicio:srv/Player.idl
// generated code does not contain a copyright notice

#ifndef MI_ROBOT_SERVICIO__SRV__DETAIL__PLAYER__BUILDER_HPP_
#define MI_ROBOT_SERVICIO__SRV__DETAIL__PLAYER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mi_robot_servicio/srv/detail/player__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mi_robot_servicio
{

namespace srv
{

namespace builder
{

class Init_Player_Request_player
{
public:
  Init_Player_Request_player()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mi_robot_servicio::srv::Player_Request player(::mi_robot_servicio::srv::Player_Request::_player_type arg)
  {
    msg_.player = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mi_robot_servicio::srv::Player_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mi_robot_servicio::srv::Player_Request>()
{
  return mi_robot_servicio::srv::builder::Init_Player_Request_player();
}

}  // namespace mi_robot_servicio


namespace mi_robot_servicio
{

namespace srv
{

namespace builder
{

class Init_Player_Response_sum
{
public:
  Init_Player_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mi_robot_servicio::srv::Player_Response sum(::mi_robot_servicio::srv::Player_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mi_robot_servicio::srv::Player_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mi_robot_servicio::srv::Player_Response>()
{
  return mi_robot_servicio::srv::builder::Init_Player_Response_sum();
}

}  // namespace mi_robot_servicio

#endif  // MI_ROBOT_SERVICIO__SRV__DETAIL__PLAYER__BUILDER_HPP_
