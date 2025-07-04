
#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "A polymorph turns into a " << _type << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "the " << _type << " runs away and disappears!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	std::cout << "copy constructor of WrongCat called" << std::endl;
	*this = other;
}

WrongCat &WrongCat::operator=(const WrongCat& other)
{
	std::cout << "Assignment operator called!" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Crazy Miiiiiaouuu..." << std::endl;
}