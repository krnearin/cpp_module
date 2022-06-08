#include "../includes/Bureaucrat.h"
#include "../includes/Form.h"
#include "../includes/PresidentialPardonForm.h"
#include "../includes/RobotomyRequestForm.h"
#include "../includes/ShrubberyCreationForm.h"
#include "../includes/Intern.h"


void	PardonTest()
{
	Intern					intern;
	Bureaucrat				boss("Ray", 5);
	Bureaucrat				broke("Lana", 150);

	std::cout << "-------------PardonTest---------------"
			  << std::endl << std::endl;

	Form *pardon = intern.makeForm("PresidentialPardonForm", "Zurkerberg");
	boss.executeForm(*pardon);
	broke.executeForm(*pardon);
	broke.signForm(*pardon);
	boss.signForm(*pardon);
	broke.executeForm(*pardon);
	boss.executeForm(*pardon);

	std::cout << std::endl << "-------------PardonTest---------------"
			  << std::endl << std::endl;
}

void	ShrubberyTest()
{
	Intern					intern;
	Bureaucrat				boss("Ray", 5);
	Bureaucrat				broke("Lana", 150);

	std::cout << "-------------ShrubberyTest---------------"
			  << std::endl << std::endl;

	Form *shrubbery = intern.makeForm("ShrubberyCreationForm", "Shrub");
	boss.executeForm(*shrubbery);
	broke.executeForm(*shrubbery);
	broke.signForm(*shrubbery);
	boss.signForm(*shrubbery);
	broke.executeForm(*shrubbery);
	boss.executeForm(*shrubbery);

	std::cout << std::endl << "-------------ShrubberyTest---------------"
			  << std::endl << std::endl;
}


void	RobotomyTest()
{
	Intern					intern;
	Bureaucrat				boss("Ray", 5);
	Bureaucrat				broke("Lana", 150);

	std::cout << "-------------RobotomyTest---------------"
			  << std::endl << std::endl;

	Form *robo = intern.makeForm("RobotomyRequestForm", "Mark");
	boss.executeForm(*robo);
	broke.executeForm(*robo);
	broke.signForm(*robo);
	boss.signForm(*robo);
	broke.executeForm(*robo);
	boss.executeForm(*robo);

	std::cout << std::endl << "-------------RobotomyTest---------------"
			  << std::endl << std::endl;
}

int		main(void)
{
	PardonTest();
	ShrubberyTest();
	RobotomyTest();
	return (0);
}
