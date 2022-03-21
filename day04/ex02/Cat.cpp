#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	brain_cat = new Brain();
}

Cat::~Cat()
{
	delete(brain_cat);
}

Cat::Cat(Cat const &cat)
{
	type = cat.type;
}

Cat &Cat::operator=(Cat const &cat)
{
	type = cat.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << type << " say may." << std::endl;
}

std::string Cat::getType() const
{
	return (type);
}

std::string Cat::getidea(int i) const
{
	return (brain_cat->getidea(i));
}

// virtual std::string getarrayideas()
// {

// }

void Cat::setidea(std::string idea, int i) const
{
	brain_cat->setidea(idea, i);
}

// virtual void setideas()
// {
	
// }
