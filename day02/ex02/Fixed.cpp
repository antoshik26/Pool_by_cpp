#include "Fixed.hpp"

Fixed::Fixed()
{
	fixed = 0;
}

Fixed::Fixed(int fixed)
{
	this->fixed = fixed * (1 << fraction);
}

Fixed::Fixed(float fixed)
{
	this->fixed = std::roundf(fixed * (1 << fraction));
}


Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &rhs)
{
	this->fixed = rhs.getRawBits();
}

int Fixed::getRawBits( void ) const
{
	return (fixed);
}

void Fixed::setRawBits( int const raw )
{

}

Fixed &Fixed::operator=(const Fixed &obj)
{
	this->fixed = obj.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &os, Fixed const &fixed)
{
    os << fixed.toFloat();
    return os;
}

int Fixed::toInt() const
{
	return (roundf((float)this->fixed / (float)(1 << fraction)));
}

float	Fixed::toFloat(void) const
{
	return ((float)this->fixed / (float)(1 << fraction));
}

Fixed Fixed::operator+ (const Fixed & one) const {
	Fixed r;
	r.setRawBits(this->fixed + one.getRawBits());
	return r;
}

Fixed Fixed::operator-(Fixed const &obj) const
{
	return Fixed(fixed - obj.fixed);
}

Fixed Fixed::operator* (const Fixed &one) const {
	Fixed r;
	r.fixed = this->fixed * one.getRawBits() >> 8;
	return r;
}

Fixed Fixed::operator/(Fixed const &obj) const
{
	return Fixed(fixed / obj.fixed);
}

bool Fixed::operator<(Fixed const &obj) const
{
	return (this->fixed < obj.fixed);
}

bool Fixed::operator>(Fixed const &obj) const
{
	return (this->fixed > obj.fixed);
}

bool Fixed::operator>=(Fixed const &obj) const
{
	return (this->fixed >= obj.fixed);
}

bool Fixed::operator<=(Fixed const &obj) const
{
	return (this->fixed <= obj.fixed);
}

bool Fixed::operator==(Fixed const &obj) const
{
	return (this->fixed == obj.fixed);
}

bool Fixed::operator!=(Fixed const &obj) const
{
	return (this->fixed != obj.fixed);
}

Fixed& Fixed::operator++()
{
	this->fixed = (this->toFloat() + epsilon) * (1 << fraction);
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return(tmp);
}

Fixed& Fixed::operator--()
{
	this->fixed = (this->toFloat() - epsilon) * (1 << fraction);
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return(tmp);
}

Fixed& Fixed::max(Fixed const &obj, Fixed const &obj_2)
{
	if (obj > obj_2)
		return (Fixed &)obj;
	else
		return (Fixed &)obj_2;
}

Fixed& Fixed::min(Fixed const &obj, Fixed const &obj_2)
{
	if (obj < obj_2)
		return (Fixed &)obj;
	else
		return (Fixed &)obj_2;
}
