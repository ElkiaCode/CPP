#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        std::cout << "--- Creating a Bureaucrat ---\n";
        Bureaucrat bob("Bob", 50);

        std::cout << bob << std::endl;

        std::cout << "\n--- Creating a Form ---\n";
        Form taxForm("Tax Declaration", 60, 30);

        std::cout << taxForm << std::endl;

        std::cout << "\n--- Bob tries to sign the form ---\n";
        bob.signForm(taxForm);

        std::cout << taxForm << std::endl;

        std::cout << "\n--- Creating a too-hard Form ---\n";
        Form secretForm("Secret File", 10, 10);

        std::cout << secretForm << std::endl;

        std::cout << "\n--- Bob tries to sign the HARD form ---\n";
        bob.signForm(secretForm);

        std::cout << secretForm << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "\nException caught: " << e.what() << std::endl;
    }

    std::cout << "\n--- Testing invalid form creation ---\n";
    try
    {
        Form bad("Invalid", 0, 150);
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try
    {
        Form bad("Invalid2", 151, 1);
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return (0);
}