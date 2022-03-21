#ifndef KAREN_HPP
#define KAREN_HPP
#include <iostream>

class Karen
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		std::string name_member_function[4];
		void (Karen::*member_function[4])(void); 
	public:
		void complain(std::string level);
		Karen();
		~Karen();
};

#endif