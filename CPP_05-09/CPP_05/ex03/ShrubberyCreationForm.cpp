#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
	: Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm constructor called with target: " << target << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
	: Form(other), _target(other._target)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
	{
		Form::operator=(other);
		_target = other._target;
		std::cout << "ShrubberyCreationForm assignment operator called" << std::endl;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!isSigned())
		throw Form::FormNotSignedException();
	if (executor.getGrade() > getGradeToExecute())
		throw Form::GradeTooLowException();
	std::ofstream ofs(_target + "_shrubbery");
	if (!ofs)
	{
		std::cerr << "Error: Could not open the file for writing." << std::endl;
		return;
	}
	ofs << "  /\\\n"
    << "     /\\*\\\n"
    << "    /\\O\\*\\\n"
    << "   /*/\\/\\/\\\n"
    << "  /\\O\\/\\*\\/\\\n"
    << " /\\*\\/\\*\\/\\O\\\n"
    << "       ||\n"
    << "       ||\n"
    << "       ||\n";
	ofs.close();

}