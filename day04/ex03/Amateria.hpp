#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include "ICaracter.hpp"
class AMateria;

class AMateria
{
	protected:
		AMateria(void);
	private:
		std::string type;
	public:
		~AMateria();
		AMateria(AMateria const &materia);
		AMateria &operator=(AMateria const &materia);

		AMateria(std::string const & type);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;
};

#endif