#include "../includes/contact.h"

void Contact::set_ds(std::string secret)
{
	this->dark_s = secret;
}

void Contact::set_fn(std::string first_name)
{
	this->f_name = first_name;
}

void Contact::set_ln(std::string last_name)
{
	this->l_name = last_name;
}

void Contact::set_nn(std::string nickname)
{
	this->n_name = nickname;
}

void Contact::set_pn(std::string ph_number)
{
	this->ph_nbr = ph_number;
}

std::string Contact::get_ds()
{
	return (this->dark_s);
}

std::string Contact::get_fn()
{
	return (this->f_name);
}

std::string Contact::get_ln()
{
	return (this->l_name);
}

std::string Contact::get_nn()
{
	return (this->n_name);
}

std::string Contact::get_pn()
{
	return (this->ph_nbr);
}