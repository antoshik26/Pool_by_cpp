#include <iostream>
#include "./include/PhoneBook.hpp"

int main(void)
{
	int i;
	std::string reading;
	Phonebook phonebook;
	
	i = 0;
	while (1!= 0)
	{
		std::cout << "When a command has been correctly executed, the program waits for another ADD or SEARCH command until an EXIT command." << std::endl;
		std::cin >> reading;
		if (reading == "ADD")
		{
			phonebook.add_persen_in_death_note();
			if (i == 8)
				i = -1;
			i++;
		}
		else if (reading == "SEARCH")
		{
			phonebook.print_death_note_all();
		}
		else if (reading == "END")
		{
			return (0);
		}
	}
	return (0);
}