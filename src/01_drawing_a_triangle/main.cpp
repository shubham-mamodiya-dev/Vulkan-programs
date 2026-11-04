#define VULKAN_HPP_NO_STRUCT_CONSTRUCTORS

#if defined(__INTELLISENSE__) || !defined(USE_CPP20_MODULES)
#include <vulkan/vulkan_raii.hpp>
#else
import vulkan_hpp;
#endif

#include <GLFW/glfw3.h>

#include <cstdlib>
#include <istream>
#include <stdexcept>

class HelloTriangleApplication {
public:
  void run() {
    this->initVulkan();
    this->mainloop();
    this->cleanup();
  }

private:
  void initVulkan() {};

  void mainloop() {};

  void cleanup() {};
};
