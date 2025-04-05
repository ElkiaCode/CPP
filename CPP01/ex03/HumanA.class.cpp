/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 12:36:39 by cparodi           #+#    #+#             */
/*   Updated: 2025/04/05 14:52:32 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.class.hpp"
#include "Weapon.class.hpp"

HumanA::HumanA(std::string name, Weapon &Weapon) : name_(name), Weapon_(Weapon)
{
	std::cout << name_ << " join the battle!" << std::endl;
	return;
}

HumanA::~HumanA()
{
	std::cout << name_ << " is falling back!" << std::endl;
	return;
}

void HumanA::attack()
{
	std::cout << name_ << " attacks with their " << Weapon_.getType() << std::endl;
	return;
}
