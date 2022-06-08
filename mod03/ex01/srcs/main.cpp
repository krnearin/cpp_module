#include "../includes/ScavTrap.h"
//
//void	ConstructorChainTest(void)
//{
//	std::cout << "This is constructor chain test"
//			  << std::endl << std::endl;
//
//	{
//		ScavTrap *filthy = new ScavTrap("Filthy");
//		ScavTrap *filthyConstructorCopy = new ScavTrap(*filthy);
//		ScavTrap filthyAssignmentCopy;
//		filthyAssignmentCopy = *filthy;
//		delete filthy;
//		delete filthyConstructorCopy;
//	}
//
//	std::cout << std::endl << std::endl
//			  << "End of constructor chain test"
//			  << std::endl
//			  << "______________________________"
//			  << std::endl << std::endl;
//}
//
//void	PolymorphismTest(void)
//{
//	std::cout << "This is polymorphism chain test"
//			  << std::endl << std::endl;
//	{
//		ScavTrap *scaviar = new ScavTrap("Polly");
//		ClapTrap copy = *scaviar;
//		scaviar->attack("Heresy");
//		copy.attack("Heresy");
//		scaviar->takeDamage(5);
//		copy.takeDamage(5);
//		scaviar->beRepaired(5);
//
//		scaviar->guardGate();
//		delete scaviar;
//	}
//
//	std::cout << std::endl << std::endl
//			  << "End of polymorphism chain test"
//			  << std::endl
//			  << "______________________________"
//			  << std::endl << std::endl;
//}
//
//int		main(void)
//{
//	ConstructorChainTest();
//	PolymorphismTest();
//	system("leaks scavtrap | grep 'leaks for'");
//}

int main( void )
{
	ScavTrap copy("LUPA");
	ScavTrap first;

	first = copy;
	first.attack("PUPA");
	first.takeDamage(10);
	first.beRepaired(10);
	first.guardGate();
}