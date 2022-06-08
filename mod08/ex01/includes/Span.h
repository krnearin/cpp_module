#ifndef SPAN_H
#define SPAN_H

# include <algorithm>
# include <list>
# include <iostream>

class Span
{
private:
	unsigned long	_max_size;
	std::list<int>	_values;
public:
	Span();
	Span(Span const &other);
	Span(int size);

	Span &operator=(Span const &other);

	template<class TIterator>
	void			addNumber(TIterator itBegin, TIterator itEnd);
	void			addNumber(int num);
	unsigned long	shortestSpan();
	unsigned long	longestSpan();

	~Span();
class InvalidDistanceException: public std::exception
{
public:
	virtual const char *what() const throw();
};

class UnabletoDetermineLengthException: public std::exception
{
public:
	virtual const char *what() const throw();
};

};

template<class TIterator>
void	Span::addNumber(TIterator itBegin, TIterator itEnd)
{
	typename std::iterator_traits<TIterator>::difference_type distance = std::distance(itBegin, itEnd);

	if (_values.size() + distance > _max_size)
	{
		throw UnabletoDetermineLengthException();
	}

	_values.insert(_values.end(), itBegin, itEnd);
}


#endif
