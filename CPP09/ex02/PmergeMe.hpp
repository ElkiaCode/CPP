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
        std::vector<int> fordJohnsonVector(std::vector<int> data);
        void sortDeque();
        std::deque<int> fordJohnsonDeque(std::deque<int> data);

        void printBeforeSort();
        void printResult();

        template <typename Container>
        Container jacobsthalFonction(const Container & c)
        {
            Container order;
            size_t x = c.size();
            if (x <= 1)
                return order;
            std::vector<size_t> jacobsthal;
            jacobsthal.push_back(1);
            jacobsthal.push_back(3);
            while (jacobsthal.back() < x)
            {
                size_t size = jacobsthal.size();
                jacobsthal.push_back(jacobsthal[size - 1] + 2 * jacobsthal[size - 2]); 
            }
            size_t prev = 1;
            for (size_t i = 1; i < jacobsthal.size(); i++)
            {
                size_t current = jacobsthal[i];
                if (current > x)
                    current = x;
                for (size_t j = current; j > prev; j--)
                    order.push_back(j - 1);
                prev = current;
            }
            return order;
        }
};
