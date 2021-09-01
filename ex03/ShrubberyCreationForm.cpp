#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137)
{
	this->target = target; 
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj) : Form(obj)
{
	target = obj.target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj)
{
	target = obj.target;
	return (*this);
}

std::string ShrubberyCreationForm::getTarget() const
{
	return (target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &bureaucrat) const
{
	std::ofstream fout(target);

	std::cout << "Bureaucrat " << bureaucrat.getname() << " took an order for execution." << std::endl;
	fout << 
"___________¶¶¶¶¶¶_¶¶¶¶¶¶¶¶" << std::endl <<
"__________¶_____¶¶________¶" << std::endl <<
"________¶¶¶_______________ ¶¶¶¶¶¶¶" << std::endl <<
"________¶_______________________¶¶¶" << std::endl <<
"_______ ¶¶____¶__________________ ¶" << std::endl <<
"______¶¶¶____¶¶¶¶¶¶¶¶¶____________¶¶¶" << std::endl <<
"______¶¶______¶¶¶¶¶_______ ¶¶_______¶¶_¶¶" << std::endl <<
"_____¶¶¶¶¶¶_______________¶¶__¶_¶¶___¶¶¶¶¶¶" << std::endl <<
"___¶¶¶__¶¶¶¶__¶¶¶_________¶¶¶¶¶¶¶____¶¶___¶¶¶" << std::endl <<
"___¶______¶¶¶_¶_¶__¶__¶_¶¶¶________________¶¶¶" << std::endl <<
"__ ¶________¶_¶_¶¶¶¶¶¶¶¶¶¶_¶¶________________¶¶" << std::endl <<
"___¶¶____¶¶¶¶_¶_¶¶¶_¶¶¶¶_¶_¶¶¶¶¶¶¶¶¶¶________¶¶" << std::endl <<
"__¶¶¶¶___¶¶¶¶¶¶¶¶___¶¶¶_¶__¶¶¶____¶¶¶¶______¶¶¶" << std::endl <<
"_¶¶¶_¶¶¶¶¶_¶¶¶¶¶¶_¶¶_¶¶¶____¶¶¶¶¶¶¶¶________¶¶¶" << std::endl <<
"¶¶_____¶¶¶__¶¶_¶¶¶¶¶__¶¶___¶¶¶¶¶¶_¶_____¶¶¶___¶¶" << std::endl <<
"¶_____¶¶¶___¶_¶_¶¶¶___¶¶_¶¶__¶__¶¶¶¶¶__¶¶¶_____¶¶" << std::endl <<
"¶¶___¶¶¶¶¶¶_¶¶¶___¶____¶¶¶__¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶____¶" << std::endl <<
"_¶¶__¶¶¶¶¶¶¶¶¶¶¶¶_¶¶¶__¶¶__¶¶¶¶¶¶¶__¶¶¶¶__¶____¶¶¶" << std::endl <<
"__ ¶¶¶¶_____¶_¶¶¶______¶¶___¶¶_____¶¶¶_________¶" << std::endl <<
"____________¶¶¶__¶¶_____¶___¶¶¶_¶¶¶¶¶¶¶¶¶¶¶___¶¶" << std::endl <<
"___¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_¶¶_¶¶_¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶" << std::endl <<
"__ ¶_____¶¶¶¶¶___¶¶¶_¶¶__¶¶¶¶___¶¶¶________¶¶¶" << std::endl <<
"__ ¶¶____¶¶_______¶¶_¶¶___¶¶¶¶_¶¶¶¶¶_____¶¶¶" << std::endl <<
"__ ¶_____¶___¶_¶¶¶_¶_¶¶___¶¶_¶¶¶__¶¶¶____¶¶" << std::endl <<
"__ ¶¶_______¶¶¶¶__¶¶______ ¶________¶¶¶¶¶¶" << std::endl <<
"___¶__¶¶¶¶¶¶¶_____¶___¶¶¶__¶__________¶¶¶" << std::endl <<
"____¶¶¶¶¶¶¶¶¶_____¶¶__¶¶¶¶¶_¶¶" << std::endl <<
"________________¶¶___¶¶¶¶___¶¶" << std::endl <<
"_______________¶¶____¶¶¶¶___¶¶" << std::endl <<
"____________¶¶¶¶_____¶¶_____¶¶" << std::endl <<
"___________ ¶¶_______¶¶_____¶¶" << std::endl <<
"__________¶¶¶___¶¶___¶¶_____¶¶" << std::endl <<
"________¶¶¶¶____¶¶___¶______¶¶" << std::endl <<
"______ ¶¶¶¶¶____¶______¶¶____¶¶" << std::endl <<
"_____¶¶¶¶¶¶¶¶_¶¶¶_¶____¶¶_¶___¶¶" << std::endl <<
"___¶¶¶¶¶¶¶¶¶¶¶K¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶" << std::endl <<
"__ ¶¶¶¶¶¶¶¶¶¶¶¶¶¶_¶¶¶¶¶¶____¶¶¶¶¶_¶¶¶" << std::endl;
	fout.close();
}

std::ostream &operator<<(std::ostream &os, const ShrubberyCreationForm &obj)
{
	if (obj.getsigned_form() == true)
		os << "Name form " << obj.getname() << ", signed, " << "gradme signed form " << obj.getgrade_sing() << ",grade accomplishment form " << obj.getgrade_accomplishment() << " and target" << obj.getTarget() << ".";
	os << "Name form " << obj.getname() << ", not signed, " << "gradme signed form " << obj.getgrade_sing() << ",grade accomplishment form " << obj.getgrade_accomplishment() << " and target" << obj.getTarget() << ".";
	return (os);
}