#include "../inc/Fraction.hpp"

string Fraction::display(void){
	string fraction = "";

	fraction += to_string(this->numerator);
	fraction += "/";
	fraction += to_string(this->denominator);

	return fraction;
}

void Fraction::operator+(int i){
	int entierDenominateurConv	(0);
	int tmpNumerator			(0);
	int tmpDenominator			(0);
	int communDivisor			(1);

	//transform the integer in number which can be additionate with the fraction
	entierDenominateurConv	=	i * (this->denominator);
	(this->numerator) += entierDenominateurConv;

	tmpNumerator	=	(this->numerator);
	tmpDenominator	=	(this->denominator);

	//Euclid's algorithm (try to symplify the frac)
	while (tmpNumerator != tmpDenominator) {
    	if (tmpNumerator > tmpDenominator) {
        	tmpNumerator -= tmpDenominator;
        }else{
        	tmpDenominator -= tmpNumerator;
        }
    }

    communDivisor	= tmpDenominator;
    (this->numerator)	/=	communDivisor;
    (this->denominator)	/=	communDivisor;

}