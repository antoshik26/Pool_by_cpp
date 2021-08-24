#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap Evel_trap("Evel_trap");
	ScavTrap Gard_trap("Gard_trap");
	
	Evel_trap.attack("Gomez");
	Gard_trap.attack("Diego");
	Evel_trap.takeDamege(2);
	Gard_trap.takeDamege(7);
	Evel_trap.beRepaired(7);
	Gard_trap.beRepaired(10);
	Gard_trap.guardGate();
	return (0);
}