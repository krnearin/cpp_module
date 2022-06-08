#include "../includes/Fixed.h"

Fixed::Fixed()
{
	_fpv = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	_fpv=other._fpv;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int i)
{
	_fpv = i * (1 << _nfb);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f)
{
	_fpv = roundf(f * (1 << _nfb));
	std::cout << "Float constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	_fpv = other.getRawBits();
	std::cout << "Copy assignment operator called " << std::endl;
	return *this;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _fpv;
}

void Fixed::setRawBits(const int raw)
{
	_fpv = raw;
	std::cout << "setRawBits member function called" << std::endl;
}

float Fixed::toFloat(void) const
{
	return ((float)_fpv / (float)(1 << _nfb));
}

int Fixed::toInt() const
{
	return (int)roundf(_fpv / (1 << _nfb));
}

std::ostream &operator<<(std::ostream& os, const Fixed& c)
{
	os << c.toFloat();
	return (os);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
