#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
class Bureaucrat;
#include "Bureaucrat.hpp"

class Form
{
	private:
		std::string name;
		bool signed_form;
		int grade_signed;
		int grade_accomplishment;
		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw();
		};
	public:
		Form(std::string name, int grade_signed, int grade_accomplishment);
		~Form();
		Form(Form const &form);
		Form &operator=(Form const &form);
		std::string getname() const;
		bool getsigned_form() const;
		int getgrade_sing() const;
		int getgrade_accomplishment() const;
		void beSigned(Bureaucrat const &bureaucrat);
		virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &os, Form const &form);
#endif