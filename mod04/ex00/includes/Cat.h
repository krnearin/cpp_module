#ifndef CAT_H
# define CAT_H

# include "Animal.h"

class Cat : public Animal
{
public:
	Cat();
	Cat(Cat const &other);

	void	MakeSound(void) const;

	Cat &operator=(Cat const &other);

	~Cat();
};

#endif
