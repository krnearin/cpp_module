#include "Zombie.h"

int main()
{
	Zombie *Z;

	Z = newZombie("[Heap allocated class]");
	Z->announce();
	randomChump("[Stack allocated class]");
	delete Z;

}
