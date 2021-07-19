#ifndef DEATH_NOTE_HPP
# define DEATH_NOTE_HPP

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
	private:

}

void print_death_note(persen_in_death_note &persen)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(i < 8)
	{

		std::cout << /*persen->index*/ | /*persen->first_name*/ | /*persen->last_name*/ | /*persen->nicname*/ << endl;
		i++;
	}
}

void add_persen_in_death_note(persen_in_death_note &persen)
{
	std::cout << "Enter first name" << endl;
	// std::cin >> persen->first_name;
	std::cout << "Enter last name" << endl;
	// std::cin >> 
	std::cout << "Enter nickname" << endl;
	// std::cin >>
	std::cout << "Enter phone number" << endl;
	// std::cin >>
	std::cout << "Enter darkest secret" << endl;
	// std::cin >>
}

#endif