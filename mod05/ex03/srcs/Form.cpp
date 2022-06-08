#include "../includes/Form.h"
#include "../includes/Bureaucrat.h"

Form::Form() :
	_name("New form"),
	_sign_grade(100),
	_execute_grade(100)
{
	_is_signed = false;
}

Form::Form(const std::string &name, int sign_grade, int execute_grade) :
	_name(name),
	_sign_grade(sign_grade),
	_execute_grade(execute_grade)
{
	if (execute_grade > 150 || sign_grade > 150)
		throw GradeTooLowException();
	if (execute_grade < 1 || sign_grade < 1)
		throw GradeTooHighException();

	_is_signed = false;
}

Form::Form(const Form &other) :
	_name(other.getName()),
	_sign_grade(other.getSignGrade()),
	_execute_grade(other.getExecuteGrade())
{
	_is_signed = other._is_signed;
}

const std::string &Form::getName() const
{
	return _name;
}

int Form::getSignGrade() const
{
	return _sign_grade;
}

int Form::getExecuteGrade() const
{
	return _execute_grade;
}

bool Form::getIsSigned() const
{
	return _is_signed;
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (_sign_grade < bureaucrat.getGrade())
		throw Form::GradeTooLowException();
	else
		_is_signed = true;
}

void Form::execute(const Bureaucrat &executor) const
{
	if (!getIsSigned())
		throw FormIsNoSignedException();
	if (executor.getGrade() > getExecuteGrade())
		throw GradeTooLowException();
}

Form &Form::operator=(const Form &other)
{
	if (this == &other)
		return *this;
	_is_signed = other._is_signed;
	return  *this;
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low exception";
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high exception";
}

const char	*Form::FormIsNoSignedException::what() const throw()
{
	return "Form is not signed exception";
}

Form::~Form()
{

}

std::ostream  &operator<<(std::ostream &out, Form const &form)
{
	std::string isSigned = form.getIsSigned() ?  " signed" : " unsigned";

	out << "Form " << form.getName() << " with execute grade "
		<< form.getExecuteGrade() << " and sign grade " << form.getSignGrade()
		<< isSigned << std::endl;
	return out;
}
