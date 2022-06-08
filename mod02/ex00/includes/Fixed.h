#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
private:
	int					_fpv;
	static const int	_nfb = 8;
public:
	Fixed();
	Fixed(const Fixed &other);

	Fixed &operator=(const Fixed &other);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	~Fixed();
};


#endif
