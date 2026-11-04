

add_executable(drawing_a_triangle
    main.cpp
)

target_link_libraries(drawing_a_triangle
    PRIVATE
        vulkan_common
)
