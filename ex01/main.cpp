#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie;
	std::string name;

	name = "GOMEZ";
	zombie = zombieHorde(10, "GOMEZ");
	delete(zombie);
	return (0);
}