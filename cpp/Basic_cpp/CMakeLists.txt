cmake_minimum_required(VERSION 4.0)
project(Basic_cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(1.variables)
include_directories(10.oob)
include_directories(11.struct)
include_directories(2.arithmetic_operators)
include_directories(3.control_structure_if)
include_directories(4.control_structure_switch)
include_directories(5.loop)
include_directories(6.pointers)
include_directories(7.references)
include_directories(8.functions)

add_executable(Basic_cpp
        1.variables/1.cpp
        1.cpp)
