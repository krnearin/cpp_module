#include "../includes/Brain.h"

Brain::Brain()
{
	std::cout << "Brain: Default constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain: Copy constructor called" << std::endl;
	if (this == &other)
		return ;

	for (size_t i = 0; i < other._ideas->length(); i++)
		_ideas[i].assign(other._ideas[i]);
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "Brain: Copy assignment operator called " << std::endl;
	if (this == &other)
		return *this;

	for (size_t i = 0; i < other._ideas->length(); i++)
		_ideas[i].assign(other._ideas[i]);

	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain: Destructor called " << std::endl;
}