#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _HitPoints = 100;
    _EnergyPoints = 50;
    _AttackDamage = 20;
    std::cout << "ScavTrap " << _name << " is born!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " has been destroyed!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (_EnergyPoints > 0 && _HitPoints > 0)
    {
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _AttackDamage << " points of damage!" << std::endl;
        _EnergyPoints -= 1;
    }
    else if (_HitPoints < 1)
        std::cout << "ScavTrap " << _name << " has no more hit points" << std::endl;
    else if (_EnergyPoints < 1)
        std::cout << "ScavTrap " << _name << " has no more energy points" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " has entered Gate Keeper mode!" << std::endl; 
}