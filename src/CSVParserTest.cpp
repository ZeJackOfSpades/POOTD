#define CATCH_CONFIG_MAIN

#include "../inc/catch.hpp"
#include "../inc/CSVParser.hpp"

	CSVParser	sContact;
	bool resultInitWithFile;
TEST_CASE("Test Ouverture Fichier et calcul","[initWithFile]"){
	resultInitWithFile = sContact.initWithFile("/media/user/DATA/POLYTECH/LINUX_POLYTECH/"
								  "ITII4/POO/TD/TD4_Structure/OtherFiles/sondage.csv");
	REQUIRE( resultInitWithFile == true);
}
TEST_CASE("Check valeur numberOfRows","[initWithFile]"){
/*	resultInitWithFile = sContact.initWithFile("/media/user/DATA/POLYTECH/LINUX_POLYTECH/"
								  "ITII4/POO/TD/TD4_Structure/OtherFiles/sondage.csv");
	
	*/
	REQUIRE(sContact.numberOfRows == 21);
}