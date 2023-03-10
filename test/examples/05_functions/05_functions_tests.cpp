#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "default.h"

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);}


TEST_CASE("Verify get gross pay default parameters")
{
	REQUIRE(get_gross_pay(40) == 800);
	REQUIRE(get_gross_pay(40, 10) == 400);
	REQUIRE(get_gross_pay == 600);}


TEST_CASE("Verify overloaded get gross pay:"){

	REQUIRE(get_gross_pay(40, 10, 100) == 401);}

