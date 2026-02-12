#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other), _target(other._target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if (this != &other)
    {
        this->_target = other._target;
    }
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &exec) const
{
    this->canExecute(exec);

    std::ofstream ofs((this->_target + "_shrubbery").c_str());
    if (!ofs)
    {
        std::cerr << "Unable to open file: " << this->_target + "_shrubbery" << std::endl;
        return;
    }


    ofs << "      *" << std::endl;
    ofs << "     *o*" << std::endl;
    ofs << "    *o***" << std::endl;
    ofs << "   **o*o**" << std::endl;
    ofs << "  ***o***o*" << std::endl;
    ofs << " *****o*****" << std::endl;
    ofs << "*******o*****" << std::endl;
    ofs << "     |||" << std::endl;
    ofs << "     |||" << std::endl;
    ofs << "Happy Christmas" << std::endl;

    ofs.close();
} 