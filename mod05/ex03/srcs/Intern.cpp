#include "../includes/Intern.h"
#include "../includes/PresidentialPardonForm.h"
#include "../includes/RobotomyRequestForm.h"
#include "../includes/ShrubberyCreationForm.h"

Intern::Intern()
{

}

Intern::Intern(const Intern &other)
{
	*this = other;
}

Intern &Intern::operator=(const Intern &other)
{
	if (this == &other)
		return *this;

	return *this;
}

const char *Intern::InternNotForm::what() const throw(){
	return("Intern cannot create this form");
}

Form *
Intern::makeForm(const std::string &formName, const std::string &target) const
{
	std::string array[3] = {"ShrubberyCreationForm", "RobotomyRequestForm",
							"PresidentialPardonForm"};

	int i = 0;

	while (i < 3 && array[i] != formName)
		i++;

	switch (i)
	{
		case 0:
			std::cout << "Intern creates "<< formName << " for " << target <<
			std::endl;
			return (new ShrubberyCreationForm(target));
			break ;
		case 1:
			std::cout << "Intern creates "<< formName << " for " << target <<
			std::endl;
			return (new RobotomyRequestForm(target));
			break ;
		case 2:
			std::cout << "Intern creates "<< formName << " for " << target <<
			std::endl;
			return (new PresidentialPardonForm(target));
			break ;
		default:
			std::cout << "Intern trying create form "<< formName << " for " <<
			target << std::endl;
			throw Intern::InternNotForm();
			break ;
	}
	return NULL;
}

Intern::~Intern()
{

}