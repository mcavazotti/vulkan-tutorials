#pragma once
#include <optional>

struct QueueFamilyIndices {
  std::optional<u_int32_t> graphicsFamily;
  std::optional<u_int32_t> presentFamily;

  bool isComplete() {
    return graphicsFamily.has_value() && presentFamily.has_value();
  }
};