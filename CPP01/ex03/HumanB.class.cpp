/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 12:36:44 by cparodi           #+#    #+#             */
/*   Updated: 2025/04/05 14:52:44 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.class.hpp"

HumanB::HumanB(std::string name) : name_(name), Weapon_(NULL)
{
	std::cout << name_ << " join the battle!" << std::endl;
	return;
}

HumanB::~HumanB()
{
	std::cout << name_ << " is falling back!" << std::endl;
	return;
}

void HumanB::setWeapon(Weapon &Weapon)
{
	this->Weapon_ = &Weapon;
	return;
}

void HumanB::attack()
{
	if (this->Weapon_)
		std::cout << name_ << " attacks with their " << Weapon_->getType() << std::endl;
	else
		std::cout << name_ << " tries to attack but is unarmed!" << std::endl;
}
