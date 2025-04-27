/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:29:23 by cparodi           #+#    #+#             */
/*   Updated: 2025/04/17 11:30:05 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.class.hpp"

void Harl::debug()
{
	std::cout << "J'ai passé 5 heures à chercher où j'avais posé mes lunettes… et elles étaient sur ma tête. Génial, non ?!" << std::endl;
	return;
}

void Harl::info()
{
	std::cout << "J’ai remarqué que ma plante dans le salon me regarde d’un air suspect. Je suis peut-être juste parano, mais je vais l'arroser quand même." << std::endl;
	return;
}

void Harl::warning()
{
	std::cout << "J'ai essayé de faire cuire des pâtes… mais maintenant elles sont aussi collantes que mes idées un lundi matin. À vos risques et périls !" << std::endl;
	return;
}

void Harl::error()
{
	std::cout << "J'ai perdu ma télécommande sous le canapé. C’est plus qu’une erreur, c’est un crime contre l'humanité. Help!" << std::endl;
	return;
}

Harl::Harl()
{
	return;
}

Harl::~Harl()
{
	return;
}

void Harl::complain(std::string level)
{
	int i = 0;
	std::string LevelNames[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*levels[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (; i < 4; i++)
	{
		if (level == LevelNames[i])
			break;
	}
	switch (i) {
	case 0: (this->*levels[0])(); break;
	case 1: (this->*levels[1])(); break;
	case 2: (this->*levels[2])(); break;
	case 3: (this->*levels[3])(); break;
	default: std::cout << "Invalid level!" << std::endl; break;
	}
}