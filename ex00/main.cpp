#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	WrongAnimal *gru1 = new WrongAnimal();
	WrongCat *gru2 = new WrongCat();

	std::cout << gru1->getType() << " " << std::endl;
	std::cout << gru2->getType() << " " << std::endl;
	gru1->makeSound();
	gru2->makeSound();

	delete(meta);
	delete(j);
	delete(i);
	delete(gru1);
	delete(gru2);
	return (0);
}