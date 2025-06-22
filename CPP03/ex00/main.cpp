/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 17:23:04 by cparodi           #+#    #+#             */
/*   Updated: 2025/06/22 17:23:21 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap clap("amiral Ackbar");

    clap.attack("Enemy");
    clap.takeDamage(5);
    clap.beRepaired(3);
    clap.attack("Another enemy");
}