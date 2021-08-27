#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		~Brain();
		Brain(Brain const &brain);
		Brain &operator=(Brain const &brain);
		std::string getidea(int i);
		std::string getarrayideas();
		void setidea(std::string idea, int i);
		void setideas();
};

#endif