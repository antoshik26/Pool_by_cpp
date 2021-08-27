#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateria.hpp"
#include "AMateric.hpp"

class MateriaSource : public IMateria
{
	private:
		AMateria *materia[4];
	public:
		MateriaSource();
		MateriaSource(MateriaSource cosnt &materia);
		MateriaSource &operator=(MateriaSource cosnt &materia);
		
		virtual ~IMateriaSource()
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
};

#endif