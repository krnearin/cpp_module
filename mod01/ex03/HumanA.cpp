#include "HumanA.h"

HumanA::HumanA(std::string _name, Weapon &weapon): weapon(weapon), name(_name)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon.getType()
	<< std::endl;
}