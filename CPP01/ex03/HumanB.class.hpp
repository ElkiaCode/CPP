/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 12:36:47 by cparodi           #+#    #+#             */
/*   Updated: 2025/04/05 14:41:51 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_HPP
#define HUMANB_CLASS_HPP
#include "Weapon.class.hpp"
#include <iostream>
#include <string>
#include <limits>
#include <sstream>
#include <cstdlib>

class HumanB
{
	private:
		std::string name_;
		Weapon *Weapon_;

	public:
		HumanB(std::string name);
		~HumanB();
		void attack();
		void setWeapon(Weapon &Weapon);
	
};

#endif