#include "Character.hpp"

Character::Character(std::string name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		materia[i] = NULL;
}

Character::Character(Character const &obj)
{
	name = obj.name;
	for (int i = 0; i < 4; i++)
		materia[i] = obj.materia[i];
}

Character &Character::operator=(Character const &obj)
{
	name = obj.name;
	for (int i = 0; i < 4; i++)
		materia[i] = obj.materia[i];
	return (*this);
}

Character::~Character()
{

}

std::string const &Character::getName() const
{
	return (name);
}

void Character::equip(AMateria* m)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (materia[i] == NULL)
		{
			materia[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 4)
		materia[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 4)
		materia[idx]->use(target);
}