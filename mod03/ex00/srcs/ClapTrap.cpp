#include "../includes/ClapTrap.h"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	_Name = std::string().empty();
	_hitPoint = 10;
	_energyPoint = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &cp)
{
	std::cout << "Copy constructor called" << std::endl;
	_Name = cp._Name + "_copyC";
	_hitPoint = cp._hitPoint;
	_energyPoint = cp._energyPoint;
	_attackDamage = cp._attackDamage;
}

ClapTrap::ClapTrap(const std::string &name)
{
	std::cout << "This is a constructor of " << name << std::endl;
	_Name = name;
	_hitPoint = 10;
	_energyPoint = 10;
	_attackDamage = 0;
}

bool ClapTrap::CheckLife() const
{
	if (_hitPoint <= 0)
	{
		std::cout << "ClapTrap " << _Name << ": dided" << std::endl;
		return false;
	}
	if (_energyPoint == 0)
	{
		std::cout << "ClapTrap " << _Name << ": energy points 0" << std::endl;
		return false;
	}
	return true;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &cp)
{
	if (this != &cp)
	{
		_Name = cp._Name + "_copy";
		_hitPoint = cp._hitPoint;
		_energyPoint = cp._energyPoint;
		_attackDamage = cp._attackDamage;
	}
	std::cout << "ClapTrap: Copy assignment operator called " << std::endl;
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (!CheckLife())
		return ;
	_energyPoint--;
		std::cout << "ClapTrap " << this->_Name << " attacks " << target << ""
																			", "
			"causing " << this->_attackDamage << " points of damage!" <<
			std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoint == 0)
	{
		std::cout << "ClapTrap " << _Name
				  << " is already dead!" << std::endl;
		return ;
	}

	std::cout << "ClapTrap " << this->_Name << " take damage " << amount
			  << ", " << this->_hitPoint << " hit point" << std::endl;

	if (_hitPoint - amount > 0)
		_hitPoint -= amount;
	else
	{
		std::cout << "ClapTrap " << _Name
				  << " is now dead!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!CheckLife())
		return ;

	std::cout << "ClapTrap " << this->_Name << " be repaired " << amount
			  << " , " << this->_hitPoint << " hit point" << std::endl;
	_energyPoint--;
	_hitPoint += amount;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: Destructor called " << _Name << std::endl;
}