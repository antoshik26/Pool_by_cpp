#ifndef INTERN_HPP
#define INTERN_HPP
class Form;
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
		class IncorrectForm : public std::exception
		{
			virtual const char* what() const throw();
		};
	public:
		Intern();
		~Intern();
		Form* CreateShrubberyCreationForm(std::string target);
		Form* CreatePresidentialPardonForm(std::string target);
		Form* CreateRobotomyRequestForm(std::string target);
		Form* makeForm(std::string nameForm, std::string);
};

#endif