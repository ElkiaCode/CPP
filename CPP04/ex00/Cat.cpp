#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "A polymorph turns into a " << _type << std::endl;
}

Cat::~Cat()
{
	std::cout << "the " << _type << " runs away and disappears!" << std::endl;
}

Cat &Cat::operator=(const Cat& other)
{
	std::cout << "Assignment operator called!" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miiiiiaouuu..." << std::endl;
}