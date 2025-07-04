#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

// on uttilise pas les fichier WrongAnimal et WrongCat mais je les ai quand meme laiser comme demander

int main()
{
	std::cout << " CONSTRUCTION " << std::endl;

	const int size = 4;
	Animal* animals[size];

	for (int i = 0; i < size / 2; ++i)
		animals[i] = new Dog();

	for (int i = size / 2; i < size; ++i)
		animals[i] = new Cat();

	std::cout << "\n DESTRUCTION " << std::endl;
	for (int i = 0; i < size; ++i)
		delete animals[i];

	std::cout << "\n COPY TEST " << std::endl;

	Dog original;
	Dog copy(original);

	std::cout << "\n END " << std::endl;
	return (0);
}
