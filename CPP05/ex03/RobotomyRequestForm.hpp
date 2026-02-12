#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include <string>
#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        std::string _target;

    public:
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &other);
        ~RobotomyRequestForm();
        RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
        virtual void execute(Bureaucrat const &exec) const;
};

#endif