#ifndef ZOMPIE_HPP
#define ZOMPIE_HPP
#include <iostream>
#include <iomanip>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		~Zombie();
		void announce( void );
		void setname( std::string name );
		std::string getname();
};
Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif