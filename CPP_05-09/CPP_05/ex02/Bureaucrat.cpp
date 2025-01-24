#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(150) {
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name), grade(grade) {
	std::cout << "Bureaucrat parameterized constructor called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name) {
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	this->grade = other.grade;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destructor called\n";
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
	std::cout << "Bureaucrat copy assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	else
		this->grade = other.grade;
	return *this;
}

std::string Bureaucrat::getName() const {
	return this->name;
}

int Bureaucrat::getGrade() const {
	return this->grade;
}

void Bureaucrat::incrementGrade() {
	if (this->grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}

void Bureaucrat::decrementGrade() {
	if (this->grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
}

void Bureaucrat::signForm(Form &f)
{
	try {
		f.beSigned(*this); 
		std::cout << this->name << " signs " << f.getName() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << this->name << " cannot sign " << f.getName()
				  << " because " << e.what() << std::endl;
    }
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Bureaucrat grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Bureaucrat grade is too low!";
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b) {
	out << b.getName() << ", bureaucrat grade " << b.getGrade();
	return out;
}

void Bureaucrat::executeForm(Form const & form) {
	try {
		form.execute(*this);
		std::cout << this->name << " executes " << form.getName() << std::endl;
	}
	 catch (std::exception &e) {
		std::cerr << this->name << " cannot execute " << form.getName()
			<< " because " << e.what() << std::endl;
	}
}