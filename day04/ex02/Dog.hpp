#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain_dog;
	public:
		Dog();
		~Dog();
		Dog(Dog const &dog);
		Dog &operator=(Dog const &dog);
		virtual std::string getType() const;
		//virtual void setType(std::string new_type);
		virtual void makeSound() const;
		virtual std::string getidea(int i) const;
		// virtual std::string getarrayideas();
		virtual void setidea(std::string idea, int i) const;
		// virtual void setideas();
};

#endif