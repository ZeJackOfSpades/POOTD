
#include "../inc/catch.hpp"
#include "../inc/Fraction.hpp"

Fraction fraction1;
Fraction fraction2;
bool resultTestCompareFrac;

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

TEST_CASE("Test operator> ","[Fraction]"){
	fraction1.numerator 	=	1;
	fraction1.denominator	=	36;
	fraction2.numerator		=	4;
	fraction2.denominator	=	62;
	
	resultTestCompareFrac = fraction1 > fraction2;

	REQUIRE(resultTestCompareFrac == false);
}

TEST_CASE("Test operator< ","[Fraction]"){
	fraction1.numerator 	=	1;
	fraction1.denominator	=	36;
	fraction2.numerator		=	4;
	fraction2.denominator	=	62;
	
	resultTestCompareFrac	=	fraction1 < fraction2;
	REQUIRE(resultTestCompareFrac == true);
}
