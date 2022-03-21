#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Form* Intern::CreateShrubberyCreationForm(std::string target)
{
	return (new ShrubberyCreationForm (target));
}

Form* Intern::CreatePresidentialPardonForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form* Intern::CreateRobotomyRequestForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form* Intern::makeForm(std::string nameForm, std::string target)
{
	try
	{
		std::string nameForms[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
		Form* (Intern::*memberFunction[3])(std::string target) =  {&Intern::CreateRobotomyRequestForm, &Intern::CreatePresidentialPardonForm, &Intern::CreateShrubberyCreationForm};

		for (int i = 0; i < 3; i++)
		{
			if (nameForms[i] == nameForm)
			{
				std::cout << "Intern create" << nameForms[i] << " form." << std::endl;
				return ((this->*memberFunction[i])(target));
			}
		}
			throw Intern::IncorrectForm();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (NULL);
}

const char* Intern::IncorrectForm::what() const throw()
{
	return ("Еhe intern does not know this form.");
}