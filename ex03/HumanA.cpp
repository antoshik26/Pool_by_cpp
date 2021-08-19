#include "HumanA.hpp"

HumanA::HumanA(std::string name_human, Weapon &weapon):
	_weapon(weapon)
{
	name = name_human;
	_weapon = weapon;
}

HumanA::~HumanA()
{
	
}

void HumanA::attack()
{
	std::cout << name << " attacks with his" << _weapon.getWeapon() << std::endl;
}

void HumanA::setname()
{

}

std::string HumanA::getname()
{
	return(name);
}