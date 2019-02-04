#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct CSVParser
{	
	CSVParser() : numberOfColumns(1), numberOfRows(0){} //default values for attributes
	int numberOfColumns;
	int numberOfRows;
	string header[0];

	string filepath;

	bool initWithFile(string path);

};