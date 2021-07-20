#include "death_note.hpp"
#include <iostream>

int main(void)
{
	int i;
	std::string reading;
	persen_in_death_note persen[8];
	
	while (1!= 0)
	{
		std::cout << "When a command has been correctly executed, the program waits for another ADD or SEARCH command until an EXIT command." << std::endl;
		std::cin >> reading;
		if (reading == "ADD")
		{
			persen[i].add_persen_in_death_note();
		}
		else if (reading == "SEARCH")
		{
			print_death_note(persen);
		}
		else if (reading == "END")
		{
			return (0);
		}
	}
	return (0);
}