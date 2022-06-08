#ifndef CLAPTRAP_H
#define CLAPTRAP_H

# include <iostream>
# include <string>

class ClapTrap
{
protected:
	std::string	_Name;
	int			_hitPoint;
	int			_energyPoint;
	int			_attackDamage;

	bool		CheckLife(void) const;
public:
	ClapTrap();
	ClapTrap(std::string const &name);
	ClapTrap(ClapTrap const &cp);

	ClapTrap	&operator=(const ClapTrap &cp);

	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

	~ClapTrap();
};

#endif
