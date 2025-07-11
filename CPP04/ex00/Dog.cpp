#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "A polymorph turns into a " << _type << std::endl;
}

Dog::~Dog()
{
	std::cout << "the " << _type << " runs away and disappears!" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "copy constructor of Dog called" << std::endl;
	*this = other;
}

Dog &Dog::operator=(const Dog& other)
{
	std::cout << "Assignment operator called!" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Bark...Bark..." << std::endl;
}