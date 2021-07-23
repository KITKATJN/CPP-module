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
	float toFloat( void ) const;
	int toInt( void ) const;

	bool operator>(const Fixed &fixed) const ;
	bool operator<(const Fixed &fixed) const ;
	bool operator==(const Fixed &fixed) const ;
	bool operator!=(const Fixed &fixed) const ;
	bool operator<=(const Fixed &fixed) const ;
	bool operator>=(const Fixed &fixed) const ;

	Fixed& operator=(const Fixed &fixed);
	Fixed operator+(const Fixed &fixed);
	Fixed operator-(const Fixed &fixed);
	Fixed operator*(const Fixed &fixed);
	Fixed operator/(const Fixed &fixed);

	Fixed& operator++ ( void );
	Fixed& operator-- ( void );
	Fixed operator++ ( int );
	Fixed operator-- ( int );

	static Fixed const &min(Fixed const &first, Fixed const &second);
	static Fixed const &max(Fixed const &first, Fixed const &second);
	static Fixed &min(Fixed &first, Fixed &second);
	static Fixed &max(Fixed &first, Fixed &second);
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);


#endif
