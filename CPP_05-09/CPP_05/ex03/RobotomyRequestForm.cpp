#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
	: Form("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm constructor called with target: " << target << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
	: Form(other), _target(other._target)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}


RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this != &other)
	{
		Form::operator=(other);
		_target = other._target;
	}
	std::cout << "RobotomyRequestForm assignment operator called" << std::endl;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}


void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (!isSigned())
		throw Form::FormNotSignedException();

	if (executor.getGrade() > getGradeToExecute())
		throw Form::GradeTooLowException();

	std::cout << "* DRILLING NOISES *" << std::endl;

	if (std::rand() % 2 == 0)
		std::cout << _target << " has been robotomized successfully!" << std::endl;
	else
		std::cout << "Robotomy failed on " << _target << "!" << std::endl;
}
