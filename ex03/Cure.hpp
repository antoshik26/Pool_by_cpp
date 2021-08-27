#ifndef CURE_HPP
#define CURE_HPP
#include <iostream>

class Cure : public AMateria
{
	public:
		Cure();
		~Cure();
		Cure(Cure const &cure);
		Cure &operator=(Cure const &cure);

		virtual AMateria* clone();
		virtual void Use(ICharacter &cure);
};

#endif