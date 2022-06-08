#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <string>
# include <iostream>

class WrongAnimal
{
protected:
	std::string _type;
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const &other);

	std::string const	&getType(void) const;
	void				MakeSound(void) const;

	WrongAnimal			&operator=(WrongAnimal const &other);

	~WrongAnimal();
};


#endif
