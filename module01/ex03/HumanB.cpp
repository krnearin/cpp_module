#include "HumanB.h"

HumanB::HumanB(std::string _name): name(_name)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon->getType()
			  << std::endl;
}

void HumanB::setWeapon(Weapon &wpn)
{
	this->weapon = &wpn;
}