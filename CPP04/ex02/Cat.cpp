#include "Cat.hpp"

Cat::Cat() : _brain(new Brain())
{
	this->_type = "Cat";
	std::cout << "A polymorph turns into a " << _type << std::endl;
}

Cat::~Cat()
{
	std::cout << "the " << _type << " runs away and disappears!" << std::endl;
	delete _brain;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "copy constructor of Cat called" << std::endl;
	this->_type = other._type;
	this->_brain = new Brain(*other._brain);
}

Cat &Cat::operator=(const Cat& other)
{
	std::cout << "Assignment operator called!" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miiiiiaouuu..." << std::endl;
}