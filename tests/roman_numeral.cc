#include <doctest/doctest.h>

#include <roman_numeral.h>

TEST_CASE("The roman numeral converter") {
  SUBCASE("converts 1 to I.") { REQUIRE(roman_numeral(1) == "I"); }
  SUBCASE("converts 2 to II.") { REQUIRE(roman_numeral(2) == "II"); }
  SUBCASE("converts 5 to V.") { REQUIRE(roman_numeral(5) == "V"); }
  SUBCASE("converts 8 to VIII.") { REQUIRE(roman_numeral(8) == "VIII"); }
  SUBCASE("converts 4 to IV.") { REQUIRE(roman_numeral(4) == "IV"); }
  SUBCASE("converts 10 to X.") { REQUIRE(roman_numeral(10) == "X"); }
  SUBCASE("converts 9 to IX.") { REQUIRE(roman_numeral(9) == "IX"); }
  SUBCASE("converts 50, 100, 500 and 100 to the appropriate symbols.") {
    REQUIRE(roman_numeral(50) == "L");
    REQUIRE(roman_numeral(100) == "C");
    REQUIRE(roman_numeral(500) == "D");
    REQUIRE(roman_numeral(1000) == "M");
  }
  SUBCASE("converts 40 to XL.") { REQUIRE(roman_numeral(40) == "XL"); }
  SUBCASE("converts examples correct.") {
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