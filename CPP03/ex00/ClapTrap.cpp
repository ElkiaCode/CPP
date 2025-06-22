/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 17:22:48 by cparodi           #+#    #+#             */
/*   Updated: 2025/06/22 17:22:55 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
    std::cout << "ClapTrap " <<  _name << " has been constructed!" << std::endl;
	return;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " has been destroyed!" << std::endl;
	return;
}

void ClapTrap::attack(const std::string& target)
{
    if (_EnergyPoints > 0 && _HitPoints > 0)
    {
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _AttackDamage << " points of damage!" << std::endl;
        _EnergyPoints -= 1;
    }
    else if (_HitPoints < 1)
        std::cout << "ClapTrap " << _name << " has no more hit points" << std::endl;
    else if (_EnergyPoints < 1)
        std::cout << "ClapTrap " << _name << " has no more energy points" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_HitPoints > 0)
    {
        std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
        _HitPoints -= amount;
        if (_HitPoints < 0)
           _HitPoints = 0;
    }
    if (_HitPoints < 1)
        std::cout << "ClapTrap " << _name << " has no more hit points" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_EnergyPoints > 0 && _HitPoints > 0)
    {
        std::cout << "ClapTrap " << _name << " repairs itself, recovering " << amount << " hit points!" << std::endl;
        _EnergyPoints -= 1;
        _HitPoints += amount;
    }
    else if (_HitPoints < 1)
        std::cout << "ClapTrap " << _name << " has no more hit points" << std::endl;
    else if (_EnergyPoints < 1)
        std::cout << "ClapTrap " << _name << " has no more energy points" << std::endl;
}