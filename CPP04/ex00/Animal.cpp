#include "Animal.hpp"

Animal::Animal() : _type("Polymorph")
{
	std::cout << "A " << _type << " is born!" << std::endl;
}

Animal::~Animal()
{
	std::cout << "A " << _type << " has been destroyed!" << std::endl;
}

Animal &Animal::operator=(const Animal& other)
{
	std::cout << "Assignment operator called!" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

std::string Animal::getType() const
{
	return (_type);
}

void Animal::makeSound() const
{
	std::cout << "* unconventional sounds *" << std::endl;
}