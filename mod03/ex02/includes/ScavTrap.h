#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.h"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &cp);

	ScavTrap&  operator=(const ScavTrap &cp);

	void attack(const std::string& target);
	void guardGate();

	~ScavTrap();
};


#endif
