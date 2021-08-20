#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
	public:
	int fixed; 
	const static  int fraction = 8;
	private:
	Fixed();
	Fixed(int n);
	Fixed(float n);
	~Fixed();
	void Fixed_copy(Fixed &Fixed);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif;