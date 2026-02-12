#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &other)
{
    (void)other;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(const Intern &other)
{
    (void)other;
    return (*this);
}

AForm *Intern::makeShrubbery(const std::string &target)
{
    return (new ShrubberyCreationForm(target));
}

AForm *Intern::makeRobotomy(const std::string &target)
{
    return (new RobotomyRequestForm(target));
}

AForm *Intern::makePresident(const std::string &target)
{
    return (new PresidentialPardonForm(target));
}

AForm *Intern::makeForm(const std::string &nameForm, const std::string &target)
{
    std::string names[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

    AForm *(*constructors[3])(const std::string&) = {
        &Intern::makeShrubbery,
        &Intern::makeRobotomy,
        &Intern::makePresident
    };

    for (int i = 0; i < 3; i++)
    {
        if (names[i] == nameForm)
        {
            std::cout << "Intern creates " << nameForm << std::endl;
            return (constructors[i](target));
        }
    }

    std::cout << "Intern: error, form name : " << nameForm << " does not exist!" << std::endl;
    return (NULL);
    
}