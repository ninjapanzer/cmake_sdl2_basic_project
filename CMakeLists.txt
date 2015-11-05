cmake_minimum_required(VERSION 3.3)
project(first_one)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${first_one_SOURCE_DIR}/cmake")
set(SOURCE_FILES main.cpp)

add_executable(first_one ${SOURCE_FILES})


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIR})

target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARY})
