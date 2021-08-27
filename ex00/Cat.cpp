#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
}

Cat::~Cat()
{

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
