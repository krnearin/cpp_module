#include "../includes/Bureaucrat.h"
#include "../includes/Form.h"
#include "../includes/PresidentialPardonForm.h"
#include "../includes/RobotomyRequestForm.h"
#include "../includes/ShrubberyCreationForm.h"

void	PardonTest()
{
	Bureaucrat				boss("Ray", 5);
	Bureaucrat				broke("Lana", 25);
	PresidentialPardonForm	pardon;

	std::cout << "-------------PardonTest---------------"
			  << std::endl << std::endl;

	boss.executeForm(pardon);
	broke.executeForm(pardon);
	broke.signForm(pardon);
	boss.signForm(pardon);
	broke.executeForm(pardon);
	boss.executeForm(pardon);

	std::cout << std::endl << "-------------PardonTest---------------"
			  << std::endl << std::endl;
}

void	ShrubberyTest()
{
	Bureaucrat				boss("Ray", 5);
	Bureaucrat				broke("Lana", 150);
	ShrubberyCreationForm	shrubbery;

	std::cout << "-------------ShrubberyTest---------------"
			  << std::endl << std::endl;

	boss.executeForm(shrubbery);
	broke.executeForm(shrubbery);
	broke.signForm(shrubbery);
	boss.signForm(shrubbery);
	broke.executeForm(shrubbery);
	boss.executeForm(shrubbery);

	std::cout << std::endl << "-------------ShrubberyTest---------------"
			  << std::endl << std::endl;
}


void	RobotomyTest()
{
	Bureaucrat				boss("Ray", 5);
	Bureaucrat				broke("Lana", 150);
	RobotomyRequestForm		robo;

	std::cout << "-------------RobotomyTest---------------"
			  << std::endl << std::endl;

	boss.executeForm(robo);
	broke.executeForm(robo);
	broke.signForm(robo);
	boss.signForm(robo);
	broke.executeForm(robo);
	boss.executeForm(robo);

	std::cout << std::endl << "-------------RobotomyTest---------------"
			  << std::endl << std::endl;
}

int		main(void)
{
	//Form abstract;

	PardonTest();
	ShrubberyTest();
	RobotomyTest();
	return (0);
}
