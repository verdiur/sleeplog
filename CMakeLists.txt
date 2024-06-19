cmake_minimum_required(VERSION 3.10)
project(sleeplog)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED 20)

file(GLOB IMGUI_SRC "libs/imgui/*.cpp")

add_subdirectory(libs/glfw)

add_executable(${PROJECT_NAME}
    # main
    src/main.cc
    # core
    src/core/article.cc
    # 3rd party
    libs/glad/glad.c
    ${IMGUI_SRC}
    libs/imgui/backends/imgui_impl_glfw.cpp
    libs/imgui/backends/imgui_impl_opengl3.cpp
    libs/imgui/misc/cpp/imgui_stdlib.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC
    src/
    libs/
    libs/imgui/
)

target_link_options(${PROJECT_NAME} PRIVATE -static-libgcc -static-libstdc++)
target_link_libraries(${PROJECT_NAME} glfw ${GLFW_LIBRARY})
