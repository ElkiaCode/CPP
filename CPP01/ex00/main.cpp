/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 12:34:02 by cparodi           #+#    #+#             */
/*   Updated: 2025/04/05 12:35:37 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

int main()
{
    Zombie *FirstNewZombie;

    FirstNewZombie = newZombie("New Zombie");
    FirstNewZombie->announce();
    randomChump();
    delete FirstNewZombie;
    return (0);
}
