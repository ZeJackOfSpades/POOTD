#include <iostream>
#include <string>
#include <fstream>



using namespace std;

struct CSVParser
{	
	CSVParser() : numberOfColumns(1), numberOfRows(-1){} //default values for attributes
	int numberOfColumns;
	int numberOfRows;
	string header[1];
	//std::vector<std::string> header;
	string filepath;

	bool initWithFile(string path);

};