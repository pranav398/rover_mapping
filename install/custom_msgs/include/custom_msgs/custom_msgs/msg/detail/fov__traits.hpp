// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msgs:msg/Fov.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_msgs/msg/fov.hpp"


#ifndef CUSTOM_MSGS__MSG__DETAIL__FOV__TRAITS_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__FOV__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "custom_msgs/msg/detail/fov__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Fov & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: battery
  {
    out << "battery: ";
    rosidl_generator_traits::value_to_yaml(msg.battery, out);
    out << ", ";
  }

  // member: fov_size
  {
    out << "fov_size: ";
    rosidl_generator_traits::value_to_yaml(msg.fov_size, out);
    out << ", ";
  }

  // member: target_x
  {
    out << "target_x: ";
    rosidl_generator_traits::value_to_yaml(msg.target_x, out);
    out << ", ";
  }

  // member: target_y
  {
    out << "target_y: ";
    rosidl_generator_traits::value_to_yaml(msg.target_y, out);
    out << ", ";
  }

  // member: target_rad
  {
    out << "target_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.target_rad, out);
    out << ", ";
  }

  // member: height
  {
    if (msg.height.size() == 0) {
      out << "height: []";
    } else {
      out << "height: [";
      size_t pending_items = msg.height.size();
      for (auto item : msg.height) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: roughness
  {
    if (msg.roughness.size() == 0) {
      out << "roughness: []";
    } else {
      out << "roughness: [";
      size_t pending_items = msg.roughness.size();
      for (auto item : msg.roughness) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: muddiness
  {
    if (msg.muddiness.size() == 0) {
      out << "muddiness: []";
    } else {
      out << "muddiness: [";
      size_t pending_items = msg.muddiness.size();
      for (auto item : msg.muddiness) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: wetness
  {
    if (msg.wetness.size() == 0) {
      out << "wetness: []";
    } else {
      out << "wetness: [";
      size_t pending_items = msg.wetness.size();
      for (auto item : msg.wetness) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: goal_cells
  {
    if (msg.goal_cells.size() == 0) {
      out << "goal_cells: []";
    } else {
      out << "goal_cells: [";
      size_t pending_items = msg.goal_cells.size();
      for (auto item : msg.goal_cells) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Fov & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: battery
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery: ";
    rosidl_generator_traits::value_to_yaml(msg.battery, out);
    out << "\n";
  }

  // member: fov_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fov_size: ";
    rosidl_generator_traits::value_to_yaml(msg.fov_size, out);
    out << "\n";
  }

  // member: target_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_x: ";
    rosidl_generator_traits::value_to_yaml(msg.target_x, out);
    out << "\n";
  }

  // member: target_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_y: ";
    rosidl_generator_traits::value_to_yaml(msg.target_y, out);
    out << "\n";
  }

  // member: target_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.target_rad, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.height.size() == 0) {
      out << "height: []\n";
    } else {
      out << "height:\n";
      for (auto item : msg.height) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: roughness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.roughness.size() == 0) {
      out << "roughness: []\n";
    } else {
      out << "roughness:\n";
      for (auto item : msg.roughness) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: muddiness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.muddiness.size() == 0) {
      out << "muddiness: []\n";
    } else {
      out << "muddiness:\n";
      for (auto item : msg.muddiness) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: wetness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.wetness.size() == 0) {
      out << "wetness: []\n";
    } else {
      out << "wetness:\n";
      for (auto item : msg.wetness) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: goal_cells
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.goal_cells.size() == 0) {
      out << "goal_cells: []\n";
    } else {
      out << "goal_cells:\n";
      for (auto item : msg.goal_cells) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Fov & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, custom_msgs::msg::Fov>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).x,
    std::forward<T>(msg).y,
    std::forward<T>(msg).battery,
    std::forward<T>(msg).fov_size,
    std::forward<T>(msg).target_x,
    std::forward<T>(msg).target_y,
    std::forward<T>(msg).target_rad,
    std::forward<T>(msg).height,
    std::forward<T>(msg).roughness,
    std::forward<T>(msg).muddiness,
    std::forward<T>(msg).wetness,
    std::forward<T>(msg).goal_cells);
}

}  // namespace msg

}  // namespace custom_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<custom_msgs::msg::Fov>()
{
  return "custom_msgs::msg::Fov";
}

template<>
constexpr const char * name<custom_msgs::msg::Fov>()
{
  return "custom_msgs/msg/Fov";
}

template<>
struct has_fixed_size<custom_msgs::msg::Fov>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_msgs::msg::Fov>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_msgs::msg::Fov>
  : std::true_type {};

template<>
struct MessageTraits<custom_msgs::msg::Fov>
{
  static constexpr std::size_t member_count = 12;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "x",
    "y",
    "battery",
    "fov_size",
    "target_x",
    "target_y",
    "target_rad",
    "height",
    "roughness",
    "muddiness",
    "wetness",
    "goal_cells",
  };
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSGS__MSG__DETAIL__FOV__TRAITS_HPP_
