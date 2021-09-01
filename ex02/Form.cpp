#include "Form.hpp"

Form::Form(std::string name, int grade_signed, int grade_accomplishment)
{
	try
	{
		if (grade_signed > 150 || grade_signed < 1)
		{
			if (grade_signed > 150)
				throw Form::GradeTooLowException();
			else
				throw Form::GradeTooHighException();
		}
		else
			this->grade_signed = grade_signed;
		if (grade_accomplishment > 150 || grade_accomplishment < 1)
		{
			if (grade_accomplishment > 150)
				throw Form::GradeTooLowException();
			else
				throw Form::GradeTooHighException();
		}
		else	
			this->grade_accomplishment = grade_accomplishment;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	this->name = name;
	this->signed_form = false;
}

Form::~Form()
{
	
}

Form::Form(Form const &form)
{
	name = form.name;
	signed_form = form.signed_form;
	grade_signed = form.grade_signed;
	grade_accomplishment = form.grade_accomplishment;
}
 
Form &Form::operator=(Form const &form)
{
	name = form.name;
	signed_form = form.signed_form;
	grade_signed = form.grade_signed;
	grade_accomplishment = form.grade_accomplishment;
	return (*this);
}

std::string Form::getname() const
{
	return (name);
}

bool Form::getsigned_form() const
{
	return (signed_form);
}

int Form::getgrade_sing() const
{
	return (grade_signed);
}

int Form::getgrade_accomplishment() const
{
	return (grade_accomplishment);
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	try
	{
		if (grade_signed < bureaucrat.getgrade())
		{
			throw Form::GradeTooLowException();
		}
		signed_form = true;
		bureaucrat.signForm(*this);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
		bureaucrat.signForm(*this);
	}
}

std::ostream &operator<<(std::ostream &os, Form const &form)
{
	if (form.getsigned_form() == true)
		os << "Name form " << form.getname() << ", signed, " << "gradme signed form " << form.getgrade_sing() << ",grade accomplishment form " << form.getgrade_accomplishment() << "."; 
	os << "Name form " << form.getname() << ", not signed, " << "gradme signed form " << form.getgrade_sing() << ",grade accomplishment form " << form.getgrade_accomplishment() << "." ;
	return (os);
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade of is too high");
}

const char* Form::AccomplishmentException::what() const throw()
{
	return ("Bureaucrat can`t accomplishment form, because accoplishment level buractat is too low.");
}

const char* Form::SignedForm::what() const throw()
{
	return ("Bureaucrat tries to execute an unsigned program.");
}