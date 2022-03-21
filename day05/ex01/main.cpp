#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat* bureaucrat = new Bureaucrat("evel", 1);
	Bureaucrat* bureaucrat2 = new Bureaucrat("evel2", 150);
	Form* form = new Form("1", 1, 1);
	Form* form2 = new Form("2", 140, 150);
	Form* form3 = new Form("3", 151, 151);
	Form* form4 = new Form("4", 0, 0);

	form->beSigned(*bureaucrat);
	form2->beSigned(*bureaucrat2);

	delete(bureaucrat);
	delete(bureaucrat2);
	delete(form);
	delete(form2);
	delete(form3);
	delete(form4);
	return (0);
}