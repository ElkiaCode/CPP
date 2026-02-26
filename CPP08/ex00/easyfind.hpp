#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include <vector>
#include <list>


template<typename T>
int easyFind(const T &s, int i)
{
	typename T::const_iterator it;
	for (it = s.begin(); it != s.end(); it++)
	{
		if (*it == i)
		{
			return *it;
		}
	}
	throw std::exception();
}

#endif

