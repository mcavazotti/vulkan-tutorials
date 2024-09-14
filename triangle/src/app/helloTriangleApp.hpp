#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <iostream>

#include "queueFamilyIndices.hpp"

const uint32_t WIDTH = 800;
const uint32_t HEIGHT = 600;

class HelloTriangleApp {
 public:
  void run();

 private:
  VkInstance instance;
  VkDebugUtilsMessengerEXT debugMessenger;
  VkPhysicalDevice physicalDevice = VK_NULL_HANDLE;
  VkDevice device;
  VkQueue graphicsQueue;
  VkQueue presentQueue;
  VkSurfaceKHR surface;

  GLFWwindow* window;


  static VKAPI_ATTR VkBool32 VKAPI_CALL
  debugCallback(VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity,
                VkDebugUtilsMessageTypeFlagsEXT messageType,
                const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData,
                void* pUserData) {
    std::cerr << "validation layer:" << pCallbackData->pMessage << std::endl;

    return VK_FALSE;
  }

  void initWindow();

  void initVulkan();

  void createSurface();

  void pickPhysicalDevice();

  void createLogicalDevice();

  bool isDeviceSuitable(VkPhysicalDevice device);

  QueueFamilyIndices findQueueFamilies(VkPhysicalDevice device);

  void createInstance();

  void populateDebugMessengerCreateInfo(
      VkDebugUtilsMessengerCreateInfoEXT& createInfo);

  void setupDebugMessenger();

  void mainLoop();

  void cleanup();
};