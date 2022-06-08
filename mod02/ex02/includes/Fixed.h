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
	Fixed(const Fixed &n);

	Fixed				&operator=(const Fixed &num);

	bool				operator<(const Fixed &num) const;
	bool				operator> (const Fixed &num) const;
	bool				operator>= (const Fixed &num) const;
	bool				operator<= (const Fixed &num) const;
	bool				operator!= (const Fixed &num) const;
	bool				operator== (const Fixed &num) const;

	Fixed				operator+ (const Fixed &num) const;
	Fixed				operator- (const Fixed &num) const;
	Fixed				operator* (const Fixed &num) const;
	Fixed				operator/ (const Fixed &num) const;
	// decrement
	Fixed				&operator--(); // pre
	Fixed				operator--(int); // post
	// increment
	Fixed				&operator++();
	Fixed				operator++(int);

	static Fixed&		min(Fixed &n1, Fixed &n2);
	static const Fixed&	min(const Fixed &n1, const Fixed &n2);
	static Fixed&		max(Fixed &n1, Fixed &n2);
	static const Fixed&	max(const Fixed &n1, const Fixed &n2);

	float				toFloat(void) const;
	int					toInt( void ) const;
	int					getRawBits(void) const;
	void				setRawBits(int const raw);

	~Fixed();
};

std::ostream &operator<<(std::ostream& os, const Fixed& c);

#endif
