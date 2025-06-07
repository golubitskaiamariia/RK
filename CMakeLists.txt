cmake_minimum_required(VERSION 3.8)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(Memento)

include_directories(include)
add_library(classes STATIC source/classes.cpp)
add_executable(main source/main.cpp)

target_link_libraries(main classes)
add_subdirectory(test)
add_subdirectory(third-party/gtest)
