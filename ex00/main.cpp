#include "Type_conversion.hpp"
#include <iostream>

int main(int argc, char** argv)
{
	if (argc == 2)
	{
		Type_conversion type(argv[1]);
	}
	else
	{
		std::cout << "Invalid number of arguments." << std::endl;
	}
	return (0);
}