#ifndef CONVERT_H
#define CONVERT_H

#include <iostream>
# include <string>
# include <cstdlib>
#include <iomanip>

class Convert
{
public:
	Convert();
	Convert(Convert const &other);

	Convert &operator=(Convert const &other);

	std::string	checkType(std::string input) const;

	void		convertInt(int i) const;
	void		convertChar(char c) const;
	void		convertFloat(float f) const;
	void 		convertDouble(double d) const;

	~Convert();
};


#endif
