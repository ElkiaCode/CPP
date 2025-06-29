#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>
#include <iostream>
#include <cmath>

class Brain
{
	protected:
		std::string ideas[100];

	public:
		Brain();
		virtual ~Brain();
		Brain(const Brain& other);
		Brain& operator=(const Brain& other);
};

#endif
