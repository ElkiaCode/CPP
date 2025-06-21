#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _HitPoints = 100;
    _EnergyPoints = 100;
    _AttackDamage = 30;
    std::cout << "FragTrap " << _name << " is born!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " has been destroyed!" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
    if (_EnergyPoints > 0 && _HitPoints > 0)
    {
        std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _AttackDamage << " points of damage!" << std::endl;
        _EnergyPoints -= 1;
    }
    else if (_HitPoints < 1)
        std::cout << "FragTrap " << _name << " has no more hit points" << std::endl;
    else if (_EnergyPoints < 1)
        std::cout << "FragTrap " << _name << " has no more energy points" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << _name << " requests a high five!" << std::endl;
}