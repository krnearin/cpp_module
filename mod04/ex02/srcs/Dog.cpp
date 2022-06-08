#include "../includes/Dog.h"

Dog::Dog()
{
	std::cout << "Dog: Default constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "Dog: Copy constructor called" << std::endl;
	_brain = new Brain(*(other._brain));
}

void Dog::MakeSound() const
{
	std::cout << "Wof" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog: Copy assignment operator called " << std::endl;
	if (this == &other)
		return *this;

	_type = other._type;
	*_brain = *(other._brain);

	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog: Destructor called " << std::endl;
	delete _brain;
}
