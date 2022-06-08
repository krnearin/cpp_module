#include "../includes/WrongAnimal.h"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal: Default constructor called" << std::endl;
	_type = "Wrong Animal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "WrongAnimal: Copy constructor called" << std::endl;
	_type = other._type;
}

const std::string &WrongAnimal::getType() const
{
	return _type;
}

void WrongAnimal::MakeSound() const
{
	std::cout << "Wrong animal sound" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "WrongAnimal: Copy assignment operator called " << std::endl;
	if (this == &other)
		return *this;
	_type = other._type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: Destructor called " << std::endl;
}