/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 17:26:59 by cparodi           #+#    #+#             */
/*   Updated: 2025/06/22 17:27:01 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ScavTrap guard("Guardian");

    guard.attack("Enemy");
    guard.takeDamage(30);
    guard.beRepaired(20);
    guard.guardGate();
}