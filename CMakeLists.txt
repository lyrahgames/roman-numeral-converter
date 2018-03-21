cmake_minimum_required(VERSION 3.9)
project(roman_numeral_converter VERSION 0.1.0 LANGUAGES CXX)

enable_testing()

add_subdirectory(cmake)
include(catch2-as-external-project)

add_library(roman_numeral roman_numeral.cc)
target_include_directories(roman_numeral PUBLIC .)

add_subdirectory(tests)