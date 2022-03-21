#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie;

	zombie = newZombie("Gomez");
	zombie->announce();
	delete(zombie);
	randomChump("GOMEZ");
	return (0);
}