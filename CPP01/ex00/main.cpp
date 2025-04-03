#include "Zombie.class.hpp"

int main()
{
    Zombie *FirstNewZombie;

    FirstNewZombie = newZombie("New Zombie");
    FirstNewZombie->announce();
    randomChump();
    delete FirstNewZombie;
    return (0);
}