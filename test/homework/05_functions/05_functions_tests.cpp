#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h"
#include<iostream>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test GC content function") {

	double result = get_gc_content("AGCTATAG");
	double percent = get_gc_content("CGCTATAG");

	REQUIRE(result == .375);
	REQUIRE(percent == .50);
	}

TEST_CASE("Test reverse string function"){

	string get_reverse_string(string dna);

	REQUIRE("AGCTATAG" == "GATATCGA");
	REQUIRE("CGCTATAG" == "GATATCGC");
}

TEST_CASE("Test string complement string function"){

	string get_dna_complement(string dna);

	REQUIRE("AAAACCCGGT" == "ACCGGGTTTT");
	REQUIRE("CCCGGAAAAT" == "ATTTTCCGGG");
}
