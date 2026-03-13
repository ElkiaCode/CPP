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
                throw std::runtime_error("only positive digit");
        }
        long num = std::atol(av[i]);

        if (num < 0 || num > INT_MAX)
            throw std::runtime_error("only positive integer");
        vectorData.push_back(num);
        dequeData.push_back(num);
    }
}

std::vector<int> PmergeMe::fordJohnsonVector(std::vector<int> data)
{
    if (data.size() <= 1)
        return data;
    std::vector<int> smallNum;
    std::vector<int> bigNum;

    for (size_t i = 0; i + 1 < data.size(); i += 2)
    {
        int x = data[i];
        int y = data[i + 1];
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
    if (data.size() % 2)
        bigNum.push_back(data.back());
    bigNum = fordJohnsonVector(bigNum);
    std::vector<int> mainData = bigNum;
    std::vector<int> order = jacobsthalFonction(smallNum);
    std::vector<bool> inserted(smallNum.size(), false);
    for (size_t i = 0; i < order.size(); i++)
    {
        size_t y = order[i];
        if (y >= smallNum.size())
            continue;
        std::vector<int>::iterator it = std::lower_bound(mainData.begin(), mainData.end(), smallNum[y]);
        mainData.insert(it, smallNum[y]);
        inserted[y] = true;
    }
    for (size_t i = 0; i < smallNum.size(); i++)
    {
        if (!inserted[i])
        {
            std::vector<int>::iterator it = std::lower_bound(mainData.begin(), mainData.end(), smallNum[i]);
            mainData.insert(it, smallNum[i]);
        }
    }
    return mainData;
}

void PmergeMe::sortVector()
{
    vectorData = fordJohnsonVector(vectorData);
}

std::deque<int> PmergeMe::fordJohnsonDeque(std::deque<int> data)
{
    if (data.size() <= 1)
        return data;
    std::deque<int> smallNum;
    std::deque<int> bigNum;

    for (size_t i = 0; i + 1 < data.size(); i += 2)
    {
        int x = data[i];
        int y = data[i + 1];
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
    if (data.size() % 2)
        bigNum.push_back(data.back());
    bigNum = fordJohnsonDeque(bigNum);
    std::deque<int> mainData = bigNum;
    std::deque<int> order = jacobsthalFonction(smallNum);
    std::vector<bool> inserted(smallNum.size(), false);
    for (size_t i = 0; i < order.size(); i++)
    {
        size_t y = order[i];
        if (y >= smallNum.size())
            continue;
        std::deque<int>::iterator it = std::lower_bound(mainData.begin(), mainData.end(), smallNum[y]);
        mainData.insert(it, smallNum[y]);
        inserted[y] = true;
    }
    for (size_t i = 0; i < smallNum.size(); i++)
    {
        if (!inserted[i])
        {
            std::deque<int>::iterator it = std::lower_bound(mainData.begin(), mainData.end(), smallNum[i]);
            mainData.insert(it, smallNum[i]);
        }
    }
    return mainData;
}

void PmergeMe::sortDeque()
{
    dequeData = fordJohnsonDeque(dequeData);
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