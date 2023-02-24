#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test vector val, ref, and const params")
{
	vector<int> n1 {0, 1, 2};
	vector<int> n2 {0, 1, 2};
	vector<int> n3 {0v, 1, 2};

	vector<int> n1_expected {0, 1, 2};
	vector<int> n2-expected {-100, 1, 2};
	vector<int> n3-expected {0, 1, 2};

	vector_val_ref_params(n1, n2, n3);

	REQUIRE(n1 == n1_expected);
	REQUIRE(n2 == n2_expected);
	REQUIRE(n3 == n3_expected);



}