#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.h"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(std::string const &name);
	FragTrap(FragTrap const &cp);

	FragTrap& operator=(const FragTrap &cp);

	void highFivesGuys(void);

	~FragTrap(void);
};

// почему нет функции  атаки


#endif
