#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "death_note.hpp"

class Phonebook
{
	private:
		int index;
		persen_in_death_note persen[8];
	public:
		Phonebook(void);
		~Phonebook(void);
		void print_basement();
		void print_head();
		void add_persen_in_death_note();
		void print_death_note();
		void print_death_note_all();
};

#endif