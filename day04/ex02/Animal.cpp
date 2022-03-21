#include "Animal.hpp"

Animal::Animal()
{
	type = "NUN";
}

Animal::~Animal()
{

}

Animal::Animal(Animal const &animal)
{
	type = animal.type;
}

Animal &Animal::operator=(Animal const &animal)
{
	type = animal.type;
	return (*this);
}

std::string Animal::getType() const
{
	return (type);
}

void Animal::makeSound() const
{
	std::cout << "An unintelligible hum." << std::endl;
}

