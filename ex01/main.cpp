#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

int main()
{
	char a;
	const Dog* j = new Dog();
	const Cat* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound();
	j->makeSound();

	j->setidea("i wanna kill this cat...", 0);
	i->setidea("HATE HATE HATE this people", 0);

	std::cout << i->getidea(0) << std::endl;
	std::cout << j->getidea(0) << std::endl;

	Animal *Array[10];
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
		{
			Array[i] = new Cat();
		}
		else
		{
			Array[i] = new Dog();
		}
	}

	delete j;//should not create a leak
	delete i;
	for (int i = 0; i < 10; i++)
	{
		delete (Array[i]);
	}
	std::cout << "Сhecking for leaks" << std::endl;
	std::cin >> a;
	return (0);
}