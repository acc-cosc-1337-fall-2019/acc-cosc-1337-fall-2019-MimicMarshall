#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vector.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test Vector class copy with stack variables")
{
	Vector v(5);
	Vector v2 = v;

	REQUIRE(v.Size() == v2.Size());
}

TEST_CASE("Test vector class copy w/ heap(dynamic) variables")
{
	Vector v(5);
	Vector v2 = v;
	v[1] = 5;

	REQUIRE(v[1] != v2[1]);
}

TEST_CASE("Test vector class copy w/ 2 instances of Vector")
{
	Vector v(3);
	Vector v2(2);
	v2 = v;
	v[1] = 1;

	REQUIRE(v[1] != v2[1]);
}

Vector get_vector()
{
	Vector v(3);

	return v;
}

TEST_CASE("Test return Vector by value")
{
	Vector v(1);
	v = get_vector();

	REQUIRE(v.Size() == 3);
}

TEST_CASE("Test reserve function new allocation")
{
	Vector v;
	REQUIRE(v.Capacity() == 0);

	v.Reserve(8);

	REQUIRE(v.Capacity() == 8);
}

TEST_CASE("Test resize function new size")
{
	Vector v;
	REQUIRE(v.Capacity() == 0);
	v.Resize(10);

	REQUIRE(v.Capacity() == 10);
}

TEST_CASE("Test push back w/ default constructor")
{
	Vector v;
	REQUIRE(v.Size() == 0);

	v.Push_Back(3);
	REQUIRE(v.Size() == 1);
	REQUIRE(v[0] == 3);

}
