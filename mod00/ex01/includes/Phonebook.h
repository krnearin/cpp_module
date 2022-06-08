#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <iomanip>
#include "contact.h"

class Phonebook
{
private:
	Contact		contacts[8];
	static	int	ind;
	static	int	nbr;
public:
	void	ADD();
	void	SEARCH();
};

#endif