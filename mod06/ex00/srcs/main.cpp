#include "../includes/Convert.h"

int main(int argc, char **argv)
{

	int                 i;
	char                c;
	float               f;
	double              d;

	if (argc != 2) {
		std::cout << "Error: wrong number of args" << std::endl;
		exit(1);
	}
	if (argv[1][0] == '\0')
	{
		std::cout << "Error: invalid argument." << std::endl;
		return 2;
	}

	Convert converter;
	std::string input = static_cast<std::string>(argv[1]);
	std::string type = converter.checkType(input);

	if (type == "int") {
		i = std::atoi(input.c_str());
		converter.convertInt(i);
	}
	else if (type == "float") {
		f = std::atof(input.c_str());
		converter.convertFloat(f);
	}
	else if (type == "double") {
		d = static_cast<double>(std::atof(input.c_str()));
		converter.convertDouble(d);
	}
	else if (type == "char") {
		c = input.at(0);
		converter.convertChar(c);
	}
	else if (type == "invalid") {
		std::cout << "Invalid character input" << std::endl;
	}
	return 0;
}

