#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
	this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj) : Form(obj)
{
	this->target = obj.target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{
	target = obj.target;
	return (*this);
}

std::string RobotomyRequestForm::getTarget() const
{
	return (target);
}

void RobotomyRequestForm::execute(Bureaucrat const &bureaucrat) const
{
	int rand;
	std::cout << "Bureaucrat " << bureaucrat.getname() << " took an order for execution." << std::endl;
	rand = std::rand() % 2 + 1;
	if (rand == 2)
	{
		std::cout << "gggggggggg Target" << this->getTarget() << "has been robotomized successfully." << std::endl;
	}
	else
	{
		std::cout << "Targer" << this->getTarget() << "tell us it’s a failure." << std::endl;
	}
}

std::ostream &operator<<(std::ostream &os, RobotomyRequestForm const &obj)
{
	if (obj.getsigned_form() == true)
		os << "Name form " << obj.getname() << ", signed, " << "gradme signed form " << obj.getgrade_sing() << ",grade accomplishment form " << obj.getgrade_accomplishment() << " and target" << obj.getTarget() << ".";
	os << "Name form " << obj.getname() << ", not signed, " << "gradme signed form " << obj.getgrade_sing() << ",grade accomplishment form " << obj.getgrade_accomplishment() << " and target" << obj.getTarget() << ".";
	return (os);
}