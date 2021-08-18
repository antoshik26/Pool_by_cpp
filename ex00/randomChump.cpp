#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie *newZombie;

	newZombie = new Zombie();
	newZombie->setname(name);
	//newZombie = newZombie(name);
	newZombie->announce();
	delete(newZombie);
}