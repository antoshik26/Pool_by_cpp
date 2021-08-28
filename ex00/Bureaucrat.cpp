#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	try
	{
		if()
	}
	catch (std::exception& e)
	{

	}
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &bureaucrat)
{
	name = bureaucrat.name;
	grade = bureaucrat.grade;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &bureaucrat)
{
	name = bureaucrat.name;
	grade = bureaucrat.grade;
	return (*this);
}

std::string Bureaucrat::getname()
{
	return (name);
}

int Bureaucrat::getgrade()
{
	return (grade);
}

void Bureaucrat::setname(std::string name)
{
	this->name = name;
}

void Bureaucrat::setgrade(int grade)
{
	if (grade < 1 || grade > 150)
	{

	}
	else
	{
		this->grade = grade;
	}
	
}

void Bureaucrat::upgradeBureaucrat()
{
	if (grade != 1)
	{
		greade++;
	}
	else
	{

	}
}

void Bureaucrat::lowgradeBureaucrat()
{
	if (grade != 150)
	{
		grade--;
	}
	else
	{

	}
}

std::ofstream &Bureaucrat::operator<<(std::ofstream &os)
{
	os << name << ", bureaucrat grade" << this->getgrade() <<std::endl;
}