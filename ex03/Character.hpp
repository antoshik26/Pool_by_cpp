#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include "ICaracter.hpp"
#include "AMateric.hpp"

class Character : public ICharacter
{
	private:
		std::string name;
		AMateria *materia[4];
		Character(void);
	public:
		Character();
		//~Character();
		Character(Character const &obj);
		Character &operator=(Character const &obj);
		
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif