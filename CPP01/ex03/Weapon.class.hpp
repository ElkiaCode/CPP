/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 12:36:57 by cparodi           #+#    #+#             */
/*   Updated: 2025/04/05 14:31:03 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_HPP
#define WEAPON_CLASS_HPP
#include <iostream>
#include <string>
#include <limits>
#include <sstream>
#include <cstdlib>

class Weapon
{
	private:
		std::string type_;

	public:
		Weapon(std::string type);
		~Weapon();
		const std::string getType();
		void setType(std::string type);
};

#endif