/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 12:36:54 by cparodi           #+#    #+#             */
/*   Updated: 2025/04/05 14:31:11 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.class.hpp"

const std::string Weapon::getType()
{
	const std::string type = type_;
	return (type);
}

void Weapon::setType(std::string type)
{
	this->type_ = type;
	return;
}

Weapon::Weapon(std::string type)
{
	this->type_ = type;
	return;
}

Weapon::~Weapon()
{
	return;
}