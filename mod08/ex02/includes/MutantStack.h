#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <iostream>
#include <algorithm>
#include <stack>

template <typename T>
class MutantStack : public std::stack <T>{
public:
	typedef typename std::deque<T>::iterator iterator;

	MutantStack() : std::stack<T>()
	{

	};

	MutantStack(MutantStack &other) : std::stack<T>()
	{
		*this = other;
	};

	MutantStack &operator=(MutantStack &other)
	{
		std::stack<T>::operator=(other);

		return *this;
	};

	iterator begin()
	{
		return this->c.begin();
	};

	iterator end()
	{
		return this->c.end();
	};

	virtual ~MutantStack()
	{

	}
};


#endif
