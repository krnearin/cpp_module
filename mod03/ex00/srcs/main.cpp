#include "../includes/ClapTrap.h"
//
//int main( void )
//{
//	ClapTrap copy("Lupa");
//	ClapTrap first;
//
//	first = copy;
//	first.attack("Pupa");
//	first.takeDamage(5);
//	first.beRepaired(10);
//	first.takeDamage(10);
//	first.beRepaired(10);
//}

int main(void)
{
	{
		ClapTrap caren("LUPA");
		ClapTrap copy = caren;
		copy = caren;

		caren.attack("PUPA");

		copy.attack("PUPA");
		copy.attack("PUPA");
		copy.attack("PUPA");
		copy.attack("PUPA");
		copy.attack("PUPA");
		copy.attack("PUPA");
		copy.attack("PUPA");
		copy.attack("PUPA");
		copy.attack("PUPA");
		copy.attack("PUPA");
		copy.attack("PUPA");

		caren.takeDamage(5);
		copy.takeDamage(5);
		caren.beRepaired(5);
		copy.beRepaired(5);
		caren.takeDamage(5);
		copy.takeDamage(5);
		caren.takeDamage(5);
		copy.takeDamage(5);
		caren.takeDamage(5);
		copy.takeDamage(5);
	}

//	system("leaks claptrap | grep 'leaks for'");
}

