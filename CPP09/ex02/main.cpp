#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cerr << "Not enough arguments" << std::endl;
        return 1;
    }
    
    try
    {
        {
            PmergeMe p;

            p.parsing(av);
            p.printBeforeSort();
            clock_t startForVector = clock();
            p.sortVector();
            clock_t endForVector = clock();
            clock_t startForDeque = clock();
            p.sortDeque();
            clock_t endForDeque = clock();
            p.printResult();

            std::cout << "Time for vector: " << (double)(endForVector - startForVector) / CLOCKS_PER_SEC * 1000000 << " us" << std::endl;
            std::cout << "Time for deque: " << (double)(endForDeque - startForDeque) / CLOCKS_PER_SEC * 1000000 << " us" << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}