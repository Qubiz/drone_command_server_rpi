cmake_minimum_required(VERSION 3.7)
project(tppi)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread -g -O0")

set(LIB_DEPS djiosdk-core
        protobuf
        muduo_base
        muduo_net)

find_package(DJIOSDK REQUIRED)
find_package(Protobuf REQUIRED)

include_directories(${PROJECT_SOURCE_DIR})

FILE(GLOB proto_SOURCES proto/*.cc proto/*.h)
FILE(GLOB common_SOURCES common/*.cpp common/*.hpp)

add_executable(drone_command_server server.cpp
        ${proto_SOURCES}
        ${common_SOURCES})

target_link_libraries(drone_command_server ${LIB_DEPS})