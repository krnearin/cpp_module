#include "../includes/PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm() :
	Form("PresidentialPardonForm", 25, 5),
	_target("parameter")
{

}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
	Form("PresidentialPardonForm", 25, 5),
	_target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(
		const PresidentialPardonForm &other) :
		Form(other.getName(), 25, 5)
{
	*this = other;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	this->Form::execute(executor);

	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" <<
	std::endl;

	return;
}

PresidentialPardonForm &
PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	if (this == &other)
		return *this;
	_target = other._target;

	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}