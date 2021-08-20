#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
	private:
	int fixed; 
	const static  int fraction = 8;
	public:
	Fixed();
	Fixed(const Fixed &rhs);
	~Fixed();
	void Fixed_copy(Fixed &Fixed);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};
#endif