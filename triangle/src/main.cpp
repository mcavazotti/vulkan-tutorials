#include <iostream>
#include <stdexcept>

#include "app/helloTriangleApp.hpp"

int main() {
  HelloTriangleApp app;

  try {
    app.run();
  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}
