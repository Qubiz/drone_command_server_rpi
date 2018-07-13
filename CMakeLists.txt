cmake_minimum_required(VERSION 3.10)

project(drone_command_server)

set(CMAKE_CXX_STANDARD 11)

set(LINK_DIRS "/usr/local/lib/")
set(LIB_DEPS djiosdk-core
        evpp)

find_package(DJIOSDK REQUIRED)

add_executable(drone_command_server main.cpp)

link_directories(LINK_DIRS)

target_link_libraries(drone_command_server ${LIB_DEPS})