// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hri_signals_interfaces:msg/HumanSignal.idl
// generated code does not contain a copyright notice

#ifndef HRI_SIGNALS_INTERFACES__MSG__DETAIL__HUMAN_SIGNAL__BUILDER_HPP_
#define HRI_SIGNALS_INTERFACES__MSG__DETAIL__HUMAN_SIGNAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hri_signals_interfaces/msg/detail/human_signal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hri_signals_interfaces
{

namespace msg
{

namespace builder
{

class Init_HumanSignal_intensity
{
public:
  explicit Init_HumanSignal_intensity(::hri_signals_interfaces::msg::HumanSignal & msg)
  : msg_(msg)
  {}
  ::hri_signals_interfaces::msg::HumanSignal intensity(::hri_signals_interfaces::msg::HumanSignal::_intensity_type arg)
  {
    msg_.intensity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hri_signals_interfaces::msg::HumanSignal msg_;
};

class Init_HumanSignal_gesture
{
public:
  Init_HumanSignal_gesture()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HumanSignal_intensity gesture(::hri_signals_interfaces::msg::HumanSignal::_gesture_type arg)
  {
    msg_.gesture = std::move(arg);
    return Init_HumanSignal_intensity(msg_);
  }

private:
  ::hri_signals_interfaces::msg::HumanSignal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hri_signals_interfaces::msg::HumanSignal>()
{
  return hri_signals_interfaces::msg::builder::Init_HumanSignal_gesture();
}

}  // namespace hri_signals_interfaces

#endif  // HRI_SIGNALS_INTERFACES__MSG__DETAIL__HUMAN_SIGNAL__BUILDER_HPP_
