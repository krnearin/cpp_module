#ifndef CAT_H
# define CAT_H

# include "Animal.h"
# include "Brain.h"

class Cat : public Animal
{
private:
	Brain *_brain;
public:
	Cat();
	Cat(Cat const &other);

	void	MakeSound(void) const;

	Cat &operator=(Cat const &other);

	~Cat();
};

#endif
