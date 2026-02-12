#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main()
{
    Intern someRandomIntern;

    AForm *form1 = someRandomIntern.makeForm("shrubbery creation", "Garden");
    if (form1)
        std::cout << *form1 << std::endl;
    delete form1;

    AForm *form2 = someRandomIntern.makeForm("robotomy request", "Bender");
    if (form2)
        std::cout << *form2 << std::endl;
    delete form2;

    AForm *form3 = someRandomIntern.makeForm("presidential pardon", "Alice");
    if (form3)
        std::cout << *form3 << std::endl;
    delete form3;

    AForm *form4 = someRandomIntern.makeForm("wrong name", "Nobody");
    if (!form4)
        std::cout << "No forms created" << std::endl;

    return (0);
}
