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
		int toInt(void) const;
		float toFloat(void) const;
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};
std::ostream &operator<<(std::ostream &os, Fixed const &fix);
#endif