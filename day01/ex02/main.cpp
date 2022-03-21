#include <iostream>
#include <iomanip>
#include <string>


int main(void)
{
	std::string brainz;
	std::string *ptr = &brainz;
	std::string &ref = brainz;

	brainz = "HI THIS IS BRAIN";
	std::cout << brainz << std::endl;
	std::cout << &(brainz) << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << ptr << std::endl;
	std::cout << ref << std::endl;
	std::cout << &ref << std::endl;
	return (0);
}