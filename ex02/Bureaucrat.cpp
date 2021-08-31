#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	try
	{
		if (grade > 150)
		{
			throw Bureaucrat::GradeTooLowException();
		}
		if (grade < 1)
		{
			throw Bureaucrat::GradeTooHighException();
		}
		this->name = name;
		this->grade = grade;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
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

std::string Bureaucrat::getname() const
{
	return (name);
}

int Bureaucrat::getgrade() const
{
	return (grade);
}

void Bureaucrat::setname(std::string name)
{
	this->name = name;
}

void Bureaucrat::setgrade(int grade)
{
	try
	{
		if (grade < 1 || grade > 150)
		{
			if (grade < 1)
			{
				throw Bureaucrat::GradeTooHighException();
			}
			if (grade > 150)
			{
				throw Bureaucrat::GradeTooLowException();
			}
		}
		else
		{
			this->grade = grade;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::upgradeBureaucrat()
{
	try
	{
		if (grade != 1)
		{
			grade--;
		}
		else
		{
			throw Bureaucrat::GradeTooHighException();
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::lowgradeBureaucrat()
{
	try
	{
		if (grade != 150)
		{
			grade++;
		}
		else
		{
			throw Bureaucrat::GradeTooLowException();
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
	os << bureaucrat.getname() << ", bureaucrat grade " << bureaucrat.getgrade() << ".";
	return (os);
}


const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade bureauctat too low.");	
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade bureauctat too hide.");
}

void Bureaucrat::signForm(Form const &form) const
{
	if (form.getsigned_form() == true)
	{
		std::cout << "Buracrat " << getname() << " signed " << form.getname() << "." << std::endl;
	}
	else
	{	
		std::cout << "Buracrat " << getname() << " cannot sign " << form.getname() << " because grade buractat is too low." << std::endl;
	}
}

// void Bureaucrat::executeForm(Form const &form)
// {

// }