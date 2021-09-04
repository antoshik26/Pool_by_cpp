#include "whatever.hpp"
#include <iostream>

int main(void)
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}

// #include <iostream>
// template<class Type>
// Type _min(Type a, Type b) {
//     if (a < b) {
//         return a;
//     }
//     return b;
// }

// int main(int argc, char** argv) {
//     std::cout << _min(1, 2) << std::endl;
//     std::cout << _min<double>(3.1, 1.2) << std::endl;
//     std::cout << _min<double>(5, 2.1) << std::endl; // oops!
//     return 0;
// }