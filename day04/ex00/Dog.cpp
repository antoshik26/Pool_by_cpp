#include "Dog.hpp"

Dog::Dog() : Animal()
{
	type = "Dog";
}

Dog::~Dog()
{

}

Dog::Dog(Dog const &dog)
{
	type = dog.type;
}

Dog &Dog::operator=(Dog const &dog)
{
	type = dog.type;
	return (*this);
}

std::string Dog::getType() const
{
	return (type);
}

void Dog::makeSound() const
{
	std::cout << this->getType() << " sey gav." << std::endl;
}
