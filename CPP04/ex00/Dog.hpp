#ifndef DOG_HPP
#define DOG_HPP
#include <string>
#include <iostream>
#include <cmath>
#include "Animal.hpp"

class Dog : public Animal
{
    public:
		Dog(std::string type);
		~Dog();
    void makeSound();
};

#endif