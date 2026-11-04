cmake_minimum_required(VERSION 3.20)

project(VulkanLearning LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Graphics dependencies
find_package(Vulkan REQUIRED)
find_package(glfw3 CONFIG REQUIRED)
find_package(glm CONFIG REQUIRED)

# Common dependencies
add_library(vulkan_common INTERFACE)

target_link_libraries(vulkan_common
    INTERFACE
        Vulkan::Vulkan
        glfw
        glm::glm
)

# Tutorial sections
add_subdirectory(src/01_drawing_a_triangle)

