#ifndef CLAPTRAP_H
#define CLAPTRAP_H
#include <iostream>

class ClapTrap
{
	private:
		std::string name;
		int	Hitpoints;
		int Energy_points;
		int Attack_damage;
	public:
		ClapTrap(std::string name_trap);
		ClapTrap(const ClapTrap &trap);
		ClapTrap &operator=(ClapTrap const &traP);
		~ClapTrap();
		int getHitpoints();
		void setHitpoints(int new_Hitpoints);
		std::string getName();
		void setName(std::string new_NAME);
		int getEnergy_points();
		void setEnergy_points(int new_Energy_points);
		int getAttack_deamge();
		void setAttack_deamge(int new_Attack_deamge);
		void attack(std::string const &target);
		void takeDamege(unsigned int amount);
		void beRepaired(unsigned int amount);
		
};

#endif