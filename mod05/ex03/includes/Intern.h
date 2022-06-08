#ifndef INTERN_H
#define INTERN_H

# include "Form.h"
# include "string"

class Intern
{
public:
	Intern();
	Intern(Intern const &other);

	Intern &operator=(Intern const &other);

	Form *makeForm(std::string const &formName, std::string const &target)
	const;

	class InternNotForm : public  std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	~Intern();
};


#endif
