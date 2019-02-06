
#include "../inc/catch.hpp"
#include "../inc/Fraction.hpp"

Fraction fraction1;

TEST_CASE("Test display string ","[Fraction]"){
	fraction1.numerator 	=	3;
	fraction1.denominator	=	2;
	REQUIRE(fraction1.display() == "3/2");
}

TEST_CASE("Test addition with an integer ","[Fraction]"){
	fraction1.numerator 	=	3;
	fraction1.denominator	=	2;
	fraction1 + 2;

	REQUIRE(fraction1.display() == "7/2");
}
