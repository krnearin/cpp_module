#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

# include <string>
# include <iostream>

class Bureaucrat
{
private:
	std::string const	_name;
	int					_grade;
public:
	Bureaucrat();
	Bureaucrat(Bureaucrat const &other);
	Bureaucrat(std::string const &name, int grade);

	std::string const	&getName() const;
	int					getGrade() const;
	void 				inc();
	void 				dec();

	Bureaucrat	&operator=(Bureaucrat const &other);

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char	*what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char	*what() const throw();
	};

	virtual ~Bureaucrat();
};

std::ostream	&operator<<(std::ostream &out, Bureaucrat const &bureuacrat);

#endif
