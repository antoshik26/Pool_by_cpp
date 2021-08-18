#include "Weapon.hpp"

Weapon::Weapon(std::string weapon_name)
{
	name = weapon_name;
}

Weapon::~Weapon()
{

}

Weapon::Weapon()
{

}
 
void Weapon::setType(std::string weapon)
{
	name = weapon;
}

std::string Weapon::getWeapon()
{
	return(name);
}