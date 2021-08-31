#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)
{
	this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj) : Form((obj.getname()), obj.getsigned_form, obj.getgrade_sing, obj.getgrade_accomplishment)
{
	this->target = obj.target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{

}

void RobotomyRequestForm::execute(Bureaucrat const &bureaucrat)
{

}