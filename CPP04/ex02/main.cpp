#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

// on uttilise pas les fichier WrongAnimal et WrongCat mais je les ai quand meme laiser comme demander

int main() {
    Animal* dog = new Dog();
    Animal* cat = new Cat();
    std::cout << "Dog type: " << dog->getType() << std::endl;
    std::cout << "Cat type: " << cat->getType() << std::endl;
    dog->makeSound();
    cat->makeSound();
    delete dog;
    delete cat;

    return (0);
}