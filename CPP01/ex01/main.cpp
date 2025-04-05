/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 12:36:13 by cparodi           #+#    #+#             */
/*   Updated: 2025/04/05 12:36:14 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

int main()
{
    int N = 3;
    int i = 0;
    Zombie *Horde = zombieHorde(N, "Zombie");
    while (i < N)
    {
        Horde[i].announce();
        i++;
    }
    delete [] Horde;
    return (0);
}
