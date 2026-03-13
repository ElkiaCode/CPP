#include <iostream>
#include "Array.hpp"

int main()
{
    const int size = 5;

    Array<int> arr(size);

    for (int i = 0; i < size; i++)
        arr[i] = i * 10;

    std::cout << "Array elements:" << std::endl;
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << std::endl;

    Array<int> copy(arr);
    copy[0] = 999;

    std::cout << "Original first element after modifying copy: " << arr[0] << std::endl;

    try
    {
        arr[-1] = 0;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        arr[size] = 0;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}