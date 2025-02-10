cmake_minimum_required(VERSION 3.5.0)
project(Calculator-C-Kernel VERSION 0.1.0 LANGUAGES C)

file(GLOB_RECURSE SOURCES "Calculator-Core/src/*.c")
file(GLOB_RECURSE HEADERS "Calculator-Core/include/*.h")

add_executable(Calculator-C-Kernel ${SOURCES})
target_include_directories(Calculator-C-Kernel PRIVATE Calculator-Core/include)