#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

// on uttilise pas les fichier WrongAnimal et WrongCat mais je les ai quand meme laiser comme demander

int main() {
    std::cout << "\n CONSTRUCTOR" << std::endl;
    Animal* dog = new Dog();
    Animal* cat = new Cat();
    std::cout << "\n TYPE" << std::endl;
    std::cout << "Dog type: " << dog->getType() << std::endl;
    std::cout << "Cat type: " << cat->getType() << std::endl;
    std::cout << "\n SOUNDS" << std::endl;
    dog->makeSound();
    cat->makeSound();
    std::cout << "\n DESTRUCTOR" << std::endl;
    delete dog;
    delete cat;

    return (0);
}