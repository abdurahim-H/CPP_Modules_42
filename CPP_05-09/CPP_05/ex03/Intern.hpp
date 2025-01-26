#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <ostream>
#include <iostream>
#include "Form.hpp"

class Intern
{
	private:
		//
	
	public:
		Intern();
		Intern(const Intern &other);
		~Intern();
		Intern &operator=(const Intern &other);

		Form* makeForm(const std::string &formName, const std::string &target);
};

#endif