#ifndef BRAIN_H
# define BRAIN_H

# include <string>
# include <iostream>

class Brain
{
private:
	std::string _ideas[100];
public:
	Brain();
	Brain(Brain const &other);

	Brain &operator=(Brain const &other);

	~Brain();
};


#endif
