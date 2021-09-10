#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* brain_cat;
	public:
		Cat();
		~Cat();
		Cat(Cat const &cat);
		Cat &operator=(Cat const &cat);
		virtual std::string getType() const;
		//virtual void setType(std::string new_type);
		virtual void makeSound() const;
		virtual std::string getidea(int i) const; 
		// virtual std::string getarrayideas();
		virtual void setidea(std::string idea, int i) const;
		// virtual void setideas();
};

#endif
