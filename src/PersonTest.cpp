#define CATCH_CONFIG_MAIN

#include "../inc/catch.hpp"
#include "../inc/Person.hpp"

Person	person1;


TEST_CASE("Test phone number (size)","[hasValidPhoneNumber]"){
	person1.phoneNumber = "0607080910";
	cout<<person1.phoneNumber<<endl;
	REQUIRE(person1.hasValidPhoneNumber() == true);
}
TEST_CASE("Test phone number has not the 0 at the beginning","[hasValidPhoneNumber]"){
	person1.phoneNumber = "1607080910";
	cout<<person1.phoneNumber<<endl;
	REQUIRE(person1.hasValidPhoneNumber() == false);
}
TEST_CASE("Test phone number has not the right size","[hasValidPhoneNumber]"){
	person1.phoneNumber = "060708091";
	cout<<person1.phoneNumber<<endl;
	REQUIRE(person1.hasValidPhoneNumber() == false);
}

TEST_CASE("This is not a phone number","[hasValidPhoneNumber]"){
	person1.phoneNumber = "060708a910";
	cout<<person1.phoneNumber<<endl;
	REQUIRE(person1.hasValidPhoneNumber() == false);
}

TEST_CASE("The name is correct","[Person]"){
	person1.name 		=	"Monnier";
	person1.firstName	=	"Jacques";
	REQUIRE(person1.hasValidNames() == true);
}

TEST_CASE("The Name is not correct","[Person]"){
	person1.name 		=	"M0nnier";
	person1.firstName	=	"Jacques";
	REQUIRE(person1.hasValidNames() == false);
}
TEST_CASE("The firstName is not correct","[Person]"){
	person1.name 		=	"Monnier";
	person1.firstName	=	"J@cques";
	REQUIRE(person1.hasValidNames() == false);
}
TEST_CASE("The firstName and name are not correct","[Person]"){
	person1.name 		=	"M0nnier";
	person1.firstName	=	"J@cques";
	REQUIRE(person1.hasValidNames() == false);
}

TEST_CASE("Test getNumberOfGivenResponses() and getNumberOfPositiveResponses()","[Person]"){
	person1.answer.numerator	=	1;
	person1.answer.denominator	=	36;
	REQUIRE(person1.getNumberOfGivenResponses() 	==	36);
	REQUIRE(person1.getNumberOfPositiveResponses()	==	1);
}