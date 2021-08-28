#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "ICaracter.hpp"
#include <iostream>

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *materia[4];
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &materia);
		MateriaSource &operator=(MateriaSource const &materia);
		
		virtual ~MateriaSource();
		virtual void learnMateria(AMateria* materia);
		virtual AMateria* createMateria(std::string const & type);
};

#endif