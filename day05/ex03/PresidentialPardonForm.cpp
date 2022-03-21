#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
	this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj) : Form(obj)
{
	target = obj.target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &obj)
{
	target = obj.target;
	return (*this);	
}

std::string PresidentialPardonForm::getTarget() const
{
	return (target);
}

void PresidentialPardonForm::execute(Bureaucrat const &bureaucrat) const
{
	std::cout << "Bureaucrat " << bureaucrat.getname() << " took an order for execution." << std::endl;
	std::cout << this->getTarget() << "has been pardoned by Zafod Beeblebrox." << std::endl;
}

std::ostream &operator<<(std::ostream &os, PresidentialPardonForm const &obj)
{
	if (obj.getsigned_form() == true)
		os << "Name form " << obj.getname() << ", signed, " << "gradme signed form " << obj.getgrade_sing() << ",grade accomplishment form " << obj.getgrade_accomplishment() << " and target" << obj.getTarget() << ".";
	os << "Name form " << obj.getname() << ", not signed, " << "gradme signed form " << obj.getgrade_sing() << ",grade accomplishment form " << obj.getgrade_accomplishment() << " and target" << obj.getTarget() << ".";
	return (os);
}