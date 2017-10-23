cmake_minimum_required(VERSION 2.8)

project(LeetCode)

message(${CMAKE_SOURCE_DIR})

include_directories(${CMAKE_SOURCE_DIR}/includes)

file(GLOB SOURCE_FILES ${CMAKE_SOURCE_DIR}/sources/*.cpp "main.cpp")

add_executable(${PROJECT_NAME} ${SOURCE_FILES})
