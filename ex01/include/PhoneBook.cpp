#include "PhoneBook.hpp"

Phonebook::Phonebook(void)
{
	this->index = 0;
}

Phonebook::~Phonebook(void)
{
	
}

void Phonebook::print_basement()
{
	std::cout << "|---------------------------------------------------|" << std::endl;
}

void Phonebook::print_head()
{
	std::cout << "|---------------------------------------------------|" << std::endl;
	std::cout << "|   Index    | First Name |  Last Name |  Nickname  |" << std::endl;
	std::cout << "|---------------------------------------------------|" << std::endl;
}

void Phonebook::print_death_note()
{
	persen[index].print_death_note_persen(index);
}

void Phonebook::print_death_note_all()
{
	int i;
	int j;

	i = 0;
	j = 0;
	print_head();
	while(i < 8)
	{
		persen[i].print_death_note_persen(i + 1);
		i++;
	}
	print_basement();
}

void Phonebook::add_persen_in_death_note()
{
	persen[index].add_persen();
	if (index != 8)
		index++;
}