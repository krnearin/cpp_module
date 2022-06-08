#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include "Bureaucrat.h"
# include "Form.h"

class ShrubberyCreationForm : public Form
{
private:
	std::string _target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(ShrubberyCreationForm const &other);

	void execute(Bureaucrat const &executor) const;

	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);

	~ShrubberyCreationForm();
};


#endif
