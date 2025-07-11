#ifndef DOG_HPP
#define DOG_HPP
#include <string>
#include <iostream>
#include <cmath>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* _brain;

    public:
		Dog();
		~Dog();
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);
    void makeSound() const;
};

#endif