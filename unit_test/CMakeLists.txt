cmake_minimum_required(VERSION 3.5)
project(test_libft)

include_directories(lib/gtest-1.7.0/include)
add_subdirectory(lib/gtest-1.7.0)

set(SRCS
    bit_tests/basic_check_bit.cpp
    is_tests/basic_check_is.cpp)

add_executable(runBasicTest ${SRCS})

target_link_libraries(runBasicTest ft)
target_link_libraries(runBasicTest gtest gtest_main)