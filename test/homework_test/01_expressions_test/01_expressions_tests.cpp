#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "expressions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify multip_numbers function") 
{
	REQUIRE(multip_numbers(2, 4) == 8);
	REQUIRE(multip_numbers(3, 5) == 15);
	REQUIRE(multip_numbers(10, 10) == 100);
}

