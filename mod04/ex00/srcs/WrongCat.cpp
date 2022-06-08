#include "../includes/WrongCat.h"

WrongCat::WrongCat()
{
	std::cout << "WrongCat: Default constructor called" << std::endl;
	_type = "Wrong Cat";
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	std::cout << "WrongCat: Copy constructor called" << std::endl;
}

void WrongCat::MakeSound() const
{
	std::cout << "Meow!" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat: Copy assignment operator called " << std::endl;
	if (this == &other)
		return *this;

	_type = other._type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: Destructor called " << std::endl;
}