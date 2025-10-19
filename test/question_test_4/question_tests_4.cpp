#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("get_fahrenheit correctness")
{
	REQUIRE(get_fahrenheit(37.0) == Approx(98.6));
	REQUIRE(get_fahrenheit(25.0) == Approx(77.0));
	REQUIRE(get_fahrenheit(0.0)  == Approx(32.0));
}
