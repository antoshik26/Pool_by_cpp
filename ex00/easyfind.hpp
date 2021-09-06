#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <map>
#include <vector>
#include <list>
#include <iterator>

class NoFindEasy : public std::exception
{
	virtual const char* what() const throw();
};

const char* NoFindEasy::what() const throw()
{
	return ("Not found");
}

template <typename T>
int easyfind(T &contener, int find)
{
	typename T::iterator i = contener.begin();
	typename T::iterator j = contener.end();
	while( i != j)
	{
		if (*i == find)
		{
			return (find);
		}
		i++;
	}
	throw NoFindEasy();
	return (0);
} 

#endif