#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAnimal.h"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(WrongCat const &other);

	void		MakeSound(void) const;

	WrongCat	&operator=(WrongCat const &other);

	~WrongCat();
};

#endif
