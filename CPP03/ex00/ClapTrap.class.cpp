/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 09:02:41 by cparodi           #+#    #+#             */
/*   Updated: 2025/04/17 09:16:58 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"

ClapTrap::ClapTrap(std::string name) : Life_(10), Energy_(10), Attack_(0)
{
	this->Name_ = name;
	std::cout << "constructor call for : " << Name_ << std::endl;
	return;
}

ClapTrap::~ClapTrap()
{
	std::cout << "destructor call for : " << Name_ << std::endl;
	return;
}

void ClapTrap::attack(const std::string &target)
{
	
}