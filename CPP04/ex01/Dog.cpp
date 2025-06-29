#include "Dog.hpp"

Dog::Dog() : _brain(new Brain())
{
	this->_type = "Dog";
	std::cout << "A polymorph turns into a " << _type << std::endl;
}

Dog::~Dog()
{
	std::cout << "the " << _type << " runs away and disappears!" << std::endl;
	delete _brain;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "copy constructor of Dog called" << std::endl;
	this->_type = other._type;
	this->_brain = new Brain(*other._brain);
}

Dog &Dog::operator=(const Dog& other)
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

void Dog::makeSound() const
{
	std::cout << "Bark...Bark..." << std::endl;
}