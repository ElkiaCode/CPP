#ifndef INTERN_HPP
#define INTERN_HPP
#include <string>
#include <iostream>
#include <fstream>
#include <ctime>
#include "AForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(const Intern &other);
        ~Intern();
        Intern &operator=(const Intern &other);

        AForm *makeForm(const std::string &nameForm, const std::string &target);
    private:
        static AForm *makeShrubbery(const std::string &target);
        static AForm *makeRobotomy(const std::string &target);
        static AForm *makePresident(const std::string &target);
};

#endif