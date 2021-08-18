#include "HumanA.hpp"

HumanA::HumanA(std::string name_human, Weapon weapon)
{
	name = name_human;
	this->weapon = weapon;
}

HumanA::~HumanA()
{
	
}

void HumanA::attack()
{
	std::cout << name << "attacks with his" << weapon.getWeapon() << std::endl;
}

void HumanA::setname()
{

}

std::string HumanA::getname()
{
	return(name);
}