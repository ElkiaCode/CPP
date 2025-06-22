#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include <iostream>
#include <cmath>

class Animal
{
    protected:
        std::string _type;
    public:
		Animal();
		~Animal();
		Animal& operator=(const Animal& other);
	std::string getType() const;
	void makeSound() const;
};

#endif