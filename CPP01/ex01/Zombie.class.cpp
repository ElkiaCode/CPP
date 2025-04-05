/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 12:36:20 by cparodi           #+#    #+#             */
/*   Updated: 2025/04/05 12:36:22 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie::Zombie(std::string name)
{
	this->name_ = name;
	std::cout << "Zombie \"" << name_ << "\" created" << std::endl;
	return ;
}

Zombie::Zombie()
{
	std::cout << "NewZombie join the Horde" << std::endl;
	return ;
}

Zombie::~Zombie()
{
	std::cout << name_ << "\" destroyed" << std::endl;
	return ;
}

void Zombie::announce(void)
{
	std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::name_it(std::string name, int i)
{
	std::ostringstream oss;
	oss << i + 1;
	this->name_ = name + oss.str();
	return ;
}
