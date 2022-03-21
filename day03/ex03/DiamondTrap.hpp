#ifndef FIAMONDTRAP_HPP
#define FIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string _name;
	public:
		DiamondTrap(std::string name_trap);
		DiamondTrap(DiamondTrap const &traP);
		using ScavTrap::attack;
		DiamondTrap &operator=(DiamondTrap const &trap);
		~DiamondTrap();
		void whoAmI();
};

#endif