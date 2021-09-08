#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>
#define epsilon .00390625f

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
		Fixed operator+(Fixed const &obj) const;
		Fixed operator-(Fixed const &obj) const;
		Fixed operator*(Fixed const &obj) const;
		Fixed operator/(Fixed const &obj) const;
		bool operator<(Fixed const &obj) const;
		bool operator>(Fixed const &obj) const;
		bool operator>=(Fixed const &obj) const;
		bool operator<=(Fixed const &obj) const;
		bool operator==(Fixed const &obj) const;
		bool operator!=(Fixed const &obj) const;
		Fixed &operator++();
		Fixed operator++(int);
		Fixed &operator--();
		Fixed operator--(int);
		static Fixed &max(Fixed const &obj, Fixed const &obj_2);
		static Fixed &min(Fixed const &obj, Fixed const &obj_2);
		int toInt(void) const;
		float toFloat(void) const;
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};
std::ostream &operator<<(std::ostream &os, Fixed const &fix);
#endif