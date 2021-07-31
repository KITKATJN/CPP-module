#include "Fixed.hpp"

Fixed::Fixed():fixed_pv(0)
{
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits( void ) const
{
	return Fixed::fixed_pv;
}

Fixed::Fixed(const Fixed &fixed)
{
	this->fixed_pv = fixed.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
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
	this->fixed_pv = (number << fractional);
}

Fixed::Fixed( const float number )
{
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

Fixed const &Fixed::min(Fixed const &first, Fixed const &second)
{
	return (first > second ? second : first);
}

Fixed const &Fixed::max(Fixed const &first, Fixed const &second)
{
	return (first > second ? first : second);
}

Fixed &Fixed::min(Fixed &first, Fixed &second)
{
	return (first > second ? second : first);
}

Fixed &Fixed::max(Fixed &first, Fixed &second)
{
	return (first > second ? first : second);
}

Fixed Fixed::operator++ ( int )
{
	Fixed prev = *this;
	++*this;
	return prev;
}

Fixed Fixed::operator-- ( int )
{
	Fixed prev = *this;
	--*this;
	return prev;
}

Fixed& Fixed::operator++ ( void )
{
	this->fixed_pv++;
	return *this;
}

Fixed& Fixed::operator-- ( void )
{
	this->fixed_pv--;
	return *this;
}

bool Fixed::operator>(const Fixed &fixed) const
{
	return this->getRawBits() > fixed.getRawBits();
}

bool Fixed::operator<(const Fixed &fixed) const
{
	return this->getRawBits() < fixed.getRawBits();
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	return this->getRawBits() >= fixed.getRawBits();
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	return this->getRawBits() <= fixed.getRawBits();
}

bool Fixed::operator==(const Fixed &fixed) const
{
	return this->getRawBits() == fixed.getRawBits();
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	return this->getRawBits() != fixed.getRawBits();
}

Fixed Fixed::operator+(const Fixed &fixed)
{
	return Fixed(this->getRawBits() + fixed.getRawBits());
}

Fixed Fixed::operator-(const Fixed &fixed)
{
	return Fixed(this->getRawBits() - fixed.getRawBits());
}

Fixed Fixed::operator*(const Fixed &fixed)
{

	Fixed fix(*this);
	fix.setRawBits((this->getRawBits() * fixed.getRawBits()) / (1 << Fixed::fractional));
	return fix;
}

Fixed Fixed::operator/(const Fixed &fixed)
{
	Fixed fix(*this);
	fix.setRawBits((this->getRawBits() * (1 << Fixed::fractional)) / fixed.getRawBits());
	return fix;
}
