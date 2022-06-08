#include "../includes/Cat.h"

Cat::Cat()
{
	std::cout << "Cat: Default constructor called" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat: Copy constructor called" << std::endl;
	_brain = new Brain(*(other._brain));
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
	*_brain = *(other._brain);

	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat: Destructor called " << std::endl;
	delete _brain;
}