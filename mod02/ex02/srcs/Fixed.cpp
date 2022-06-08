#include "../includes/Fixed.h"

Fixed::Fixed()
{
	_fpv = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &n)
{
	_fpv=n.getRawBits();
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int i)
{
	_fpv = (i * (1 << _nfb));
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f)
{
	_fpv = (int)(roundf(f * (1 << _nfb)));
	std::cout << "Float constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &num)
{
	_fpv = num.getRawBits();
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

Fixed& Fixed::operator--()
{
	_fpv--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return tmp;
}

Fixed& Fixed::operator++()
{
	_fpv++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return tmp;
}

bool Fixed::operator<(const Fixed &num) const
{
	return _fpv < num.getRawBits();
}

bool Fixed::operator>(const Fixed &num) const
{
	return _fpv > num.getRawBits();
}

bool Fixed::operator>=(const Fixed &num) const
{
	return _fpv >= num.getRawBits();
}

bool Fixed::operator<=(const Fixed &num) const
{
	return _fpv <= num.getRawBits();
}

bool Fixed::operator!=(const Fixed &num) const
{
	return _fpv != num.getRawBits();
}

bool Fixed::operator==(const Fixed &num) const
{
	return _fpv == num.getRawBits();
}

Fixed Fixed::operator+(const Fixed &num) const
{
	return Fixed(_fpv + num.getRawBits());
}

Fixed Fixed::operator-(const Fixed &num) const
{
	return Fixed(_fpv - num.getRawBits());
}

Fixed Fixed::operator*(const Fixed &num) const
{
	return Fixed(toFloat() * num.toFloat());
}

Fixed Fixed::operator/(const Fixed &num) const
{
	return Fixed(toFloat() / num.toFloat());
}

Fixed &Fixed::max(Fixed &n1, Fixed &n2)
{
	return n1 > n2 ? n1 : n2;
}

const Fixed &Fixed::max(const Fixed &n1, const Fixed &n2)
{
	return n1 > n2 ? n1 : n2;
}

Fixed &Fixed::min(Fixed &n1, Fixed &n2)
{
	return n1 < n2 ? n1 : n2;
}

const Fixed &Fixed::min(const Fixed &n1, const Fixed &n2)
{
	return n1 < n2 ? n1 : n2;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}