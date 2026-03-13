#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main()
{
    try
    {
        std::srand(std::time(NULL));

        Bureaucrat bob("Bob", 1);
        Bureaucrat john("didier", 150);

        Intern someRandomIntern;

        AForm* f1 = someRandomIntern.makeForm("shrubbery creation", "Home");
        AForm* f2 = someRandomIntern.makeForm("robotomy request", "slender");
        AForm* f3 = someRandomIntern.makeForm("presidential pardon", "pepe the frog");

        std::cout << std::endl;

        std::cout << *f1 << std::endl;
        std::cout << *f2 << std::endl;
        std::cout << *f3 << std::endl;

        std::cout << std::endl;

        john.signForm(*f1);
        bob.signForm(*f1);
        bob.signForm(*f2);
        bob.signForm(*f3);

        std::cout << std::endl;

        std::cout << *f1 << std::endl;
        std::cout << *f2 << std::endl;
        std::cout << *f3 << std::endl;

        std::cout << std::endl;

        f1->execute(bob);
        f2->execute(bob);
        f3->execute(bob);

        delete f1;
        delete f2;
        delete f3;
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}