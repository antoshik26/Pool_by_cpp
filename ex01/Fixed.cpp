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
	this->fixed = fixed;
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// void Fixed::Fixed_copy(Fixed &Fixed) 
// {
// 	std::cout << "Copy constructor called" << std::endl;
// 	this->fixed = Fixed.getRawBits();
// }

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

// Fixed &Fixed::operator2(float fixed)
// {
	
// }

int Fixed::toInt() const
{
	return(this->fixed);
}

int Fixed::toFloat() const
{
	return(this->fixed);
}


// std::ostream &operator<<(std::ostream &os, Fixed const &fixed)
// {
// 	os << fixed.toInt();
// 	return (os);
// }