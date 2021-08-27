#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		~Animal();
		Animal(Animal const &animal);
		Animal &operator=(Animal const &animal);
		virtual std::string getType() const;
		//virtual void setType(std::string new_type);
		virtual void makeSound() const;
};

#endif