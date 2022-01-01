cmake_minimum_required(VERSION 3.14)

project(virtualmachine)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c)

# add_subdirectory(tests)
add_subdirectory(virtualmachine)

target_link_libraries(virtualmachine)