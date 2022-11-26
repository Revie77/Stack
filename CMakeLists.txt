cmake_minimum_required(VERSION 3.22)
project(Stack C)

set(CMAKE_C_STANDARD 11)

add_executable(Stack main.c Stack.c Stack.h 1.cpp)
