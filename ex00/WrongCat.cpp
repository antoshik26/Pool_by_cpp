#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "BASHIROV";
}


WrongCat::~WrongCat()
{

}

WrongCat::WrongCat(WrongCat const &animal)
{
	type = animal.type;
}

WrongCat &WrongCat::operator=(WrongCat const &animal)
{
	type = animal.type;
	(*this);
}

std::string WrongCat::getType() const
{
	return (type);
}

void WrongCat::makeSound() const
{
	std::cout << "I am BASHIROV. I'm looking at the spire." << std::endl;
}