cmake_minimum_required(VERSION 3.21)
project(NoVsync)

add_library(${PROJECT_NAME} SHARED
    src/main.cpp
)

set_target_properties(${PROJECT_NAME} PROPERTIES
    CXX_STANDARD 20
)
