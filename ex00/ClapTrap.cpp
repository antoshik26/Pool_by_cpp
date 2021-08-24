#include "ClapTrap.hpp"

Trap::Trap(std::string name_trap)
{
	name = name_trap;
	Hitpoints = 10;
	Energy_points = 10;
	Attack_damage = 0;
	std::cout << "Constructor called" << std::endl;
}

int Trap::getHitpoints()
{
	return (Hitpoints);
}

void Trap::setHitpoints(int new_Hitpoints)
{
	Hitpoints = new_Hitpoints;
}

std::string Trap::getName()
{
	return (name);
}

void Trap::setName(std::string new_NAME)
{
	name = new_NAME;
}

int Trap::getEnergy_points()
{
	return (Energy_points);
}

void Trap::setEnergy_points(int new_Energy_points)
{
	Energy_points = new_Energy_points;
}

int Trap::getAttack_deamge()
{
	return(Attack_damage);
}

void Trap::setAttack_deamge(int new_Attack_deamge)
{
	Attack_damage = new_Attack_deamge;
}

Trap::~Trap()
{
	std::cout << "Destructor called" << std::endl;
}

void Trap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << this->getName() << " attack " << target << ", causing " << this->getAttack_deamge() << " points of damage!" << std::endl;
}

void Trap::takeDamege(unsigned int amount)
{
	Energy_points -= amount;
	std::cout << "ClapTrap " << this->getName() << " got a damege of " << amount << " points." << std::endl;
}

void Trap::beRepaired(unsigned int amount)
{
	Energy_points += amount;
	std::cout << "ClapTrap " << this->getName() << " replenished the energy on " << amount << " points." << std::endl;
}