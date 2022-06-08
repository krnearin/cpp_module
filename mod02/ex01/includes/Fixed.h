#ifndef FIXED_H
#define FIXED_H

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					_fpv;
	static const int	_nfb = 8;
public:
	Fixed();
	Fixed(const int i);
	Fixed(const float f);
	Fixed(const Fixed &other);

	Fixed &operator=(const Fixed &other);

	float toFloat(void) const;
	int toInt( void ) const;
	int	getRawBits(void) const;
	void setRawBits(int const raw);

	~Fixed();
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
