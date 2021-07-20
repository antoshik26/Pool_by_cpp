#ifndef DEATH_NOTE_HPP
# define DEATH_NOTE_HPP
# include <iostream>
# include <iomanip>
# include <string>

class persen_in_death_note
{
	public:
		int			index;
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		persen_in_death_note(void);
		~persen_in_death_note(void);
		void print_death_note();
		void add_persen_in_death_note();
};

#endif