#include "HumanB.hpp"

HumanB::HumanB(std::string name_human)
{
	name = name_human;
}

HumanB::~HumanB()
{

}

void HumanB::attack()
{
	std::cout << name << " attacks with his" << _weapon->getWeapon() << std::endl;
}

void HumanB::setWeapon(Weapon &name_weapon)
{
	_weapon = &name_weapon;
}