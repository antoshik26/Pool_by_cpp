#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

class Bureaucrat
{
	private:
		std::string name;
		int grade;
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
	public:
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(Bureaucrat const &bureaucrat);
		Bureaucrat &operator=(Bureaucrat const &bureaucrat);
		std::string getname() const;
		int getgrade() const;
		void setname(std::string name);
		void setgrade(int grade);
		void upgradeBureaucrat();
		void lowgradeBureaucrat();
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);
#endif