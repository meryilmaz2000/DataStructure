cmake_minimum_required(VERSION 3.26)
project(StackAndQueue)

set(CMAKE_CXX_STANDARD 17)

add_executable(StackAndQueue main.cpp
        ArrayBasedStack.cpp
        ArrayBasedStack.h
        Queue.cpp
        Queue.h
        Node.cpp
        Node.h)
