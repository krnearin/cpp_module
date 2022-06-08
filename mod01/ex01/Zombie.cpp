#include "Zombie.h"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string _name)
{
	this->name = _name;
}

void Zombie::setName(std::string Name)
{
	this->name = Name;
}

void Zombie::announce()
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << " destroyed" << std::endl;
}
