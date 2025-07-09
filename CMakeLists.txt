cmake_minimum_required(VERSION 3.31.6)
project(ProjectInstaller)

set(CMAKE_CXX_STANDARD 26)

add_executable(ProjectInstaller main.cpp
        FileName.c
        Command.c)
