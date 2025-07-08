cmake_minimum_required(VERSION 4.0)
project(ProjectInstaller)

set(CMAKE_CXX_STANDARD 26)

add_executable(ProjectInstaller main.cpp
        Installation/Installing.cpp)
