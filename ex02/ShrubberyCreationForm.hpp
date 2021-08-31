#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string target;
	public:
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationFormconst &obj);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm &obj);
		std::string getTarget();
		virtual void execute(Bureaucrat const &bureaucrat);
};

#endif