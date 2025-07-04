#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "A brain appears" << std::endl;
}

Brain::~Brain()
{
	std::cout << "A brain disappears" << std::endl;
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain assignment operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
	}
	return *this;
}