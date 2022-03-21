#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &materia)
{
	for (int i = 0; i < 4; i++)
	{
		this->materia[i] = materia.materia[i];
	}
}

MateriaSource &MateriaSource::operator=(MateriaSource const &materia)
{
	for (int i = 0; i < 4; i++)
	{
		this->materia[i] = materia.materia[i];
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	
}

void MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i] == NULL)
		{
			this->materia[i] = materia;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (materia[i]->getType() == type)
		{
			materia[i]->clone();
			return (materia[i]);
		}
	}
	return (NULL);
}