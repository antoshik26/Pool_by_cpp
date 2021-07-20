#include <iostream>
#include "death_note.hpp"

persen_in_death_note::persen_in_death_note(void)
{

}

persen_in_death_note::~persen_in_death_note(void)
{
	
}


void persen_in_death_note::print_death_note()
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(i < 8)
	{
		std::cout << persen->index;
		std::cout << "|";
		std::cout << persen->first_name;
		std::cout << "|"; 
		std::cout << persen->last_name;
		std::cout << "|";
		std::cout << persen->nickname << std::endl;
		i++;
	}
}

void persen_in_death_note::add_persen_in_death_note()
{
	std::cout << "Enter first name" << std::endl;
	std::cin >> persen->first_name;
	std::cout << "Enter last name" << std::endl;
	std::cin >> persen->last_name;
	std::cout << "Enter nickname" << std::endl;
	std::cin >> persen->nickname;
	std::cout << "Enter phone number" << std::endl;
	std::cin >> persen->phone_number;
	std::cout << "Enter darkest secret" << std::endl;
	std::cin >> persen->darkest_secret;
}