#include "../includes/Span.h"

Span::Span()
{
	_max_size = 0;
	_values = std::list<int>();
}

Span::Span(const Span &other)
{
	*this = other;
}

Span::Span(int size)
{
	_max_size = size;
	_values = std::list<int>();
}

Span &Span::operator=(const Span &other)
{
	_max_size = other._max_size;
	_values = other._values;
	return *this;
}

void Span::addNumber(int num)
{
	if (_values.size() == _max_size)
		throw InvalidDistanceException();
	else
		_values.push_back(num);
}

//void Span::addNumbers(std::list<int> iterator begin, std::list<int> iterator
//end)
//{
//	if (_values.size() + std::distance(begin, end) > _max_size)
//		throw InvalidDistanceException();
//	while (begin != end)
//		_values.push_back(*begin++);
//}

unsigned long Span::shortestSpan()
{
	if (_values.size() < 2)
		throw UnabletoDetermineLengthException();

	_values.sort();

	std::list<int>::iterator next = _values.begin();
	std::list<int>::iterator iter = next++;
	std::list<int>::iterator end = _values.end();

	long min = std::abs(static_cast<long>(*(next++)) - static_cast<long>(*(iter++)));
	long tmp;
	while (next != end)
	{
		tmp = std::abs(static_cast<long>(*(next++)) - static_cast<long>(*(iter++)));
		if (tmp < min)
			min = tmp;
	}

	return (min);
}

unsigned long Span::longestSpan()
{
	if (_values.size() < 2)
		throw UnabletoDetermineLengthException();

	long min = *std::min_element(_values.begin(), _values.end());
	long max = *std::max_element(_values.begin(), _values.end());

	return max - min;
}

const char* Span::UnabletoDetermineLengthException::what() const throw()
{
	return "The number of elements is not enough!\n";
}

const char* Span::InvalidDistanceException::what() const throw()
{
	return "Number of elements exceeded!\n";
}

Span::~Span()
{

}