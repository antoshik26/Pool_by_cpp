#include "Phonebook.hpp"

void Phonebook::print_death_note(persen_in_death_note *persen)
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
