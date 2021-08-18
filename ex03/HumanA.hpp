#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon weapon;
	public:
		void attack();
		HumanA(std::string name_human, Weapon weapon);
		~HumanA();
		void setname();
		std::string getname();
};

#endif