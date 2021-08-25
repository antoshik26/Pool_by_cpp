#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name_trap) : ClapTrap(name_trap)
{
	Hitpoints = 100;
	Energy_points = 100;
	Attack_damage = 30;
	std::cout << "Constructor FragTrap called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &trap) : ClapTrap(trap)
{
	this->name = trap.name;
	this->Hitpoints = trap.Hitpoints;
	this->Energy_points = trap.Energy_points;
	this->Attack_damage = trap.Attack_damage;
}

FragTrap &FragTrap::operator=(FragTrap const &trap)
{
	this->name = trap.name;
	this->Hitpoints = trap.Hitpoints;
	this->Energy_points = trap.Energy_points;
	this->Attack_damage = trap.Attack_damage;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrap called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Positive high fives request." << std::endl;
}