cmake_minimum_required(VERSION 3.26)
project(LinkedList)

set(CMAKE_CXX_STANDARD 17)

add_executable(LinkedList main.cpp
        Node.cpp
        Node.h
        LinkedBag.cpp
        LinkedBag.h)
