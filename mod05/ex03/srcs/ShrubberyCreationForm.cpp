#include "../includes/ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm() :
	Form("ShrubberyCreationForm", 145, 137),
	_target("parameter")
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :
	Form("ShrubberyCreationForm", 145, 137),
	_target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm
&other) :	Form(other.getName(), 145, 137),
			_target(other._target)
{
	*this = other;
}

ShrubberyCreationForm &
ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this == &other)
		return *this;
	_target = other._target;

	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	this->Form::execute(executor);

	std::string tree;

	tree = "       _-_\n"
		   "    /~~   ~~\\\n"
		   " /~~         ~~\\\n"
		   "{               }\n"
		   " \\  _-     -_  /\n"
		   "   ~  \\\\ //  ~\n"
		   "_- -   | | _- _\n"
		   "  _ -  | |   -_\n"
		   "      // \\\\";
	std::ofstream file(_target + "_shrubbery");
	if (!file.good()) //Возвращает true, если ошибки не было
	{
		std::cerr << "File \"" << _target << "_shrubbery\"" <<
		" could not be opened or created" << std::endl;
		file.clear();
		return;
	}

	file << tree;
	file.close();
	std::cout << "File \"" << _target << "_shrubbery\" was created" <<
	std::endl;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

// Объект cerr часто используется для сообщений об ошибках и программной
//диагностики. Поток, посланный в него, немедленно выводится на экран, минуя
//буферизацию. Этим cerr отличается от cout. К тому же этот поток не может быть
//перенаправлен (подробнее об этом вы узнаете позже). Поэтому у вас есть небольшой шанс увидеть последнее сообщение неожиданно умершей программы.