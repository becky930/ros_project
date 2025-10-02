// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hri_signals_interfaces:msg/HumanSignal.idl
// generated code does not contain a copyright notice

#ifndef HRI_SIGNALS_INTERFACES__MSG__DETAIL__HUMAN_SIGNAL__TRAITS_HPP_
#define HRI_SIGNALS_INTERFACES__MSG__DETAIL__HUMAN_SIGNAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hri_signals_interfaces/msg/detail/human_signal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace hri_signals_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const HumanSignal & msg,
  std::ostream & out)
{
  out << "{";
  // member: gesture
  {
    out << "gesture: ";
    rosidl_generator_traits::value_to_yaml(msg.gesture, out);
    out << ", ";
  }

  // member: intensity
  {
    out << "intensity: ";
    rosidl_generator_traits::value_to_yaml(msg.intensity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HumanSignal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: gesture
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gesture: ";
    rosidl_generator_traits::value_to_yaml(msg.gesture, out);
    out << "\n";
  }

  // member: intensity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "intensity: ";
    rosidl_generator_traits::value_to_yaml(msg.intensity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HumanSignal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace hri_signals_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use hri_signals_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hri_signals_interfaces::msg::HumanSignal & msg,
  std::ostream & out, size_t indentation = 0)
{
  hri_signals_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hri_signals_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const hri_signals_interfaces::msg::HumanSignal & msg)
{
  return hri_signals_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hri_signals_interfaces::msg::HumanSignal>()
{
  return "hri_signals_interfaces::msg::HumanSignal";
}

template<>
inline const char * name<hri_signals_interfaces::msg::HumanSignal>()
{
  return "hri_signals_interfaces/msg/HumanSignal";
}

template<>
struct has_fixed_size<hri_signals_interfaces::msg::HumanSignal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hri_signals_interfaces::msg::HumanSignal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hri_signals_interfaces::msg::HumanSignal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HRI_SIGNALS_INTERFACES__MSG__DETAIL__HUMAN_SIGNAL__TRAITS_HPP_
