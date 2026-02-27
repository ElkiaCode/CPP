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
        virtual ~MutantStack() {}

    	typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin()
        {
            return this->c.begin();
        }
        iterator end()
        {
            return this->c.end();
        }
};

#endif