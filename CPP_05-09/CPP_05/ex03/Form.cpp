#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("NoName"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const std::string &name, int gradeToSign, int gradeToExecute) :
	_name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	std::cout << "Form param constructor called" << std::endl;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	if(gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &other) :_name(other._name), _isSigned(other._isSigned),
		_gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
	std::cout << "Form copy constructor called" << std::endl;
}

Form &Form::operator=(const Form &other)
{
	std::cout << "Form assignment operator called" << std::endl;
	if (this != &other)
		_isSigned = other._isSigned;
	return *this;
}

Form::~Form() {
	std::cout << "Form destructor called" << std::endl;
}

const char* Form::GradeTooHighException::what() const throw() {
	return "Form grade is too high!";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Form grade is too low!";
}

const char* Form::FormNotSignedException::what() const throw() {
	return "Form is not signed";
}

std::string Form::getName() const {
	return _name;
}

bool Form::isSigned() const {
	return _isSigned;
}

int Form::getGradeToSign() const {
	return _gradeToSign;
}

int Form::getGradeToExecute() const {
	return _gradeToExecute;
}

void Form::beSigned(const Bureaucrat &b) {
	if (b.getGrade() <= _gradeToSign)
		_isSigned = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, const Form &f)
{
	os << "Form \"" << f.getName() << "\" | Signed: "
		<< (f.isSigned() ? "Yes" : "No")
		<< " | Grade to sign: " << f.getGradeToSign()
		<< " | Grade to execute: " << f.getGradeToExecute();
	return os;
}