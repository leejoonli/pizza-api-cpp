cmake_minimum_required(VERSION 2.8)

set(PROJECT_NAME Pizza)
project(${PROJECT_NAME})

include($ENV{DEVKIT_LOCATION}/cmake/pluginEntry.cmake)

set(SOURCE_FILES
    pizza.cpp
    pizza.h
)

set(LIBRARIES
    OpenMaya Foundation
)

build_plugin()