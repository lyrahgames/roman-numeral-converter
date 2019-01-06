find_package(doctest REQUIRED)

add_executable(roman_numeral_test
  doctest_main.cc
  roman_numeral.cc
)

target_link_libraries(roman_numeral_test
  PRIVATE
    doctest::doctest
    roman_numeral::roman_numeral
)

add_test(roman_numeral_test roman_numeral_test)