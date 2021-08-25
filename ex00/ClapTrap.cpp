#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name_trap)
{
	name = name_trap;
	Hitpoints = 10;
	Energy_points = 10;
	Attack_damage = 0;
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &trap)
{
	this->name = trap.name;
	this->Hitpoints = trap.Hitpoints;
	this->Energy_points = trap.Energy_points;
	this->Attack_damage = trap.Attack_damage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &trap)
{
	this->name = trap.name;
	this->Hitpoints = trap.Hitpoints;
	this->Energy_points = trap.Energy_points;
	this->Attack_damage = trap.Attack_damage;
	return (*this);
}

int ClapTrap::getHitpoints()
{
	return (Hitpoints);
}

void ClapTrap::setHitpoints(int new_Hitpoints)
{
	Hitpoints = new_Hitpoints;
}

std::string ClapTrap::getName()
{
	return (name);
}

void ClapTrap::setName(std::string new_NAME)
{
	name = new_NAME;
}

int ClapTrap::getEnergy_points()
{
	return (Energy_points);
}

void ClapTrap::setEnergy_points(int new_Energy_points)
{
	Energy_points = new_Energy_points;
}

int ClapTrap::getAttack_deamge()
{
	return(Attack_damage);
}

void ClapTrap::setAttack_deamge(int new_Attack_deamge)
{
	Attack_damage = new_Attack_deamge;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor ClapTrap called" << std::endl;
}

void ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << this->getName() << " attack " << target << ", causing " << this->getAttack_deamge() << " points of damage!" << std::endl;
}

void ClapTrap::takeDamege(unsigned int amount)
{
	Energy_points -= amount;
	std::cout << "ClapTrap " << this->getName() << " got a damege of " << amount << " points." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	Energy_points += amount;
	std::cout << "ClapTrap " << this->getName() << " replenished the energy on " << amount << " points." << std::endl;
}