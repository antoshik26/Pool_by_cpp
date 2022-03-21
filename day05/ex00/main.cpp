#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat* bureaucrat = new Bureaucrat("evel", 1);
	Bureaucrat* bureaucrat2 = new Bureaucrat("evel2", 150);
	Bureaucrat* bureaucrat3 = new Bureaucrat("evel3", 151);
	Bureaucrat* bureaucrat4 = new Bureaucrat("evel4", 0);

	bureaucrat->upgradeBureaucrat();
	std::cout << (*bureaucrat) << std::endl;
	bureaucrat2->lowgradeBureaucrat();
	std::cout << (*bureaucrat2) << std::endl;
	delete(bureaucrat);
	delete(bureaucrat2);
	delete(bureaucrat3);
	delete(bureaucrat4);
	return (0);
}