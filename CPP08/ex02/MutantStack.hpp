#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP
#include <iostream>
#include <stack>
#include <exception>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() {}
        ~MutantStack() {}
        T container_type()
        {
            return (this->container_type());
        }
        T *iterator()
        {
            
        }
};

#endif