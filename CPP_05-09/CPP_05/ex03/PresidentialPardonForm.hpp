#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include <string>

class PresidentialPardonForm : public Form
{
	private:
		std::string _target;

	public:
		PresidentialPardonForm(const std::string &executor);
		PresidentialPardonForm(const PresidentialPardonForm &other);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
		~PresidentialPardonForm();

		virtual void execute(const Bureaucrat &executor) const;
};

#endif