// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mi_robot_servicio:srv/Player.idl
// generated code does not contain a copyright notice

#ifndef MI_ROBOT_SERVICIO__SRV__DETAIL__PLAYER__TRAITS_HPP_
#define MI_ROBOT_SERVICIO__SRV__DETAIL__PLAYER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mi_robot_servicio/srv/detail/player__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mi_robot_servicio
{

namespace srv
{

inline void to_flow_style_yaml(
  const Player_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: player
  {
    out << "player: ";
    rosidl_generator_traits::value_to_yaml(msg.player, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Player_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: player
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "player: ";
    rosidl_generator_traits::value_to_yaml(msg.player, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Player_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mi_robot_servicio

namespace rosidl_generator_traits
{

[[deprecated("use mi_robot_servicio::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mi_robot_servicio::srv::Player_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mi_robot_servicio::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mi_robot_servicio::srv::to_yaml() instead")]]
inline std::string to_yaml(const mi_robot_servicio::srv::Player_Request & msg)
{
  return mi_robot_servicio::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mi_robot_servicio::srv::Player_Request>()
{
  return "mi_robot_servicio::srv::Player_Request";
}

template<>
inline const char * name<mi_robot_servicio::srv::Player_Request>()
{
  return "mi_robot_servicio/srv/Player_Request";
}

template<>
struct has_fixed_size<mi_robot_servicio::srv::Player_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mi_robot_servicio::srv::Player_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mi_robot_servicio::srv::Player_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mi_robot_servicio
{

namespace srv
{

inline void to_flow_style_yaml(
  const Player_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: sum
  {
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Player_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Player_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mi_robot_servicio

namespace rosidl_generator_traits
{

[[deprecated("use mi_robot_servicio::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mi_robot_servicio::srv::Player_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mi_robot_servicio::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mi_robot_servicio::srv::to_yaml() instead")]]
inline std::string to_yaml(const mi_robot_servicio::srv::Player_Response & msg)
{
  return mi_robot_servicio::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mi_robot_servicio::srv::Player_Response>()
{
  return "mi_robot_servicio::srv::Player_Response";
}

template<>
inline const char * name<mi_robot_servicio::srv::Player_Response>()
{
  return "mi_robot_servicio/srv/Player_Response";
}

template<>
struct has_fixed_size<mi_robot_servicio::srv::Player_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mi_robot_servicio::srv::Player_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mi_robot_servicio::srv::Player_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mi_robot_servicio::srv::Player>()
{
  return "mi_robot_servicio::srv::Player";
}

template<>
inline const char * name<mi_robot_servicio::srv::Player>()
{
  return "mi_robot_servicio/srv/Player";
}

template<>
struct has_fixed_size<mi_robot_servicio::srv::Player>
  : std::integral_constant<
    bool,
    has_fixed_size<mi_robot_servicio::srv::Player_Request>::value &&
    has_fixed_size<mi_robot_servicio::srv::Player_Response>::value
  >
{
};

template<>
struct has_bounded_size<mi_robot_servicio::srv::Player>
  : std::integral_constant<
    bool,
    has_bounded_size<mi_robot_servicio::srv::Player_Request>::value &&
    has_bounded_size<mi_robot_servicio::srv::Player_Response>::value
  >
{
};

template<>
struct is_service<mi_robot_servicio::srv::Player>
  : std::true_type
{
};

template<>
struct is_service_request<mi_robot_servicio::srv::Player_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mi_robot_servicio::srv::Player_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MI_ROBOT_SERVICIO__SRV__DETAIL__PLAYER__TRAITS_HPP_
