/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:27:25 by cparodi           #+#    #+#             */
/*   Updated: 2025/04/08 13:10:22 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.class.hpp"

int main()
{
	Harl Harl;
	std::string entry;

	while (1)
	{
		std::cout << "Enter complain :";
		if (std::getline(std::cin, entry))
			Harl.complain(entry);
	}
	return (0);
}