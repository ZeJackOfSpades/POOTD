
#include "../inc/catch.hpp"
#include "../inc/Fraction.hpp"

Fraction fraction1;

TEST_CASE("Test display string ","[Fraction]"){
	fraction1.numerator 	=	3;
	fraction1.denominator	=	2;
	REQUIRE(fraction1.display() == "3/2");
}