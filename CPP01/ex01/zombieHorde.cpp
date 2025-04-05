/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 12:36:29 by cparodi           #+#    #+#             */
/*   Updated: 2025/04/05 12:36:31 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int i = 0;
	Zombie *Horde = new Zombie[N];

	while (i < N)
	{
		Horde[i].name_it(name, i);
		i++;
	}
    return(Horde);
}
