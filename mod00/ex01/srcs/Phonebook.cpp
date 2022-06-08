#include "../includes/Phonebook.h"

int Phonebook::ind = 0;
int Phonebook::nbr = 0;

void Phonebook::ADD(void)
{
	if (this->nbr == 8)
		std::cout << "The memory is full and the contacts will be "
					 "overwriten!" << std::endl;
	std::cout << "first name: ";
	std::string first_name;
	std::cin >> first_name;
	Phonebook::contacts[this->ind].set_fn(first_name);
	std::cout << "last name: ";
	std::string last_name;
	std::cin >> last_name;
	Phonebook::contacts[this->ind].set_ln(last_name);
	std::cout << "nickname: ";
	std::string nickname;
	std::cin >> nickname;
	Phonebook::contacts[this->ind].set_nn(nickname);
	std::cout << "phone number: ";
	std::string phone_number;
	std::cin >> phone_number;
	Phonebook::contacts[this->ind].set_pn(phone_number);
	std::cout << "darkest secret: ";
	std::string secret;
	std::cin >> secret;
	Phonebook::contacts[this->ind].set_ds(secret);
	this->ind = (this->ind + 1) % 8;
	if (this->nbr < 8)
		this->nbr++;
}

void Phonebook::SEARCH()
{
	std::cout << "|     Index|First Name| Last Name|  Nickname|" <<std::endl;
	for (int i = 0; i < this->nbr; i++)
	{
		std::cout << "|" << std::setw(10) << i;
		if (Phonebook::contacts[i].get_fn().size() > 10)
			std::cout << "|" << std::setw(10) << Phonebook::contacts[i]
				.get_fn().substr(0, 9) + ".";
		else
			std::cout << "|" << std::setw(10) << Phonebook::contacts[i].get_fn();
		if (Phonebook::contacts[i].get_ln().size() > 10)
			std::cout << "|" << std::setw(10) << Phonebook::contacts[i]
				.get_ln().substr(0, 9) + ".";
		else
			std::cout << "|" << std::setw(10) << Phonebook::contacts[i].get_ln();
		if (Phonebook::contacts[i].get_nn().size() > 10)
			std::cout << "|" << std::setw(10) << Phonebook::contacts[i]
				.get_nn().substr(0,9) + ".";
		else
			std::cout << "|" << std::setw(10) << Phonebook::contacts[i].get_nn();
		std::cout << "|" << std::endl;
	}
	if (this->nbr > 0)
	{
		std::cout << "Enter an index between 0 and " << this->nbr -1 << " > ";
		int index;
		std::cin >> index;
		if (index >= 0 && index <= this->nbr - 1)
		{
			std::cout << "First Name: " << Phonebook::contacts[index].get_fn() << std::endl;
			std::cout << "Last Name: " << Phonebook::contacts[index].get_ln() << std::endl;
			std::cout << "Nickname: " << Phonebook::contacts[index].get_nn() << std::endl;
			std::cout << "Phone number: " << Phonebook::contacts[index].get_pn() << std::endl;
			std::cout << "Darkest Secret: " << Phonebook::contacts[index].get_ds() << std::endl;
		}
		else
			std::cout << "Index out of range." << std::endl;
	}
}
