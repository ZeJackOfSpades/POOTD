#include "../inc/Person.hpp"
/* RAPPEL STRUCTURE Person
struct Person
{
	string	firstName;
	string	phoneNumber;
	float	answer;
	string	nom;

	bool	hasValidPhoneNumber(void);

};
*/
bool Person::hasValidPhoneNumber(void){
	for(unsigned int i = 0; i< (this->phoneNumber).size() ; i++){
		if(isalpha(this->phoneNumber[i])){
			cout<<"N'est pas un numero"<<endl;
			return false;
		}
	}
	if((this->phoneNumber).size() != 10){
		cout<<"Taille du numéro incorrect !"<<endl;

		return false;
	}
	if(this->phoneNumber[0] != '0'){
		cout<<"Manque un 0 en début du numero"<<endl;
		return false;
	}
	cout<<"OK"<<endl;
	return true;
}