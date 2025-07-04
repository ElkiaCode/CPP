#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << " CONSTRUCTION " << std::endl;
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << "\n TYPES " << std::endl;
	std::cout << "Dog type: " << dog->getType() << std::endl;
	std::cout << "Cat type: " << cat->getType() << std::endl;
	std::cout << "Animal type: " << meta->getType() << std::endl;

	std::cout << "\n SOUNDS " << std::endl;
	meta->makeSound();
	dog->makeSound();
	cat->makeSound();

	std::cout << "\n WRONG ANIMAL TEST " << std::endl;
	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << "WrongAnimal type: " << wrongAnimal->getType() << std::endl;
	std::cout << "WrongCat type: " << wrongCat->getType() << std::endl;

	std::cout << "\n WRONG SOUNDS " << std::endl;
	wrongAnimal->makeSound();
	wrongCat->makeSound();

	std::cout << "\n DESTRUCTION " << std::endl;
	delete meta;
	delete dog;
	delete cat;
	delete wrongAnimal;
	delete wrongCat;

	std::cout << "\n END " << std::endl;
	return 0;
}