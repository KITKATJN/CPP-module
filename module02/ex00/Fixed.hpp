#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>

class Fixed
{
private:
	int fixed_pv;
	static const int fractional = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &fixed);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	Fixed& operator=(const Fixed &fixed);
};

#endif
