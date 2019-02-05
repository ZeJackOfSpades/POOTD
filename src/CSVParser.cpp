#include "../inc/CSVParser.hpp"
/* RAPPEL structure :
struct CSVParser
{
	int numberOfColumns;
	int numberOfRows;
	string header[0];

	string filepath;

	bool initWithFile(string path);

};

*/
bool CSVParser::initWithFile(string cheminFichier){
	char c;
	bool lockFirstLine	= false; //used for count the number of colmns on the header only
	//bool lockHeader 	= false;
	//unsigned int i 		= 1;

	this->filepath = cheminFichier;

	ifstream fichier (cheminFichier, std::ios::in);
	if (!fichier)
	{
		cout<<"Erreur d'ouverture du fichier"<<endl;
		return false; 
	}
	while(fichier.get(c)){
		
		/*if (c == '\n' && lockHeader == false){
			lockHeader = true;
		}
		*/
		if(c == '\n'){
			lockFirstLine = true;
			this->numberOfRows += 1;
			cout<<c<<endl;
			cout<<"numberOfRows = "<<numberOfRows<<endl;
		}else if(c== ',' && lockFirstLine == false){
			this->numberOfColumns += 1;
		}
	}//end of while
	fichier.close();
	return true;
}
