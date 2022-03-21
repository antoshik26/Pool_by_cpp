#include "iter.hpp"
#include <iostream>

void print_array(std::string const &str)
{
	std::cout << str << std::endl;
}

void print_array2(int const &num)
{
	std::cout << num << std::endl;
}

int main()
{
	std::string str[5] = {"afsdghg", "asdf", "aesdfg", "asd", "asdfg"};
	int i[10] = {1, 10, 2, 20, 3, 30, 4, 40, 5, 50};

	iter(str, 5, print_array);
	iter(i, 10, print_array2);
	return (0);
}