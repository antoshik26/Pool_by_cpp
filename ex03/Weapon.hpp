#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon
{
	private:
		std::string name;
	public:
		Weapon(std::string weapon);
		Weapon();
		~Weapon();
		std::string getWeapon();
		void setType(std::string weapon);
};

#endif 