#ifndef REPLACE_H
#define REPLACE_H

#include <iostream>
#include <fstream>
class Replace
{
private:
	const std::string filename;
	const std::string s1;
	const std::string s2;
public:
	Replace();
	Replace(const std::string &filename, const std::string &s1,
			const std::string &s2);
	~Replace();
	int replace();
};

#endif
