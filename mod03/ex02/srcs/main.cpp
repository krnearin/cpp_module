#include "../includes/FragTrap.h"
#include "../includes/ScavTrap.h"

//void	ConstructorChainTest(void)
//{
//	std::cout << "This is constructor chain test"
//			  << std::endl << std::endl;
//
//	{
//		ScavTrap *scav = new ScavTrap("Scav");
//		FragTrap *frag = new FragTrap("Frag");
//		ScavTrap *scavConstructorCopy = new ScavTrap(*scav);
//		FragTrap *fragConstructorCopy = new FragTrap(*frag);
//		ScavTrap scavAssignmentCopy;
//		FragTrap fragAssignmentCopy;
//		scavAssignmentCopy = *scav;
//		fragAssignmentCopy = *frag;
//		delete scav;
//		delete scavConstructorCopy;
//		delete frag;
//		delete fragConstructorCopy;
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
//		FragTrap *scaviar = new FragTrap("Fragger");
//		ClapTrap copy = *scaviar;
//
//		scaviar->attack("Heresy");
//		copy.attack("Heresy");
//		scaviar->takeDamage(5);
//		copy.takeDamage(5);
//		scaviar->beRepaired(5);
//
//		scaviar->highFivesGuys();
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
//	system("leaks Repetitive_work | grep 'leaks for'");
//}

int main( void )
{
	FragTrap copy("first");
	FragTrap first;

	first = copy;
	first.attack("second");
	first.takeDamage(10);
	first.beRepaired(10);
	first.highFivesGuys();
}