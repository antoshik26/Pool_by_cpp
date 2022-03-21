#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::~Zombie()
{
	
}

void Zombie::announce(void)
{
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setname( std::string name )
{
	this->name = name;
}

std::string Zombie::getname()
{
	return (name);
}

