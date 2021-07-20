#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int fixed_pv;
	static const int fractional = 8;
public:
	Fixed();
	Fixed( const int number );
	Fixed( const float number );
	~Fixed();
	Fixed(const Fixed &fixed);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	Fixed& operator=(const Fixed &fixed);
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
