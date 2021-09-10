#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "PETROV";
}

WrongAnimal::~WrongAnimal()
{

}

WrongAnimal::WrongAnimal(WrongAnimal const &animal)
{
	type = animal.type;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &animal)
{
	type = animal.type;
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return (type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "I am PETROV. I'm looking at the spire." << std::endl;
}