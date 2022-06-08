#include "../includes/RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm() :
	Form("RobotomyRequestForm", 72, 45),
	_target("parameter")
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	Form("RobotomyRequestForm", 72, 45),
	_target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) :
	Form(other.getName(), 72, 45)
{
	*this = other;
}

RobotomyRequestForm &
RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this == &other)
		return *this;
	this->_target = other._target;

	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	this->Form::execute(executor);

	std::cout << "Makes some drilling noises" << std::endl;
	srand(time(NULL)); // инициализируем генератор случайных чисел
	if (std::rand() % 2 == 0)
	{
		std::cout << _target << " has been robotomized successfully" <<
		std::endl;
		return;
	}

	std::cout << "The Robotomy is failed" << std::endl;
	return;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}