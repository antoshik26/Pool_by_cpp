#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon weapon;
		std::string name;
	public:
		HumanB(std::string name_human);
		~HumanB();
		void attack();
		void setWeapon(Weapon weapon);
};

#endif