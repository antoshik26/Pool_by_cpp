#ifndef TYPE_CONVERSION_HPP
#define TYPE_CONVERSION_HPP
#include <iostream>

class Type_conversion
{
	private:
		std::string str;
		int type_int;
		double type_double;
		float type_float;
		char type_char;
		class CharExceptions : public std::exception
		{
			virtual const char* what() const throw();
		};
	public:
		Type_conversion(std::string str);
		~Type_conversion();
		Type_conversion(Type_conversion &conversion);
		Type_conversion &operator=(Type_conversion &conversion);
		std::string getstr() const;
		int getint() const;
		float getfloat() const;
		char getchar() const;
		double getdouble() const;
		void Nan();
		void Nanf(); 
		void Minus_inf();
		void Plus_inf();
		void Zero();
		void Minus_inff();
		void Plus_inff();
};

#endif