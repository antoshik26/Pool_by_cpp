#include "Karen.hpp"

Karen::Karen() 
{
	name_member_function[0] = "debug";
	name_member_function[1] = "info";
	name_member_function[2] = "warning";
	name_member_function[3]	= "error";
	member_function[0] = &Karen::debug;
	member_function[1] = &Karen::info;
	member_function[2] = &Karen::warning;
	member_function[3] = &Karen::error;
}

Karen::~Karen() {}

void Karen::debug(void)
{
	std::cout << "I love to get extra baconfor my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "I cannot believe adding extrabacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl; 
}

void Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (name_member_function[i] == level)
			break;
		i++;
	}
	(this->*member_function[i])();
}