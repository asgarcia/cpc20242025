cmake_minimum_required(VERSION 3.27)
project(structura)

set(CMAKE_CXX_STANDARD 17)

add_executable(structura main.cpp
        pid.cpp
        clasePID.cpp
        clasePID.h)
