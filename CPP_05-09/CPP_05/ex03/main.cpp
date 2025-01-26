#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    srand(time(NULL));
    // Create some Bureaucrats
    Bureaucrat highRank("HighRank", 1);    
    Bureaucrat midRank("MidRank", 50);     
    Bureaucrat lowRank("LowRank", 140);    

    // Create forms
    ShrubberyCreationForm shrub("home");
    RobotomyRequestForm robo("Bender");
    PresidentialPardonForm pardon("Arthur Dent");

    std::cout << "\n--- Testing: LowRank tries to sign/execute ShrubberyCreationForm ---" << std::endl;
    lowRank.signForm(shrub);      
    lowRank.executeForm(shrub);   

    std::cout << "\n--- Testing: MidRank tries to sign/execute PresidentialPardonForm ---" << std::endl;
    midRank.signForm(pardon);

    midRank.executeForm(pardon);

    std::cout << "\n--- Testing: HighRank tries to sign/execute RobotomyRequestForm ---" << std::endl;
    highRank.signForm(robo);
    highRank.executeForm(robo);

    std::cout << "\n--- HighRank tries to sign/execute ShrubberyCreationForm ---" << std::endl;
    highRank.signForm(shrub);
    highRank.executeForm(shrub);

    std::cout << "\n--- HighRank tries to sign/execute PresidentialPardonForm ---" << std::endl;
    highRank.signForm(pardon);
    highRank.executeForm(pardon);

    return 0;
}
