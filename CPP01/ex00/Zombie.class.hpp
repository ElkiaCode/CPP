#ifndef ZOMBIE_CLASS_HPP
#define ZOMBIE_CLASS_HPP
#include <iostream>
#include <string>
#include <limits>

class Zombie
{
    private:
        std::string name_;
    public:
        Zombie(std::string name_);
        ~Zombie();
        void announce(void);
};
Zombie *newZombie(std::string name);
void randomChump();
#endif