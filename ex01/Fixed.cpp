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
	fixed = std::roundf(n * (1 << fraction));
	std::cout << "Float constructor called" << std::endl;
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

float	Fixed::toFloat(void) const
{
    return  (float)fixed / (1 << fraction);
}
