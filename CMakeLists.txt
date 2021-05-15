cmake_minimum_required(VERSION 3.10)
project(bl1tzR_assignment)

message("C++ compiler flags: ${CMAKE_CXX_FLAGS}")
set(CMAKE_CXX_STANDARD 11)

include_directories(CMAKE_SOURCE_DIR)

add_library(lib lib.cpp)
add_executable(main main.cpp)
target_link_libraries(main lib)