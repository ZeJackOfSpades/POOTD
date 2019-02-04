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
	bool lockFirstLine	=	false;

	this->filepath	=	cheminFichier;

	ifstream fichier (cheminFichier, std::ios::in);
	if (!fichier)
	{
		cout<<"Erreur d'ouverture du fichier"<<endl;
		return false; 
	}
	while(fichier.get(c)){
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

/*
while ((c = fgetc (fichier)) != EOF) {
	if(c=='\n'){
	    *yMap=*yMap+1;
	    *xtot=*xMap;//pour eviter de compter le caractère \n
	    *xMap=0;
	}else if (c=='0' || c=='1' || c=='E' || c=='S'){
	    map[*yMap][*xMap]=c;
	    *xMap=*xMap+1;
	}else{
	    continue;
	}
}
*/