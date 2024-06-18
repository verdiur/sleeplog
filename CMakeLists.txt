cmake_minimum_required(VERSION 3.10)
project(sleeplog)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED 20)

add_executable(${PROJECT_NAME}
    # main
    src/main.cc
    # core
    src/core/article.cc
)

target_include_directories(${PROJECT_NAME} PUBLIC
    src/
    libs/
)

target_link_options(${PROJECT_NAME} PRIVATE -static-libgcc -static-libstdc++)
