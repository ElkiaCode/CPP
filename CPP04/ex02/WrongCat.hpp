#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include <string>
#include <iostream>
#include <cmath>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat& other);
		WrongCat& operator=(const WrongCat& other);
    void makeSound() const;
};

#endif