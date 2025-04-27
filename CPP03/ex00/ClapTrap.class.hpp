/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 08:56:33 by cparodi           #+#    #+#             */
/*   Updated: 2025/04/17 09:10:17 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_HPP
#define CLAPTRAP_CLASS_HPP
#include <string>
#include <iostream>
#include <cmath>


class ClapTrap
{
	private: 
		std::string Name_;
		unsigned int Life_;
		unsigned int Energy_;
		unsigned int Attack_;
		
	public:
		ClapTrap(std::string name);
		~ClapTrap();

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};

#endif