#include "Fixed.hpp"

Fixed::Fixed()
{
	fixed = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int fixed)
{
	this->fixed = fixed;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float fixed)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed = fixed * (1 << fraction);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &rhs)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixed = rhs.getRawBits();
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fixed);
}

void Fixed::setRawBits( int const raw )
{

}

Fixed &Fixed::operator=(const Fixed &obj)
{
	std::cout << "Assignation operator called" << std::endl;
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
	return(this->fixed);
}

float Fixed::toFloat(void) const
{
    return  (float)fixed / (1 << fraction);
}

Fixed Fixed::operator+(Fixed const &obj) const
{
	return Fixed(fixed + obj.fixed);
}

Fixed Fixed::operator-(Fixed const &obj) const
{
	return Fixed(fixed - obj.fixed);
}

Fixed Fixed::operator*(Fixed const &obj) const
{
	return Fixed(fixed * obj.fixed);
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
