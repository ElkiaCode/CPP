#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include <string>
#include <iostream>
#include <fstream>
#include <ctime>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string _target;

    public:
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &other);
        ~PresidentialPardonForm();
        PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
        virtual void execute(Bureaucrat const &exec) const;
};

#endif