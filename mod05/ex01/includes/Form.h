#ifndef FORM_H
#define FORM_H

# include <string>
# include <iostream>

class Bureaucrat;

class Form
{
private:
	std::string	const	_name;
	bool				_is_signed;
	int			const	_sign_grade;
	int			const	_execute_grade;
public:
	Form();
	Form(Form const &other);
	Form(std::string const &name, int sign_grade, int execute_grade);

	std::string const	&getName() const;
	int					getSignGrade() const;
	int					getExecuteGrade() const;
	bool				getIsSigned() const;
	void				beSigned(Bureaucrat const &bureaucrat);

	Form				&operator=(Form const &other);

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

	~Form();
};

std::ostream	&operator<<(std::ostream &out, Form const &form);

#endif
