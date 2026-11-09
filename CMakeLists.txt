cmake_minimum_required(VERSION 3.15)

# Name of your project
project(firstProject VERSION 1.0 LANGUAGES CXX)

# Enforce your C++17 standard requirements
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Bundle all your source files together into a single target executable
add_executable(mainApp 
    vsCodeLinkTest.cpp
    useHeader.cpp
    header.h
)
