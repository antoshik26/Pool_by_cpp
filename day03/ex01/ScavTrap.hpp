#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name_trap);
		ScavTrap(ScavTrap const &trap);
		ScavTrap &operator=(ScavTrap const &trap);
		~ScavTrap();
		void guardGate();
};

#endif