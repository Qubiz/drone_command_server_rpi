cmake_minimum_required(VERSION 3.7)

project(drone_command_server)

set(CMAKE_CXX_STANDARD 11)

set(LIB_DEPS djiosdk-core evpp protobuf)

find_package(DJIOSDK REQUIRED)

include_directories(${PROJECT_SOURCE_DIR})

FILE(GLOB proto_SOURCES proto/*.cc proto/*.h)
FILE(GLOB server_SOURCES server/*.cpp server/*.hpp)
FILE(GLOB common_SOURCES common/*.cpp common/*.hpp)

link_directories(LINK_DIRS)

add_executable(drone_command_server ${server_SOURCES} ${common_SOURCES} ${proto_SOURCES})
target_link_libraries(drone_command_server ${LIB_DEPS})