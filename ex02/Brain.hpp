#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		virtual ~Brain();
		Brain(Brain const &brain);
		Brain &operator=(Brain const &brain);
		virtual std::string getidea(int i);
		// virtual std::string getarrayideas();
		virtual void setidea(std::string idea, int i);
		virtual void setideas();
};

#endif