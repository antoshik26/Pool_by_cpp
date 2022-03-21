#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *newZombie;

	newZombie = new Zombie();
	newZombie->setname(name);
	return (newZombie);
}

void randomChump( std::string name )
{
	Zombie *newZombie;

	newZombie = new Zombie();
	newZombie->setname(name);
	//newZombie = newZombie(name);
	newZombie->announce();
	delete(newZombie);
}

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *first_zombie;

	first_zombie = newZombie(name);
	first_zombie->announce();
	for (int i = 0; i < N; i++)
	{
		randomChump(name);
	}
	return (first_zombie);
}