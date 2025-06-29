#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Weird Polymorph")
{
	std::cout << "A " << _type << " is born!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "A " << _type << " has been destroyed!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "Animal copy constructor call" << std::endl;
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "Assignment operator called!" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return (_type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "* A Crazy unconventional sounds *" << std::endl;
}