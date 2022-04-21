#include "Zombie.h"

void randomChump(std::string name)
{
	Zombie stack(name);

	stack.announce();
}