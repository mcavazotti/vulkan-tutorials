#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <vector>

const std::vector<const char*> validationLayers = {
    "VK_LAYER_KHRONOS_validation"};

#ifdef NDEBUG
const bool enabelValidationLayers = false;
#else
const bool enabelValidationLayers = true;
#endif

bool checkValidationLayerSupport();

std::vector<const char*> getRequiredExtensions();