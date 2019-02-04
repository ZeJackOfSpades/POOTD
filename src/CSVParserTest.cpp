#define CATCH_CONFIG_MAIN

#include "../inc/catch.hpp"
#include "../inc/CSVParser.hpp"

	CSVParser	sContact;
	bool resultInitWithFile;
TEST_CASE("Test Ouverture Fichier et calcul","[initWithFile]"){
	resultInitWithFile = sContact.initWithFile("OtherFiles/sondage.csv");
	REQUIRE( resultInitWithFile == true);
}
TEST_CASE("Check valeur numberOfRows","[initWithFile]"){

	REQUIRE(sContact.numberOfRows == 21);
}

TEST_CASE("Check valeur numberOfColumns", "[initWithFile]"){

	REQUIRE(sContact.numberOfColumns == 4);
}