#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat a("TopDude", 1);
        std::cout << a << std::endl;
        a.incrementGrade();
    }
    catch (const std::exception & e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        Bureaucrat b("LowDude", 140);
        std::cout << b << std::endl;
        b.decrementGrade();
        std::cout << b << std::endl;
    }
    catch (const std::exception & e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
}
