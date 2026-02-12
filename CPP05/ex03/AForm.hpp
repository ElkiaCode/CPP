#ifndef AFORM_HPP
#define AFORM_HPP
#include <string>
#include <iostream>
#include <stdexcept>

class Bureaucrat;

class AForm
{

    protected:
        void canExecute(Bureaucrat const &exec) const;

    private:
        const std::string _name;
        bool _isSigned;
        const int _gradeToSign;
        const int _gradeToExecute;

    public:
        AForm(const std::string Name, const int gradeToSign, const int gradeToExecute);
        AForm(const AForm &other);
        virtual ~AForm();

    const std::string &getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    void beSigned(const Bureaucrat &b);
    AForm &operator=(const AForm &other);
    virtual void execute(Bureaucrat const &exec) const = 0;

    class GradeTooHighException : public std::exception
    {
        public:
            const char* what() const throw()
            {
                return "Grade too High for sign";
            }
    };
    class GradeTooLowException : public std::exception
    {
        public:
            const char* what() const throw()
            {
                return "Grade too Low for sign";
            }
    };
    class NotSignedExeption : public std::exception
    {
        public:
            const char* what() const throw()
            {
                return "Form not signed";
            }
    };

};

std::ostream &operator<<(std::ostream &os, const AForm &b);

#endif