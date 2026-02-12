#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other), _target(other._target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    if (this != &other)
    {
        this->_target = other._target;
    }
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &exec) const
{
    this->canExecute(exec);

    int random = rand() % 2;

    std::cout << "--- BRRRRRZZZZZ  KDRRRRRRR..... ---" << std::endl;

    if (random == 0)
    {
        std::cout << this->_target << " has been succesfully Robotomized !" << std::endl;
    }
    else
    {
        std::cout << this->_target << " Robotomy failed !" << std::endl;
    }
} 