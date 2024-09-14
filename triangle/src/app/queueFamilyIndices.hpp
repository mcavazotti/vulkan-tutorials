#pragma once
#include <optional>

struct QueueFamilyIndices {
  std::optional<u_int32_t> graphicsFamily;

  bool isComplete() { return graphicsFamily.has_value(); }
};