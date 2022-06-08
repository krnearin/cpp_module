#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>
# include <string>

class Animal
{
protected:
	std::string _type;
public:
	Animal();
	Animal(Animal const &other);

	std::string const	&getType(void) const;
	virtual void		MakeSound(void) const = 0;

	Animal				&operator=(Animal const &other);

	virtual ~Animal() = 0;
};


#endif
