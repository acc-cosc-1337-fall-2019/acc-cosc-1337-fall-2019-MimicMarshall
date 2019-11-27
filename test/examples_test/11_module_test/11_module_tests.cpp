#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "ref_pointers.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test reference and pointers parameters")
{
	int num1 = 10;
	int num2 = 20;

	int& num_ref = num1;
	int* num_ptr = &num2;
	ref(num_ref, num_ptr);
	REQUIRE(num1 == 500);
	REQUIRE(num2 == 1000);
}

