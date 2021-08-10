#include <iostream>
#include "death_note.hpp"

persen_in_death_note::persen_in_death_note(void)
{

}

persen_in_death_note::~persen_in_death_note(void)
{
	
}

void persen_in_death_note::add_persen(int index)
{
	std::cout << "Enter first name" << std::endl;
	std::cin >> this->first_name;
	std::cout << "Enter last name" << std::endl;
	std::cin >> this->last_name;
	std::cout << "Enter nickname" << std::endl;
	std::cin >> this->nickname;
	std::cout << "Enter phone number" << std::endl;
	std::cin >> this->phone_number;
	std::cout << "Enter darkest secret" << std::endl;
	std::cin >> this->darkest_secret;
}