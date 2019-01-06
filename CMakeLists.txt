cmake_minimum_required(VERSION 3.9)
project(roman_numeral_converter VERSION 0.1.0 LANGUAGES CXX)

enable_testing()

add_library(roman_numeral roman_numeral.cc)
target_include_directories(roman_numeral PUBLIC .)
target_compile_features(roman_numeral PUBLIC cxx_std_14)
add_library(roman_numeral::roman_numeral ALIAS roman_numeral)

add_subdirectory(tests)