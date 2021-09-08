#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name_trap) : ClapTrap(name_trap + "_clap_name"), FragTrap(name_trap), ScavTrap(name_trap)
{
	this->_name = name_trap;
	ClapTrap::setHitpoints(FragTrap::Energy_points);
	ClapTrap::setEnergy_points(FragTrap::Energy_points);
	ClapTrap::setAttack_deamge(FragTrap::Attack_damage);
	std::cout << "DiamondTrap consructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &trap) : ClapTrap(trap), FragTrap(trap), ScavTrap(trap) 
{
	this->name = trap.name;
	this->Hitpoints = trap.Hitpoints;
	this->Energy_points = trap.Energy_points;
	this->Attack_damage = trap.Attack_damage;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &trap)
{
	this->name = trap.name;
	this->Hitpoints = trap.Hitpoints;
	this->Energy_points = trap.Energy_points;
	this->Attack_damage = trap.Attack_damage;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor DiamondTrap called" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << this->_name << ". Name claptrap is " << ClapTrap::name << "." << std::endl;
}