cmake_minimum_required(VERSION 3.8)
project(pythagoras)

set(CMAKE_C_STANDARD 99)
set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_C_FLAGS "-Wall -Werror")

file(GLOB SOURCE_FILES "*.c")
file(GLOB HEADER_FILES "*.h")

# your app
add_executable(pythagoras ${SOURCE_FILES} ${HEADER_FILES})
target_link_libraries(pythagoras m)
