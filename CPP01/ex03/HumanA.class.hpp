/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 12:36:41 by cparodi           #+#    #+#             */
/*   Updated: 2025/04/05 14:19:27 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_HPP
#define HUMANA_CLASS_HPP
#include "Weapon.class.hpp"
#include <iostream>
#include <string>
#include <limits>
#include <sstream>
#include <cstdlib>

class HumanA
{
	private:
		std::string name_;
		Weapon &Weapon_;

	public:
		HumanA(std::string name, Weapon &Weapon);
		~HumanA();
		void attack();

};

#endif
