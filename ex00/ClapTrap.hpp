#ifndef CLAPTRAP_H
#define CLAPTRAP_H
#include <iostream>

class Trap
{
	private:
		std::string name;
		int	Hitpoints;
		int Energy_points;
		int Attack_damage;
	public:
		Trap(std::string name_trap);
		~Trap();
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