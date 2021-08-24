#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name_trap) : ClapTrap(name_trap)
{
	this->setHitpoints(100);
	this->setEnergy_points(50);
	this->setAttack_deamge(20);
	std::cout << "Constructor ScavTrap called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->getName() << " have enterred in Gate kepper mode." << std::endl;
}
