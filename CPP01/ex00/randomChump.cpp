#include "Zombie.class.hpp"

void randomChump()
{
    std::string name = "Steve";
    Zombie randomChump(name);
    randomChump.announce();
}