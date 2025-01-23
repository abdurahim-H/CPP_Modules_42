#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try {
		Form taxForm("Tax Document", 50, 25);
		std::cout << "Created form: " << taxForm.getName()
			<< ", sign grade: " << taxForm.getGradeToSign()
			<< ", exec grade: " << taxForm.getGradeToExecute() << std::endl;

		Form invalidForm1("Impossible Form", 0, 50);
	}
	catch(std::exception &e) {
		std::cerr << "Form creation exception: " << e.what() << std::endl;
	}

	std::cout << "------------------------------------" << std::endl;
	
	try {
		Form invalidForm2("Another Impossible Form", 100, 999);
	}

	catch (std::exception &e) {
        std::cerr << "Form creation exception: " << e.what() << std::endl;
    }

	std::cout << "------------------------------------" << std::endl;

	try {
		Bureaucrat bob("Bob", 60);
		Form contract("Constract", 50, 50);
		std::cout << bob << std::endl;
		std::cout << "Form " << contract.getName()
				<< " is initially " << (contract.isSigned() ? "signed" : "not signed")
				<< std::endl;

		contract.beSigned(bob);
		std::cout << "Form " << contract.getName()
				<< " is now " << (contract.isSigned() ? "signed" : "not signed")
				<< std::endl;
	}
	catch(std::exception &e) {
		std::cerr << "Signing form exception: " << e.what() << std::endl;
	}

	std::cout << "------------------------------------" << std::endl;

	try {
		Bureaucrat alice("Alice", 40);
		Form permit("Permit", 50, 75);

		alice.signForm(permit);
	}
	catch (std::exception &e) {
		std::cerr << "Exception during signForm test: " << e.what() << std::endl;
    }

	std::cout << "------------------------------------" << std::endl;

	return 0;
}