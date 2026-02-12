#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "A Materia as created" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "" << std::endl;
}