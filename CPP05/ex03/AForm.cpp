#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string Name, const int gradeToSign, const int gradeToExecute) : _name(Name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (_gradeToSign < 1 || _gradeToExecute < 1) throw GradeTooHighException();
    if (_gradeToSign > 150 || _gradeToExecute > 150) throw GradeTooLowException();
}

AForm::AForm(const AForm &other) :  _name(other._name), _isSigned(other._isSigned), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
}

AForm::~AForm()
{
}

const std::string &AForm::getName() const
{
    return(_name);
}

bool AForm::getIsSigned() const
{
    return(_isSigned);
}

int AForm::getGradeToSign() const
{
    return(_gradeToSign);
}

int AForm::getGradeToExecute() const
{
    return(_gradeToExecute);
}

void AForm::beSigned(const Bureaucrat &b)
{
    if (b.getGrade() > _gradeToSign) throw GradeTooLowException();
    else
        _isSigned = true;
    
}

void AForm::canExecute(Bureaucrat const &exec) const
{
    if (!this->_isSigned) throw NotSignedExeption();
    if (exec.getGrade() > this->_gradeToExecute) throw GradeTooLowException();
}

AForm &AForm::operator=(const AForm &other)
{
    if (this != &other)
        this->_isSigned = other._isSigned;
    return *this;
}

std::ostream &operator<<(std::ostream &os, const AForm &f) 
{
    os << "AForm " << f.getName() << std::endl
       << "Sign grade : " << f.getGradeToSign() << std::endl
       << "Exec grade : " << f.getGradeToExecute() << std::endl
       << "Status : " << (f.getIsSigned() ? "signed" : "not signed") << std::endl;
    return os;
}