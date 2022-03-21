#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{

}

Ice::~Ice()
{

}

Ice::Ice(Ice const &ice) : AMateria(ice)
{

}

Ice &Ice::operator=(Ice const &ice)
{
	AMateria::operator=(ice);
	return (*this);
}

AMateria* Ice::clone() const
{
	Ice *new_ice = new Ice();
	return (new_ice);
}

void Ice::use(ICharacter &ice)
{
	std::cout << "Shoots an ice bolt at " << ice.getName() << std::endl;
}