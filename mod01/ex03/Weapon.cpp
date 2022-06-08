#include "Weapon.h"

Weapon::Weapon(std::string _type): type(_type)
{
}

Weapon::~Weapon()
{}

Weapon::Weapon()
{}

const std::string &Weapon::getType()
{
	const std::string &ret = this->type;
	return (ret);
}

void Weapon::setType(std::string Type)
{
	this->type = Type;
}