#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
	FragTrap(std::string);
	FragTrap(FragTrap const &trap);
	FragTrap &operator=(FragTrap const &trap);
	~FragTrap();
	void highFivesGuys(void);
};

#endif