#include "Zombie.h"

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0)
		return (NULL);
	Zombie *ret = new Zombie[N];
	for (int i = 0; i < N; i++)
		ret[i].setName(name+ "_" + std::to_string(i+1));
	return (ret);
}