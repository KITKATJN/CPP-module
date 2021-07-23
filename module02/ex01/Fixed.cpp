#include "Fixed.hpp"

Fixed::Fixed():fixed_pv(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	return Fixed::fixed_pv;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixed_pv = fixed.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->fixed_pv = fixed.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}

void Fixed::setRawBits( int const raw )
{
	this->fixed_pv = raw;
}

Fixed::Fixed( const int number )
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_pv = (number << fractional);
}

Fixed::Fixed( const float number )
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed_pv = roundf(number * (1 << fractional));
}

float Fixed::toFloat( void ) const
{
	return (float)this->getRawBits() / (float)(1 << this->fractional);
}

int Fixed::toInt( void ) const
{
	return this->fixed_pv >> this->fractional;
}
