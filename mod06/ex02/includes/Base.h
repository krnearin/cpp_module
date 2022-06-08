#ifndef BASE_H
#define BASE_H

#include <iostream>

class Base
{
public:
	virtual ~Base();
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif