cmake_minimum_required(VERSION 3.9)
project(roman_numeral_converter VERSION 0.1.0 LANGUAGES CXX)

enable_testing()

add_subdirectory(cmake)
include(catch2-as-external-project)

add_executable(roman_converter_test catch_main.cc roman_converter_test.cc)
target_link_libraries(roman_converter_test PRIVATE catch2::catch)
add_test(roman_converter_test roman_converter_test)