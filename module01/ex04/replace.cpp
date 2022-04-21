#include "Replace.h"

Replace::Replace(const std::string &pFilename, const std::string &pS1,
				 const std::string &pS2):filename(pFilename), s1(pS1), s2(pS2)
{}

Replace::~Replace()
{}

Replace::Replace()
{}


int Replace::replace()
{
	std::string line, str;

	std::ifstream in_file(filename);
	if (!in_file.is_open())
		return (1);
	std::ofstream out_file(filename + ".replace");
	if (!out_file.is_open())
		return (1);
	while (std::getline(in_file, line))
	{
		for (size_t i = 0; 1; i += s2.length())
		{
			i = line.find(s1, i);
			if (i == std::string::npos)
				break ;
			line.erase(i, s1.length());
			line.insert(i, s2);
		}
		str += line;
		if (!in_file.eof())
			str += "\n";
	}
	out_file << str;
	in_file.close();
	out_file.close();
	return (0);
}