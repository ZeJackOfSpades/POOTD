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
	while (tmpNumerator != tmpDenominator){
    	if (tmpNumerator > tmpDenominator){
        	tmpNumerator -= tmpDenominator;
        }else{
        	tmpDenominator -= tmpNumerator;
        }
    }
    //here tmpDenominator is equal to the most commun Divisor after the while
    communDivisor	= tmpDenominator;
    (this->numerator)	/=	communDivisor;
    (this->denominator)	/=	communDivisor;

}

bool Fraction::operator<(const Fraction f){
	int 	tmpNumeratorLeft	=	(this->numerator);
	int 	tmpDenominatorLeft	=	(this->denominator);
	int 	tmpNumeratorRight	=	(f.numerator);
	int 	tmpDenominatorRight	=	(f.denominator);

	float	resultFracLeft	=	0;
	float	resultFracRight	=	0;

	if (tmpDenominatorLeft == 0 or tmpDenominatorRight == 0){
		cout<<"Division par 0 !"<<endl;
		return -1;
	}
	resultFracLeft	=	(float)tmpNumeratorLeft / (float)tmpDenominatorLeft;
	cout<<"Frac left : "<<resultFracLeft<<endl;
	resultFracRight	=	(float)tmpNumeratorRight / (float)tmpDenominatorRight;
	cout<<"Frac Right : "<<resultFracRight<<endl;

	if(resultFracLeft < resultFracRight)
		return true;
	else
		return false;
}
bool Fraction::operator>(const Fraction f){
	int 	tmpNumeratorLeft	=	(this->numerator);
	int 	tmpDenominatorLeft	=	(this->denominator);
	int 	tmpNumeratorRight	=	(f.numerator);
	int 	tmpDenominatorRight	=	(f.denominator);

	float	resultFracLeft	=	0;
	float	resultFracRight	=	0;

	if (tmpDenominatorLeft == 0 or tmpDenominatorRight == 0){
		cout<<"Division par 0 !"<<endl;
		return -1;
	}
	resultFracLeft	=	(float)tmpNumeratorLeft / (float)tmpDenominatorLeft;
	cout<<"Frac left : "<<resultFracLeft<<endl;
	resultFracRight	=	(float)tmpNumeratorRight / (float)tmpDenominatorRight;
	cout<<"Frac Right : "<<resultFracRight<<endl;

	if(resultFracLeft > resultFracRight)
		return true;
	else
		return false;
}