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

Fixed &Fixed::operator=(const Fixed &other)
{
	_fpv = other.getRawBits();
	std::cout << "Copy assignment operator called " << std::endl;
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _fpv;
}

void Fixed::setRawBits(const int raw)
{
	_fpv = raw;
	std::cout << "setRawBits member function called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}