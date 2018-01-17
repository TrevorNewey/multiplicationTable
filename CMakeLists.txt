cmake_minimum_required(VERSION 3.8)
project(multiplicationTable)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp multTable.cpp multTable.h)
add_executable(multiplicationTable ${SOURCE_FILES})