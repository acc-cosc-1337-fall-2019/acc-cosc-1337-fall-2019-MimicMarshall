#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../../../homework/03_iteration/dna.h" //make directory

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test get_gc_content function") 
{
	REQUIRE(get_gc_content("AGCTATAG") == .375); //Include close parentheses
	REQUIRE(get_gc_content("CGCTATAG") == .50);
}
TEST_CASE("Test get_reverse_string function")
{
	REQUIRE(get_reverse_string("AGCTATAG") == "GATATCGA");
	REQUIRE(get_reverse_string("CGCTATAG") == "GATATCGC");
}
TEST_CASE("Test get_dna_complement function")
{
	REQUIRE(get_dna_complement("AAAACCCGGT") == "TTTTGGGCCA"); // change end values to reflect what is required, and not what is on blackboard
	REQUIRE(get_dna_complement("CCCGGAAAAT") == "GGGCCTTTTA");
}