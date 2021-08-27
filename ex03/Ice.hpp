#ifndef ICE_HPP
#define ICE_HPP
#include <iostream>

class Ice : public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(Ice const &ice);
		Ice &operator=(Ice cosnt &ice);

		virtual AMateria* clone();
		virtual void Use(ICharacter &ice);
};

#endif