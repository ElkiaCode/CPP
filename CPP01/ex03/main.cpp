/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 12:36:50 by cparodi           #+#    #+#             */
/*   Updated: 2025/04/05 14:55:31 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.class.hpp"
#include "HumanA.class.hpp"
#include "HumanB.class.hpp"

int main()
{
	{
		Weapon club = Weapon("Sword");
		HumanA steve("steve", club);
		steve.attack();
		club.setType("Heavy Cross Bow");
		steve.attack();
	}
	{
		Weapon club = Weapon("Halberd");
		HumanB boby("boby");
		boby.setWeapon(club);
		boby.attack();
		club.setType("Daguer");
		boby.attack();
	}
	return 0;
}