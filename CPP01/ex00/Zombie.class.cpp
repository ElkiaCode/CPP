#include "Zombie.class.hpp"

Zombie::Zombie(std::string name)
{
    this->name_ = name;
    std::cout << "Zombie \"" << name_ << "\" created" << std::endl;
    return;
}

Zombie::~Zombie()
{
    std::cout << "Zombie \"" << name_ << "\" destroyed" << std::endl;
    return;
}

void Zombie::announce(void)
{
    std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}