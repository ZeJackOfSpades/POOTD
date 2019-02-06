#include "../inc/Fraction.hpp"

string Fraction::display(void){
	string fraction = "";

	fraction += to_string(this->numerator);
	fraction += "/";
	fraction += to_string(this->denominator);

	return fraction;
}