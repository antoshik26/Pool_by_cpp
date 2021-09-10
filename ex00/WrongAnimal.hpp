#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(WrongAnimal const &animal);
		WrongAnimal &operator=(WrongAnimal const &animal);
		virtual std::string getType() const;
		//virtual void setType(std::string new_type);
		virtual void makeSound() const;
	
};

#endif