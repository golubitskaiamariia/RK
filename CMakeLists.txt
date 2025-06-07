cmake_minimum_required(VERSION 3.8)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(Memento)
add_library(classes STATIC classes.cpp)
add_executable(main main.cpp)

target_link_libraries(main classes)
