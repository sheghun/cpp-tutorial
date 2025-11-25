cmake_minimum_required(VERSION 4.0)
project(intro)

# set c++ to standard 20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(basic src/001_basic/main.cpp)
add_executable(basic_assignment src/001_basic/assignment.cpp)