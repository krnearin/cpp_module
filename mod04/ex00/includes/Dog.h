#ifndef DOG_H
# define DOG_H

# include "Animal.h"

class Dog : public Animal
{
public:
	Dog();
	Dog(Dog const &other);

	void	MakeSound(void) const;

	Dog &operator=(Dog const &other);

	~Dog();
};


#endif
