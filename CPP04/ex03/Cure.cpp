#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "" << std::endl;
}

Cure::~Cure()
{
	std::cout << "" << std::endl;
}

Cure::Cure(const Cure &other) : AMateria(other)
{
	std::cout << "" << std::endl;
}

Cure &Cure::operator=(const Cure &other)
{
	if (this != &other)
		_type = other._type;
	return(*this);
}

AMateria *Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}