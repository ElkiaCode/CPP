#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string Name, const int gradeToSign, const int gradeToExecute) : _name(Name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (_gradeToSign < 1 || _gradeToExecute < 1) throw GradeTooHighException();
    if (_gradeToSign > 150 || _gradeToExecute > 150) throw GradeTooLowException();
}

Form::Form(const Form &other) :  _name(other._name), _isSigned(other._isSigned), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
}

Form::~Form()
{
}

const std::string &Form::getName() const
{
    return(_name);
}

bool Form::getIsSigned() const
{
    return(_isSigned);
}

int Form::getGradeToSign() const
{
    return(_gradeToSign);
}

int Form::getGradeToExecute() const
{
    return(_gradeToExecute);
}

void Form::beSigned(const Bureaucrat &b)
{
    if (b.getGrade() > _gradeToSign) throw GradeTooLowException();
    else
        _isSigned = true;
    
}

Form &Form::operator=(const Form &other)
{
    if (this != &other)
        this->_isSigned = other._isSigned;
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Form &f) 
{
    os << "Form " << f.getName() << std::endl
       << "Sign grade : " << f.getGradeToSign() << std::endl
       << "Exec grade : " << f.getGradeToExecute() << std::endl
       << "Status : " << (f.getIsSigned() ? "signed" : "not signed") << std::endl;
    return os;
}