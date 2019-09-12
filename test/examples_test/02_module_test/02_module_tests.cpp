#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"
#include "if_else.h"
#include "switch.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test is_even function") {
	REQUIRE(is_even(2) == true);
	REQUIRE(is_even(5) == false);
	REQUIRE(is_even(12) == true);
	REQUIRE(is_even(33) == false);
}
TEST_CASE("Test get_generation function")
{
	REQUIRE(get_generation(2000) == "Centenial");
	REQUIRE(get_generation(1977) == "Millenial");
	REQUIRE(get_generation(1969) == "Generation X");
	REQUIRE(get_generation(1950) == "Baby Boomer");
	REQUIRE(get_generation(2019) == "Invalid Year");
}
TEST_CASE("Test switch funtion")
{
	REQUIRE(menu(1) == "Option 1");
	REQUIRE(menu(2) == "Option 2");
	REQUIRE(menu(3) == "Option 3");
	REQUIRE(menu(4) == "Option 4");
	REQUIRE(menu(69) == "Invalid Option");
}


