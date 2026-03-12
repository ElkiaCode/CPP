#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Error: wrong number of arguments" << std::endl;
        return 1;
    }

    try
    {
        std::cout << RPN::calcul(av[1]) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}