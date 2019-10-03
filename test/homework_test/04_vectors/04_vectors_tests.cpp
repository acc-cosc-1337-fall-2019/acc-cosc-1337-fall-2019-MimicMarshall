#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../../../homework/04_vectors/vectors.h"

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}
TEST_CASE("Tests get_max_from_vector")
{
	REQUIRE(get_max_from_vector({3, 8, 1, 99, 1000}) == 1000);
	REQUIRE(get_max_from_vector({15, 12, 11, 99, 88}) == 99);
	REQUIRE(get_max_from_vector({150, 120, 11, 990, 88888}) == 88888);

}
TEST_CASE("Tests is_prime")
{
	REQUIRE(is_prime(2) == true);
	REQUIRE(is_prime(4) == false);
	REQUIRE(is_prime(43) == true);
	REQUIRE(is_prime(44) == false);
}
TEST_CASE("Tests vector_of_prime")
{
	vector<int> vec1 = { 2, 3, 5, 7 };
	vector<int> vec2 = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
	REQUIRE(vector_of_prime(10) == vec1);
	REQUIRE(vector_of_prime(50) == vec2);

}

