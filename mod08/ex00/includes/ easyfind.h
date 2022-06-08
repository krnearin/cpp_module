#ifndef EASYFIND_H
# define EASYFIND_H

# include <algorithm>

class NotFoundException : public std::exception
{
public:
	const char *what() const throw()
	{
		return "Index not found";
	}
};


template <typename T>
typename T::iterator easyfind(T &container, int value){
	typename T::iterator p = std::find(container.begin(), container.end(), value);
	if (p == container.end())
		throw NotFoundException();
	else
		return (p);
}
#endif
