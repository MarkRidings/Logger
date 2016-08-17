cmake_minimum_required(VERSION 3.5)
project(Logger)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall -Wextra -O3 -std=c11")

set(SOURCE_FILES src/logger.c src/log_test.c)
add_executable(Logger ${SOURCE_FILES})
