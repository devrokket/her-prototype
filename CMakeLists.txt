cmake_minimum_required(VERSION 3.23)
project(samantha)

set(CMAKE_CXX_STANDARD 14)

add_executable(samantha main.cpp UserInterface.cpp UserInterface.h Story.cpp Story.h Her.cpp Her.h User.cpp User.h Run.cpp Run.h)
