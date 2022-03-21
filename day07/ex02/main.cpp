#include "Array.hpp"

int main()
{
	try
	{
		unsigned int n = 5;
		Array<int> a(n);
		a[1] = 20;
		std::cout << a[0] << std::endl;
		std::cout << a[1] << std::endl;
		std::cout << a[20] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() <<std::endl;
	}
	return (0);
}