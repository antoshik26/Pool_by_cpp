#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat* bureaucrat = new Bureaucrat("evel", 1);
	Bureaucrat* bureaucrat2 = new Bureaucrat("evel2", 150);
	ShrubberyCreationForm* form1 = new ShrubberyCreationForm("sdfhdfg");

	bureaucrat->executeForm(*form1);
	
	form1->beSigned(*bureaucrat);
	bureaucrat2->executeForm(*form1);

	delete(bureaucrat);
	delete(bureaucrat2);
	delete(form1);
	return (0);
}