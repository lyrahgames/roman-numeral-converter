#include <catch2/catch.hpp>

#include <roman_numeral.h>

TEST_CASE("The roman numeral converter", "[roman][converter]") {
  SECTION("converts 1 to I.") { REQUIRE(roman_numeral(1) == "I"); }
  SECTION("converts 2 to II.") { REQUIRE(roman_numeral(2) == "II"); }
  SECTION("converts 5 to V.") { REQUIRE(roman_numeral(5) == "V"); }
  SECTION("converts 8 to VIII.") { REQUIRE(roman_numeral(8) == "VIII"); }
  SECTION("converts 4 to IV.") { REQUIRE(roman_numeral(4) == "IV"); }
  SECTION("converts 10 to X.") { REQUIRE(roman_numeral(10) == "X"); }
  SECTION("converts 9 to IX.") { REQUIRE(roman_numeral(9) == "IX"); }
  SECTION("converts 50, 100, 500 and 100 to the appropriate symbols.") {
    REQUIRE(roman_numeral(50) == "L");
    REQUIRE(roman_numeral(100) == "C");
    REQUIRE(roman_numeral(500) == "D");
    REQUIRE(roman_numeral(1000) == "M");
  }
  SECTION("converts 40 to XL.") { REQUIRE(roman_numeral(40) == "XL"); }
  SECTION("converts examples correct.") {
    REQUIRE(roman_numeral(39) == "XXXIX");
    REQUIRE(roman_numeral(246) == "CCXLVI");
    REQUIRE(roman_numeral(207) == "CCVII");
    REQUIRE(roman_numeral(1066) == "MLXVI");
    REQUIRE(roman_numeral(1776) == "MDCCLXXVI");
    REQUIRE(roman_numeral(1954) == "MCMLIV");
    REQUIRE(roman_numeral(1990) == "MCMXC");
    REQUIRE(roman_numeral(2014) == "MMXIV");
  }
}