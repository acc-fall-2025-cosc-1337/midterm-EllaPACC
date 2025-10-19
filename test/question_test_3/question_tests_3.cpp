#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("roll_die range and repeated calls")
{
	// Call roll_die at least 10 times and verify values are in [1,6]
	for (int i = 0; i < 20; ++i) {
		int v = roll_die();
		REQUIRE(v >= 1);
		REQUIRE(v <= 6);
	}
}
