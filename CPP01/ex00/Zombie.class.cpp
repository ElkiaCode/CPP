/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 12:33:08 by cparodi           #+#    #+#             */
/*   Updated: 2025/04/05 12:35:49 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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