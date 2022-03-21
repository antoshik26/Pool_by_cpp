#include <iostream>
#include "death_note.hpp"

persen_in_death_note::persen_in_death_note(void)
{

}

persen_in_death_note::~persen_in_death_note(void)
{
	
}

void persen_in_death_note::add_persen()
{
	std::cout << "Enter first name" << std::endl;
	std::cin >> first_name;
	std::cout << "Enter last name" << std::endl;
	std::cin >> last_name;
	std::cout << "Enter nickname" << std::endl;
	std::cin >> nickname;
	std::cout << "Enter phone number" << std::endl;
	std::cin >> phone_number;
	std::cout << "Enter darkest secret" << std::endl;
	std::cin >> darkest_secret;
}

void print_death_note_persen_features(std::string features)
{
	if (features.length() > 10)
	{
		for (unsigned int i = 0; i < 10; i++)
		{
			std::cout << features[i];
		}
	}
	if (features.length() < 10)
	{
		for (unsigned int i = 0; i < 10 - features.length(); i++)
		{
			std::cout << " ";
		}
		for (unsigned int i = 0; i < features.length(); i++)
		{
			std::cout << features[i];
		}
	}
	if (features.length() == 10)
	{
		std::cout << features;
	}
}

void persen_in_death_note::print_death_note_persen(int index)
{

	if (first_name != "")
	{
		std::cout << "|";
		std::cout << "          " << index;
		std::cout << " | ";
		print_death_note_persen_features(first_name);
		std::cout << " | ";
		print_death_note_persen_features(last_name);
		std::cout << " | ";
		print_death_note_persen_features(nickname);
		std::cout << " |" << std::endl;
	}
}