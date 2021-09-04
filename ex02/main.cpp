#include "Array.hpp"

int main()
{
	unsigned int n = 5;
	Array<int> a(n);
	a[1] = 20;
	std::cout << a[0] << std::endl;
	return (0);
}