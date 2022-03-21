#include "Base.hpp"
#include "Entry_class.hpp"
#include <iostream>

Base * generate(void)
{
	int rand_class;
	Base *b;
	rand_class = std::rand() % 3 + 1;
	switch (rand_class)
	{
		case (1):
		{	
			b = new A();
			break;
		}
		case (2):
		{
			b = new B();
			break;
		}
		case (3):
		{
			b = new C();
			break;
		}
	}
	std::cout << "rand_class = " << rand_class << std::endl;
	return (b);
}

void identify(Base* p)
{
	A *type1 = dynamic_cast<A*>(p);
	if (type1 != NULL)
	{
		std::cout << "class A " << type1 << std::endl;
	}
	B *type2 = dynamic_cast<B*>(p);
	if (type2 != NULL)
	{
		std::cout << "class B " << type2 << std::endl;
	}
	C *type3 = dynamic_cast<C*>(p);
	if (type3 != NULL)
	{
		std::cout << "class C " << type3 << std::endl;
	}
}

void identify(Base& p)
{
	try
	{
		A &type1 = dynamic_cast<A&>(p);
		std::cout << "class A " << &type1 << std::endl;
		return;
	}
	catch (std::exception &e)
	{
		std::cout << "Not A" << std::endl;
	}
	try
	{
		B &type2 = dynamic_cast<B&>(p);
		std::cout << "class B " << &type2 << std::endl;
		return;
	}
	catch (std::exception &e)
	{
		std::cout << "Not B" << std::endl;
	}
	try
	{
		C &type3 = dynamic_cast<C&>(p);
		std::cout << "class C " << &type3 << std::endl;
		return;
	}
	catch (std::exception &e)
	{
		std::cout << "Not C" << std::endl;
	}
}

int main()
{
	srand(time(NULL));
	Base *rand_class = generate();
	identify(rand_class);
	identify(*rand_class);

	delete (rand_class);
	return (0);
}