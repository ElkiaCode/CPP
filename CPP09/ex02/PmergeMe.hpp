#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <sstream>
#include <string>
#include <cstdlib>
#include <climits>
#include <cctype>
#include <ctime>


class PmergeMe
{
    private:
        std::vector<int> vectorData;
        std::deque<int> dequeData;
    
    public:
        PmergeMe();
        ~PmergeMe();

        void parsing(char **av);
        void sortVector();
        void sortDeque();

        void printBeforeSort();
        void printResult();
};
