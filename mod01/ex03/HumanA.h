#ifndef HUMANA_H
#define HUMANA_H

#include <iostream>
#include "Weapon.h"

class HumanA
{
private:
	Weapon &weapon;
	std::string name;
public:
	HumanA(std::string _name, Weapon &weapon);
	~HumanA();
	void attack();
};

#endif
