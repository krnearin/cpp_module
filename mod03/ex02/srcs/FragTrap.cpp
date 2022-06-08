#include "../includes/FragTrap.h"

FragTrap::FragTrap()
{
	std::cout << "FragTrap: Default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name)
{
	std::cout << "Custom constructor of FragTrap " << name << std::endl;
	_Name = name;
	_hitPoint = 100;
	_energyPoint = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &cp)
{
	std::cout << "FragTrap: Copy constructor" << std::endl;
	_Name = cp._Name + "copy_constructor";
	_hitPoint = cp._hitPoint;
	_energyPoint = cp._energyPoint;
	_attackDamage = cp._attackDamage;
}

FragTrap &FragTrap::operator=(const FragTrap &cp)
{
	if (this != &cp)
	{
		_Name = cp._Name + "_copy";
		_hitPoint = cp._hitPoint;
		_energyPoint = cp._energyPoint;
		_attackDamage = cp._attackDamage;
	}
	std::cout << "FragTrap: Copy assignment operator called " << std::endl;
	return (*this);
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _Name << ": High five!" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap:  Destructor called " << _Name << std::endl;
}