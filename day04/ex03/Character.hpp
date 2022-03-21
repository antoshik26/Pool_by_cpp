#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include "ICaracter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string name;
		AMateria *materia[4];
		Character(void);
	public:
		Character(std::string name);
		Character(Character const &obj);
		Character &operator=(Character const &obj);
		
		virtual ~Character();
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

#endif