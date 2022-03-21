#include "AMateria.hpp"
#include "ICaracter.hpp"

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

std::string const &AMateria::getType() const
{
	return (type);
}

AMateria::AMateria(AMateria const &materia)
{
	type = materia.type;
}

AMateria &AMateria::operator=(AMateria const &materia)
{
	type = materia.type;
	return (*this);
}

AMateria::~AMateria()
{
	
}