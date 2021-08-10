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
	std::cout << "|-------------------------------------------|" << std::endl;
}

void Phonebook::print_head()
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
}

void Phonebook::print_death_note()
{
	this->persen[this->index].print_death_note(this->index);
}

void Phonebook::print_death_note_all()
{
	int i;
	int j;

	i = 0;
	j = 0;
	this->print_head();
	while(i < 8)
	{
		this->persen[i].print_death_note(i);
		i++;
	}
	this->print_basement();
}

void Phonebook::add_persen_in_death_note()
{
	this->persen[this->index].add_persen(this->index);
	this->index++;
}