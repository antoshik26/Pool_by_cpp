#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap Evel_trap("Evel_trap");
	FragTrap Trapa("Good_trap");
	
	Evel_trap.attack("Gomez");
	Trapa.attack("Li");
	Evel_trap.takeDamege(2);
	Trapa.takeDamege(100);
	Evel_trap.beRepaired(7);
	Trapa.beRepaired(100);
	Trapa.highFivesGuys();
	return (0);
}