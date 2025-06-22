/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 17:28:00 by cparodi           #+#    #+#             */
/*   Updated: 2025/06/22 17:28:01 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{

    ClapTrap clap("Clappy");
    ScavTrap scav("Scavvy");
    FragTrap frag("Fraggy");

    std::cout << "\n" << std::endl;


    clap.attack("a paper target");
    clap.takeDamage(3);
    clap.beRepaired(2);

    std::cout << "\n" << std::endl;

    scav.attack("a dummy");
    scav.takeDamage(20);
    scav.beRepaired(10);
    scav.guardGate();

    std::cout << "\n" << std::endl;

    frag.attack("a punching bag");
    frag.takeDamage(50);
    frag.beRepaired(25);
    frag.highFivesGuys();

    std::cout << "\n" << std::endl;
    return 0;
}