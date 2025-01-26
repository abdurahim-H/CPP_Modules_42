#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern &other) {
	std::cout << "Intern copy constructor called" << std::endl;
	(void)other;
}

Intern &Intern::operator=(const Intern &other) {
	std::cout << "Intern assignment operator called" << std::endl;
	(void)other;
	return *this;
}

Intern::~Intern() {
	std::cout << "Intern destructor called" << std::endl;
}

static Form* createShrub(const std::string &target) {
	return new ShrubberyCreationForm(target);
}

static Form* createRobo(const std::string &target) {
	return new RobotomyRequestForm(target);
}

static Form* createPres(const std::string &target) {
	return new PresidentialPardonForm(target);
} 

Form* Intern::makeForm(const std::string &formName, const std::string &target)
{
	static const std::string names[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
		
	static Form* (*creators[3])(const std::string &) = {
		createShrub, createRobo, createPres
	};

	for (int i = 0; i < 3; i++) {
		if (names[i] == formName) {
			std::cout << "Intern creates " << formName << std::endl;
			return creators[i](target);
		}
	}
	std::cerr << "Intern cannot create \"" << formName
		<< "\" because it is unknown" << std::endl;
    return nullptr;
}