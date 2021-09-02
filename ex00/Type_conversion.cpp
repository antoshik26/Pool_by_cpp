#include "Type_conversion.hpp"

Type_conversion::Type_conversion(std::string str)
{
	try
	{
		int flag;
		std::string literal[7] = {"nan", "nanf" "-inf", "+inf", "0", "+inff", "-inff"};
		void (Type_conversion::*memberFunction[7])(void) = {&Type_conversion::Nan, &Type_conversion::Nanf, &Type_conversion::Minus_inf, &Type_conversion::Plus_inf, &Type_conversion::Zero, &Type_conversion::Minus_inff, &Type_conversion::Plus_inff}; 
		
		flag = 0;
		for (int i = 0; i < 5; i++)
		{
			if (str == literal[i])
			{
				(this->*memberFunction[i])();
				flag = 1;
			}
		}
		if (flag == 0)
		{
			type_int = static_cast<int>(std::stoi(str));
			if (type_int > 0 && type_int < 177)
				std::cout << "char: " << static_cast<char>(type_int) <<std::endl;
			else
				std::cout << "char: "<< "impossible" << std::endl;
			std::cout << "int: " << static_cast<int>(std::stoi(str)) << std::endl;;
			std::cout << "float: " << static_cast<float>(std::stof(str)) << "f" <<std::endl;
			std::cout << "double: " << static_cast<double>(std::stod(str)) << std::endl; 
		
		}
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

Type_conversion::~Type_conversion()
{

}

Type_conversion::Type_conversion(Type_conversion &conversion)
{
	str = conversion.str;
	type_int = conversion.type_int;
	type_double = conversion.type_double;
	type_float = conversion.type_float;
	type_char = conversion.type_char;
}

Type_conversion &Type_conversion::operator=(Type_conversion &conversion)
{
	str = conversion.str;
	type_int = conversion.type_int;
	type_double = conversion.type_double;
	type_float = conversion.type_float;
	type_char = conversion.type_char;
	return (*this);
}

std::string Type_conversion::getstr() const
{
	return (str);
}

int Type_conversion::getint() const
{
	return (type_int);
}

float Type_conversion::getfloat() const
{
	return (type_float);
}

double Type_conversion::getdouble() const
{
	return (type_double);
}

char Type_conversion::getchar() const
{
	return (type_char);
}

const char* Type_conversion::CharExceptions::what() const throw()
{
	return ("The conversion failed.");
}


void Type_conversion::Nan()
{
	std::cout << "char: " << "impossible" << std::endl;
	std::cout << "int: " << "impossible" << std::endl;
	std::cout << "float: " << "nan" << std::endl;
	std::cout << "double: " << "nan" << std::endl;
}

void Type_conversion::Nanf()
{
	std::cout << "char: " << "impossible" << std::endl;
	std::cout << "int: " << "impossible" << std::endl;
	std::cout << "float: " << "nan" << std::endl;
	std::cout << "double: " << "nan" << std::endl;
}

void Type_conversion::Minus_inf()
{
	std::cout << "char: " << "impossible" << std::endl;
	std::cout << "int: " << "impossible" << std::endl;
	std::cout << "float: " << "-inf" << std::endl;
	std::cout << "double: " << "-inf" << std::endl;
}

void Type_conversion::Plus_inf()
{
	std::cout << "char: " << "impossible" << std::endl;
	std::cout << "int: " << "impossible" << std::endl;
	std::cout << "float: " << "+inf" << std::endl;
	std::cout << "double: " << "+inf" << std::endl;
}

void Type_conversion::Zero()
{
	std::cout << "char: " << " Non displayable" << std::endl;
	std::cout << "int: " << "0" << std::endl;
	std::cout << "float: " << "0.0" << std::endl;
	std::cout << "double: " << "0.0f" << std::endl;
}

void Type_conversion::Minus_inff()
{
	std::cout << "char: " << "impossible" << std::endl;
	std::cout << "int: " << "impossible" << std::endl;
	std::cout << "float: " << "-inf" << std::endl;
	std::cout << "double: " << "-inf" << std::endl;
}

void Type_conversion::Plus_inff()
{
	std::cout << "char: " << "impossible" << std::endl;
	std::cout << "int: " << "impossible" << std::endl;
	std::cout << "float: " << "+inf" << std::endl;
	std::cout << "double: " << "+inf" << std::endl;
}