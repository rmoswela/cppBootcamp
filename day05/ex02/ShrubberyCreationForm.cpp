#include "ShrubberyCreationForm.hpp"

//const int ShrubberyCreationForm::_sign = 145;
//const int ShrubberyCreationForm::_exec = 137;

ShrubberyCreationForm::ShrubberyCreationForm(void) :
	Form("None", _sign, _exec, "No target")
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	Form(target, _sign, _exec, target)
{
	return;
}


ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & obj) :
	Form("Default", _sign, _exec, obj.getTarget())
{
	*this = obj;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	(void)rhs;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);

	std::ofstream file;
	std::string nameFile = this->getTarget();
	nameFile += "_shrubbery";
	file.open(nameFile);
	file << "           ^^^^^^^" << std::endl;
	file << "          ^^o^^o^^^^"   << std::endl;
	file << "         ^^^^^^^^^^^^" << std::endl;
	file << "         ^^^^^^o^^^^" << std::endl;
	file << "          ^^^^^^^^^" << std::endl;
	file << "           ^^o^^^^" << std::endl;
	file << "             |.| " << std::endl;
	file << "             | | " << std::endl;
	file << "             | | " << std::endl;
	file << "             |_| " << std::endl;
	file.close();
}
