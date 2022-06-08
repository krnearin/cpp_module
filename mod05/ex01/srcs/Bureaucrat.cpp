#include "../includes/Bureaucrat.h"
#include "../includes/Form.h"

Bureaucrat::Bureaucrat() :
		_name("Undefined"),
		_grade(150)
{

}

Bureaucrat::Bureaucrat(Bureaucrat const &other) :
		_name(other.getName())
{
	*this = other;
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) :
		_name(name)
{
	if (grade > 150)
	{
		throw GradeTooLowException();
	}
	if (grade < 1)
	{
		throw GradeTooHighException();
	}
	else
		_grade = grade;
}

std::string const	&Bureaucrat::getName() const
{
	return _name;
}

int					Bureaucrat::getGrade() const
{
	return _grade;
}

void				Bureaucrat::inc()
{
	if (_grade - 1 < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}

	_grade--;
}

void				Bureaucrat::dec()
{
	if (_grade + 1 > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}

	_grade++;
}

Bureaucrat			&Bureaucrat::operator=(Bureaucrat const &other)
{
	if (this == &other)
	{
		return *this;
	}

	_grade = other.getGrade();
	return *this;
}

void Bureaucrat::signForm(Form &form) const
{
	if (form.getIsSigned())
	{
		std::cout << _name << " couldn’t sign " << form.getName() <<
			" because it's already signed" << std::endl;
		return ;
	}
	else
	{
		try
		{
			form.beSigned(*this);
			std::cout << _name << " signs " << form.getName() << std::endl;
		}
		catch (const std::exception &exception)
		{
			std::cout << _name << " cannot sign " << form.getName() <<
			" because " << exception.what() << std::endl;
		}
	}
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low exception";
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high exception";
}

Bureaucrat::~Bureaucrat()
{

}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureuacrat)
{
	out << bureuacrat.getName() << ", bureuacrat grade is " << bureuacrat
	.getGrade() << std::endl;
	return out;
}
