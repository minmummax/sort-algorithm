cmake_minimum_required(VERSION 3.5)
project(example)

set(CMAKE_CXX_STANDARD 11)

#add_subdirectory(/home/wangkun/sources/dlib-19.12/dlib dlib_build)

add_executable(example main.cpp mysort.h mysort.cpp)

#target_link_libraries(example dlib::dlib)