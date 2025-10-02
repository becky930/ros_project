// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hri_signals_interfaces:msg/HumanSignal.idl
// generated code does not contain a copyright notice

#ifndef HRI_SIGNALS_INTERFACES__MSG__DETAIL__HUMAN_SIGNAL__STRUCT_HPP_
#define HRI_SIGNALS_INTERFACES__MSG__DETAIL__HUMAN_SIGNAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hri_signals_interfaces__msg__HumanSignal __attribute__((deprecated))
#else
# define DEPRECATED__hri_signals_interfaces__msg__HumanSignal __declspec(deprecated)
#endif

namespace hri_signals_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HumanSignal_
{
  using Type = HumanSignal_<ContainerAllocator>;

  explicit HumanSignal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gesture = "";
      this->intensity = 0l;
    }
  }

  explicit HumanSignal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : gesture(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gesture = "";
      this->intensity = 0l;
    }
  }

  // field types and members
  using _gesture_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _gesture_type gesture;
  using _intensity_type =
    int32_t;
  _intensity_type intensity;

  // setters for named parameter idiom
  Type & set__gesture(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->gesture = _arg;
    return *this;
  }
  Type & set__intensity(
    const int32_t & _arg)
  {
    this->intensity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hri_signals_interfaces::msg::HumanSignal_<ContainerAllocator> *;
  using ConstRawPtr =
    const hri_signals_interfaces::msg::HumanSignal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hri_signals_interfaces::msg::HumanSignal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hri_signals_interfaces::msg::HumanSignal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hri_signals_interfaces::msg::HumanSignal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hri_signals_interfaces::msg::HumanSignal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hri_signals_interfaces::msg::HumanSignal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hri_signals_interfaces::msg::HumanSignal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hri_signals_interfaces::msg::HumanSignal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hri_signals_interfaces::msg::HumanSignal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hri_signals_interfaces__msg__HumanSignal
    std::shared_ptr<hri_signals_interfaces::msg::HumanSignal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hri_signals_interfaces__msg__HumanSignal
    std::shared_ptr<hri_signals_interfaces::msg::HumanSignal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HumanSignal_ & other) const
  {
    if (this->gesture != other.gesture) {
      return false;
    }
    if (this->intensity != other.intensity) {
      return false;
    }
    return true;
  }
  bool operator!=(const HumanSignal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HumanSignal_

// alias to use template instance with default allocator
using HumanSignal =
  hri_signals_interfaces::msg::HumanSignal_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hri_signals_interfaces

#endif  // HRI_SIGNALS_INTERFACES__MSG__DETAIL__HUMAN_SIGNAL__STRUCT_HPP_
