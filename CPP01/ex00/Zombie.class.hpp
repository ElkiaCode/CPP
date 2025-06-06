/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 12:33:16 by cparodi           #+#    #+#             */
/*   Updated: 2025/04/05 12:35:58 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
#define ZOMBIE_CLASS_HPP
#include <iostream>
#include <string>
#include <limits>

class Zombie
{
    private:
        std::string name_;
    public:
        Zombie(std::string name_);
        ~Zombie();
        void announce(void);
};
Zombie *newZombie(std::string name);
void randomChump();
#endif