// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mi_robot_servicio:srv/Player.idl
// generated code does not contain a copyright notice

#ifndef MI_ROBOT_SERVICIO__SRV__DETAIL__PLAYER__STRUCT_HPP_
#define MI_ROBOT_SERVICIO__SRV__DETAIL__PLAYER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mi_robot_servicio__srv__Player_Request __attribute__((deprecated))
#else
# define DEPRECATED__mi_robot_servicio__srv__Player_Request __declspec(deprecated)
#endif

namespace mi_robot_servicio
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Player_Request_
{
  using Type = Player_Request_<ContainerAllocator>;

  explicit Player_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->player = "";
    }
  }

  explicit Player_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : player(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->player = "";
    }
  }

  // field types and members
  using _player_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _player_type player;

  // setters for named parameter idiom
  Type & set__player(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->player = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mi_robot_servicio::srv::Player_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mi_robot_servicio::srv::Player_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mi_robot_servicio::srv::Player_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mi_robot_servicio::srv::Player_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mi_robot_servicio::srv::Player_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mi_robot_servicio::srv::Player_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mi_robot_servicio::srv::Player_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mi_robot_servicio::srv::Player_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mi_robot_servicio::srv::Player_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mi_robot_servicio::srv::Player_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mi_robot_servicio__srv__Player_Request
    std::shared_ptr<mi_robot_servicio::srv::Player_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mi_robot_servicio__srv__Player_Request
    std::shared_ptr<mi_robot_servicio::srv::Player_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Player_Request_ & other) const
  {
    if (this->player != other.player) {
      return false;
    }
    return true;
  }
  bool operator!=(const Player_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Player_Request_

// alias to use template instance with default allocator
using Player_Request =
  mi_robot_servicio::srv::Player_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mi_robot_servicio


#ifndef _WIN32
# define DEPRECATED__mi_robot_servicio__srv__Player_Response __attribute__((deprecated))
#else
# define DEPRECATED__mi_robot_servicio__srv__Player_Response __declspec(deprecated)
#endif

namespace mi_robot_servicio
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Player_Response_
{
  using Type = Player_Response_<ContainerAllocator>;

  explicit Player_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = false;
    }
  }

  explicit Player_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = false;
    }
  }

  // field types and members
  using _sum_type =
    bool;
  _sum_type sum;

  // setters for named parameter idiom
  Type & set__sum(
    const bool & _arg)
  {
    this->sum = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mi_robot_servicio::srv::Player_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mi_robot_servicio::srv::Player_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mi_robot_servicio::srv::Player_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mi_robot_servicio::srv::Player_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mi_robot_servicio::srv::Player_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mi_robot_servicio::srv::Player_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mi_robot_servicio::srv::Player_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mi_robot_servicio::srv::Player_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mi_robot_servicio::srv::Player_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mi_robot_servicio::srv::Player_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mi_robot_servicio__srv__Player_Response
    std::shared_ptr<mi_robot_servicio::srv::Player_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mi_robot_servicio__srv__Player_Response
    std::shared_ptr<mi_robot_servicio::srv::Player_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Player_Response_ & other) const
  {
    if (this->sum != other.sum) {
      return false;
    }
    return true;
  }
  bool operator!=(const Player_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Player_Response_

// alias to use template instance with default allocator
using Player_Response =
  mi_robot_servicio::srv::Player_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mi_robot_servicio

namespace mi_robot_servicio
{

namespace srv
{

struct Player
{
  using Request = mi_robot_servicio::srv::Player_Request;
  using Response = mi_robot_servicio::srv::Player_Response;
};

}  // namespace srv

}  // namespace mi_robot_servicio

#endif  // MI_ROBOT_SERVICIO__SRV__DETAIL__PLAYER__STRUCT_HPP_
