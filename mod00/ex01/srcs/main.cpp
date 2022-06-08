#include "../includes/Phonebook.h"

int main()
{
	Phonebook	pb;
	std::string str;

	while (1)
	{
		std::cout << "Phonebook > ";
		std::cin >> str;
		if (str == "ADD")
			pb.ADD();
		else if (str == "SEARCH")
			pb.SEARCH();
		else if (str == "EXIT" || std::cin.eof())
			return (0);
		else
			std::cout << "Invalid command: " << str << std::endl;
	}
}