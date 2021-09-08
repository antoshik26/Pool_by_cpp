#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	ClapTrap Evel_trap("Evel_trap");
	FragTrap Trapa("Good_trap");
	ScavTrap Gard_trap("Gard_trap");
	DiamondTrap Monster("Monster");
	
	std::cout << std::endl;
	Evel_trap.attack("Gomez");
	Evel_trap.takeDamege(2);
	Evel_trap.beRepaired(7);
	std::cout << std::endl;
	Trapa.attack("Li");
	Trapa.takeDamege(100);
	Trapa.beRepaired(100);
	Trapa.highFivesGuys();
	std::cout <<  std::endl;
	Gard_trap.attack("Gorn");
	Gard_trap.takeDamege(50);
	Gard_trap.beRepaired(50);
	Gard_trap.guardGate();
	std::cout << std::endl;
	Monster.attack("Diego");
	Monster.takeDamege(20);
	Monster.beRepaired(20);
	Monster.whoAmI();
	std::cout << std::endl;
	return (0);
}