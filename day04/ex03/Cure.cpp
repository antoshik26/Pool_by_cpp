#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{

}

Cure::~Cure()
{
	
}

Cure::Cure(Cure const &cure) : AMateria(cure)
{
}

Cure &Cure::operator=(Cure const &cure)
{
	AMateria::operator=(cure);
	return (*this);
}

AMateria* Cure::clone() const
{
	Cure *new_cure = new Cure();
	return (new_cure);	
}

void Cure::use(ICharacter &cure)
{
	std::cout << "heals " << cure.getName() << " wounds" << std::endl;
}