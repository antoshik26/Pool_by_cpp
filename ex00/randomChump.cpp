#include "Zombie.hpp"

void Zombie::randomChump( std::string name )
{
	Zombie *Zombie;

	Zombie = newZombie(name);
	Zombie->announce();
	delete(Zombie);
}