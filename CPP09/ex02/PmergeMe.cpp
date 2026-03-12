#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{

}

void PmergeMe::parsing(char **av)
{
    for (int i = 1; av[i]; i++)
    {
        std::string str = av[i];
        for (size_t j = 0; j < str.size(); j++)
        {
            if (!std::isdigit(str[j]))
                throw std::runtime_error("only digit");
        }
        long num = std::atol(av[i]);

        if (num < 0 || num > INT_MAX)
            throw std::runtime_error("only positive integer");
        vectorData.push_back(num);
        dequeData.push_back(num);
    }
}

void PmergeMe::sortVector()
{
    if (vectorData.size() <= 1)
        return;
    std::vector<int> smallNum;
    std::vector<int> bigNum;

    for (size_t i = 0; i + 1 < vectorData.size(); i += 2)
    {
        int x = vectorData[i];
        int y = vectorData[i + 1];
        if (x < y)
        {
            smallNum.push_back(x);
            bigNum.push_back(y);
        }
        else
        {
            smallNum.push_back(y);
            bigNum.push_back(x);
        }
    }
    if (vectorData.size() % 2)
        bigNum.push_back(vectorData.back());
    std::sort(smallNum.begin(), smallNum.end());
    for (size_t i = 0; i < bigNum.size(); i++)
    {
        std::vector<int>::iterator it = std::lower_bound(smallNum.begin(), smallNum.end(), bigNum[i]);
        smallNum.insert(it, bigNum[i]);
    }
    vectorData = smallNum;
}

void PmergeMe::sortDeque()
{
    if (dequeData.size() <= 1)
        return;
    std::deque<int> smallNum;
    std::deque<int> bigNum;

    for (size_t i = 0; i + 1 < dequeData.size(); i += 2)
    {
        int x = dequeData[i];
        int y = dequeData[i + 1];
        if (x < y)
        {
            smallNum.push_back(x);
            bigNum.push_back(y);
        }
        else
        {
            smallNum.push_back(y);
            bigNum.push_back(x);
        }
    }
    if (dequeData.size() % 2)
        bigNum.push_back(dequeData.back());
    std::sort(smallNum.begin(), smallNum.end());
    for (size_t i = 0; i < bigNum.size(); i++)
    {
        std::deque<int>::iterator it = std::lower_bound(smallNum.begin(), smallNum.end(), bigNum[i]);
        smallNum.insert(it, bigNum[i]);
    }
    dequeData = smallNum;
}

void PmergeMe::printBeforeSort()
{
    std::cout << "Before: ";
    for (size_t i = 0; i < vectorData.size(); i++)
        std::cout << vectorData[i] << " ";
    std::cout << std::endl;
}

void PmergeMe::printResult()
{
    std::cout << "After ";
    for (size_t i = 0; i < vectorData.size(); i++)
        std::cout << vectorData[i] << " ";
    std::cout << std::endl;
}

PmergeMe::~PmergeMe()
{
}