#include "easyfind.hpp"

int main()
{
    std::vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    try
    {
        std::cout << "Vector test: ";
        std::cout << easyFind(v, 20) << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Not found in vector" << std::endl;
    }
    std::list<int> l;

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);

    try
    {
        std::cout << "List test: ";
        std::cout << easyFind(l, 5) << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Not found in list" << std::endl;
    }

    return 0;
}