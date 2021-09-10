#include "Dog.hpp"

Dog::Dog() : Animal()
{
	type = "Dog";
	brain_dog = new Brain();
}

Dog::~Dog()
{
	delete(brain_dog);
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

std::string Dog::getidea(int i) const
{
	return (brain_dog->getidea(i));
}

// std::string Dog::getarrayideas()
// {

// }

void Dog::setidea(std::string idea, int i) const
{
	brain_dog->setidea(idea, i);
}

// void Dog::setideas()
// {

// }