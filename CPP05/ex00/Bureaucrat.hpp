#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <string>
#include <iostream>
#include <stdexcept>

class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;

    public:
        Bureaucrat(const std::string &name, int grade);
        Bureaucrat(const Bureaucrat &other);
        ~Bureaucrat();
        Bureaucrat &operator=(const Bureaucrat &other);

    const std::string &getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();

    class GradeTooHighException : public std::exception
    {
        public:
            const char* what() const throw()
            {
                return "Grade too High";
            }
    };
    class GradeTooLowException : public std::exception
    {
        public:
            const char* what() const throw()
            {
                return "Grade too Low";
            }
    };
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b);

#endif