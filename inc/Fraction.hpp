#include <iostream>
#include <string>

using namespace std;

struct Fraction{
	int	numerator;
	int	denominator;

	string	display(void);

	void	operator+(int i);
	bool 	operator<(const Fraction f);
	bool	operator>(const Fraction f);	
};