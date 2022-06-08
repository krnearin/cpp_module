#include "../includes/Animal.h"

Animal::Animal()
{
	std::cout << "Animal: Default constructor called" << std::endl;
	_type = "Animal";
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal: Copy constructor called" << std::endl;
	_type = other._type;
}

const std::string &Animal::getType() const
{
	return _type;
}

Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Animal: Copy assignment operator called " << std::endl;
	if (this == &other)
		return *this;
	_type = other._type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal: Destructor called " << std::endl;
}