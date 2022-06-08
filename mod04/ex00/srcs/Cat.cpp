#include "../includes/Cat.h"

Cat::Cat()
{
	std::cout << "Cat: Default constructor called" << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat: Copy constructor called" << std::endl;
}

void Cat::MakeSound() const
{
	std::cout << "Meow!" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat: Copy assignment operator called " << std::endl;
	if (this == &other)
		return *this;
	_type = other._type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat: Destructor called " << std::endl;
}