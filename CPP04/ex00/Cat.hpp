#ifndef CAT_HPP
#define CAT_HPP
#include <string>
#include <iostream>
#include <cmath>
#include "Animal.hpp"

class Cat : public Animal
{
    public:
		Cat();
		~Cat();
		Cat& operator=(const Cat& other);
    void makeSound() const;
};

#endif