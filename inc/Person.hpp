#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>

using namespace std;

struct Person
{
	string	firstName;
	string	phoneNumber;
	float	answer;
	string	name;

	bool	hasValidPhoneNumber(void);
	bool	hasValidNames(void);
};