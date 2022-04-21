#ifndef ZOMBIE_H
#define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie
{
private:
	std::string name;
public:
	Zombie();
	Zombie(std::string _name);
	void announce(void);
	void setName(std::string name);
	~Zombie();
};

Zombie* zombieHorde(int N, std::string Name);

#endif
