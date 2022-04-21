#include <iostream>
#include "Replace.h"

int main(int argc, char **argv)
{
	if (argc != 4)
		std::cout << "Error: Invalid arguments" << std::endl;
	else
	{
		Replace replace(argv[1], argv[2], argv[3]);
		if (replace.replace())
			std::cout << "Error: Invalid file" << std::endl;
	}
}

