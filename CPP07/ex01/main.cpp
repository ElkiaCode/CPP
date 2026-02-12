#include "iter.hpp"
#include <iostream>
#include <string>

void printInt(int &x)
{
    std::cout << x << std::endl;
}

void printString(std::string const &s)
{
    std::cout << s << std::endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    size_t len = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Int array:" << std::endl;
    iter(arr, len, printInt);

    std::cout << std::endl;

    std::string const strs[] = {
        "Hello",
        "CPP",
        "Templates",
        "42",
        "tut tut"
    };

    size_t len2 = sizeof(strs) / sizeof(strs[0]);

    std::cout << "String array:" << std::endl;
    iter(strs, len2, printString);

    return 0;
}