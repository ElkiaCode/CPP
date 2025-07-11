#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <string>
#include <iostream>
#include <cmath>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string _type;

	public:
		AMateria(std::string const &type);
		virtual ~AMateria();
		std::string const & getType() const;
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);

};

#endif