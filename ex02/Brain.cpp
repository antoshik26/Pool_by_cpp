#include "Brain.hpp"

Brain::Brain()
{

}

Brain::~Brain()
{

}

Brain::Brain(Brain const &brain)
{
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = brain.ideas[i];
	}
}

Brain &Brain::operator=(Brain const &brain)
{
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = brain.ideas[i];
	}
	return (*this);
}

std::string Brain::getidea(int i)
{
	return(ideas[i]);
}

void Brain::setidea(std::string idea, int i)
{
	ideas[i] = idea;
}

void Brain::setideas()
{
	for (int i = 0; i < 100; i++)
	{
		std::cin >> ideas[i];
	}
}