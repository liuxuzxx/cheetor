cmake_minimum_required(VERSION 3.16)
project(cheetor)

set(CMAKE_CXX_STANDARD 20)

add_executable(cheetor main.cpp mysql/bitmap.cpp mysql/bitmap.h)