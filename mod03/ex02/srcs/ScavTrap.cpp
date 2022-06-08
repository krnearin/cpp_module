#include "../includes/ScavTrap.h"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap: Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string const &name)
{
	std::cout << "Custom constructor of ScavTrap " << name << std::endl;
	_Name = name;
	_hitPoint = 100;
	_energyPoint = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &cp)
{
	std::cout << "ScavTrap: Copy constructor called" << std::endl;
	_Name = cp._Name + "_copyC";
	_hitPoint = cp._hitPoint;
	_energyPoint = cp._energyPoint;
	_attackDamage = cp._attackDamage;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &cp)
{
	if (this != &cp)
	{
		_Name = cp._Name + "_copy";
		_hitPoint = cp._hitPoint;
		_energyPoint = cp._energyPoint;
		_attackDamage = cp._attackDamage;
	}
	std::cout << "ScavTrap: Copy assignment operator called " << std::endl;
	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	if (!CheckLife())
		return ;
	std::cout << "ScavTrap " << this->_Name << " attacks " << target << " , "
																		"causing " << this->_attackDamage << " points of damage!" << std::endl;
	_energyPoint--;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _Name << ": is now in Gate keeper mode"
			  << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: Destructor called " << _Name << std::endl;
}