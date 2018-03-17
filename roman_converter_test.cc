#include <catch2/catch.hpp>

#include <string>

std::string roman_numeral(int number) {
  std::string result = "";

  if (number >= 5) {
    result += "V";
    number -= 5;
  }

  if (number >= 4) {
    result += "IV";
    number -= 4;
  }

  result += std::string(number, 'I');
  return result;
}

TEST_CASE("The roman numeral converter", "[roman][converter]") {
  SECTION("converts 1 to I.") { REQUIRE(roman_numeral(1) == "I"); }
  SECTION("converts 2 to II.") { REQUIRE(roman_numeral(2) == "II"); }
  SECTION("converts 5 to V.") { REQUIRE(roman_numeral(5) == "V"); }
  SECTION("converts 8 to VIII.") { REQUIRE(roman_numeral(8) == "VIII"); }
  SECTION("converts 4 to IV.") { REQUIRE(roman_numeral(4) == "IV"); }
}