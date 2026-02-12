#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade)
{
    if (_grade < 1) throw GradeTooHighException();
    if (_grade > 150) throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade)
{}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
        this->_grade = other._grade;
    return *this;
}

const std::string &Bureaucrat::getName() const
{
    return (_name);
}

int Bureaucrat::getGrade() const
{
    return (_grade);
}

void Bureaucrat::incrementGrade()
{
    if (_grade - 1 < 1) throw GradeTooHighException();
    _grade--;
}

void Bureaucrat::decrementGrade()
{
    if (_grade + 1 > 150) throw GradeTooLowException();
    _grade++;
}

void Bureaucrat::signForm(AForm &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->getName() << " signed : " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << this->getName() << " couldn't sign : " << form.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const &form) const
{
    try
    {
        form.execute(*this);
        std::cout << this->getName() << " executed : " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << this->getName() << " couldn't execute : " << form.getName() << " because " << e.what() << '\n';
    }
    
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b) 
{
    os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
    return os;
}