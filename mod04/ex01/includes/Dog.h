#ifndef DOG_H
# define DOG_H

# include "Animal.h"
# include "Brain.h"

class Dog : public Animal
{
private:
	Brain *_brain;
public:
	Dog();
	Dog(Dog const &other);

	void	MakeSound(void) const;

	Dog &operator=(Dog const &other);

	~Dog();
};


#endif
