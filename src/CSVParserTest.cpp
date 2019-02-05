//#define CATCH_CONFIG_MAIN

#include "../inc/catch.hpp"
#include "../inc/CSVParser.hpp"

	CSVParser	sContact;
	bool resultInitWithFile;
TEST_CASE("Test Ouverture Fichier et calcul","[initWithFile]"){
	resultInitWithFile = sContact.initWithFile("OtherFiles/sondage.csv");
	REQUIRE( resultInitWithFile == true);
}
TEST_CASE("Check value numberOfRows only datas","[initWithFile]"){

	REQUIRE(sContact.numberOfRows == 20);
}

TEST_CASE("Check value numberOfColumns", "[initWithFile]"){

	REQUIRE(sContact.numberOfColumns == 4);
}

TEST_CASE("Check filepath of filepath", "[initWithFile]"){

	REQUIRE(sContact.filepath == "OtherFiles/sondage.csv");
}