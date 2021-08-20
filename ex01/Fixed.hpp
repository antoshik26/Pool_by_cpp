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
		Fixed(int fixed);
		Fixed(float fixed);
		Fixed(const Fixed &rhs);
		~Fixed();
		Fixed &operator=(Fixed const &obj);
		// Fixed &operator2=(float fixed);
		// void Fixed_copy(Fixed &Fixed);
		int toInt(void) const;
		int toFloat(void) const;
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};
#endif