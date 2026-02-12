#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main()
{
    std::srand(static_cast<unsigned>(std::time(0)));
    try
    {
        Bureaucrat bob("Bob", 1); // grade 1 = très haut

        ShrubberyCreationForm shrub("home");
        RobotomyRequestForm robot("Bender");
        PresidentialPardonForm pardon("Arthur");

        std::cout << "\n--- Sign Forms ---\n";
        bob.signForm(shrub);
        bob.signForm(robot);
        bob.signForm(pardon);

        std::cout << "\n--- Execute Forms ---\n";
        bob.executeForm(shrub);
        bob.executeForm(robot);
        bob.executeForm(pardon);

        // Test d'un bureaucrat trop faible
        Bureaucrat alice("Alice", 150);
        std::cout << "\n--- Test grades too low ---\n";
        ShrubberyCreationForm shrub2("garden");
        alice.signForm(shrub2);           // doit lancer exception
        alice.executeForm(shrub2);        // doit lancer exception
    }
    catch(const std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}