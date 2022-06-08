#ifndef CONTACT_H
#define CONTACT_H

#include <string>

class Contact {
private:
	std::string f_name;
	std::string l_name;
	std::string n_name;
	std::string ph_nbr;
	std::string dark_s;
public:
	std::string get_fn(void);
	std::string get_ln(void);
	std::string get_nn(void);
	std::string get_pn(void);
	std::string get_ds(void);

	void set_fn(std::string first_name);
	void set_ln(std::string last_name);
	void set_nn(std::string nickname);
	void set_pn(std::string ph_number);
	void set_ds(std::string secret);
};

#endif