#include <iostream>
#include <cstdlib>    // for srand, rand if you want
#include <ctime>      // for time
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    srand(time(NULL));
    Intern someRandomIntern;

    Form* rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");

    Form* scf;
    scf = someRandomIntern.makeForm("shrubbery creation", "home");

    Form* ppf;
    ppf = someRandomIntern.makeForm("presidential pardon", "Arthur Dent");

    Form* unknown;
    unknown = someRandomIntern.makeForm("super important form", "TestTarget");

    std::cout << "\n--- Checking the returned form pointers ---" << std::endl;
    if (!rrf) std::cout << "rrf is nullptr!\n";
    if (!scf) std::cout << "scf is nullptr!\n";
    if (!ppf) std::cout << "ppf is nullptr!\n";
    if (!unknown) std::cout << "unknown is nullptr (good, as 'super important form' is invalid)\n";

    Bureaucrat boss("Boss", 1);
    Bureaucrat junior("Junior", 70);

    std::cout << "\n--- Boss tries to sign & execute the RobotomyRequestForm ---" << std::endl;
    if (rrf) {
        boss.signForm(*rrf);
        boss.executeForm(*rrf); 
    }

    std::cout << "\n--- Junior tries to sign & execute the ShrubberyCreationForm ---" << std::endl;
    if (scf) {
        junior.signForm(*scf); 
        junior.executeForm(*scf);
    }

    std::cout << "\n--- Junior tries to sign & execute the PresidentialPardonForm ---" << std::endl;
    if (ppf) {
        junior.signForm(*ppf);
        junior.executeForm(*ppf);
    }

    delete rrf;
    delete scf;
    delete ppf;
    delete unknown;

    return 0;
}
