#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "while.h"
#include "value_ref.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test while loop sum of squares") 
{
	REQUIRE(sum_of_squares(4) == 30);
	REQUIRE(sum_of_squares(5) == 55);
}
TEST_CASE("Test value and references param")
{
	int v = 5;
	int r = 10;
	int c = 0;
	pass_by_val_and_ref(v, r, c);
	REQUIRE(v == 5);
	REQUIRE(r == 50);
}
