cmake_minimum_required(VERSION 3.10)

# set the project name
project(HelloWorld)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)

# add the executable
add_executable(HelloWorld c_oop_print.c print_mode.c print_mode_color.c)
