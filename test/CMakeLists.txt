cmake_minimum_required(VERSION 3.8)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(test)

enable_testing()
add_executable(test test.cpp)

target_link_libraries(test classes gtest)

add_test(test_rk test)
