#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include <string>
#include <iostream>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        std::string _target;

    public:
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &other);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
        virtual void execute(Bureaucrat const &exec) const;
};

#endif