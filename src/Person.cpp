#include "../inc/Person.hpp"
/* RAPPEL STRUCTURE Person
struct Person
{
	string	firstName;
	string	phoneNumber;
	float	answer;
	string	name;

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

bool Person::hasValidNames(void){
	bool validName 		=	true;
	bool validFirstName	=	true;

	for(unsigned int i = 0; i < (this->firstName).size() ; i++){
		if(!isalpha(this->firstName[i])){
			validName = false;
			cout<<"Le prenom n'est pas correct !"<<endl;
			
		}
	}
	for(unsigned int i = 0; i < (this->name).size() ; i++){
		if(!isalpha(this->name[i])){
			validFirstName = false;
			cout<<"Le name n'est pas correct !"<<endl;
		}
	}
	if((validName && validFirstName) == false){
		return false;
	}else{
		return true;
	}
}
int	Person::getNumberOfPositiveResponses(void){
	return this->answer.numerator;
}

int	Person::getNumberOfGivenResponses(void){
	return this->answer.denominator;
}