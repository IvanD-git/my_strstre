cmake_minimum_required(VERSION 3.14)
project(BoyerMooreSearch C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Include directory
include_directories(include)

# Library
add_library(boyer_moore src/boyer_moore.c)

# Main executable
add_executable(main main.c)
target_link_libraries(main boyer_moore)

# Test executable
add_executable(test_boyer_moore tests/test_boyer_moore.c)
target_link_libraries(test_boyer_moore boyer_moore)

# Enable testing
enable_testing()
add_test(NAME BoyerMooreTests COMMAND test_boyer_moore)