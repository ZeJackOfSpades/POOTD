#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>

#include "../inc/Fraction.hpp"

using namespace std;

struct Person
{
	string		firstName;
	string		phoneNumber;
	Fraction	answer;
	string		name;

	bool	hasValidPhoneNumber(void);
	bool	hasValidNames(void);
	int		getNumberOfPositiveResponses(void);
	int		getNumberOfGivenResponses(void);
	
};