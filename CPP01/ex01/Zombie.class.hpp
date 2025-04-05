/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 12:36:24 by cparodi           #+#    #+#             */
/*   Updated: 2025/04/05 12:36:25 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
#define ZOMBIE_CLASS_HPP
#include <iostream>
#include <string>
#include <limits>
#include <sstream>
#include <cstdlib>

class Zombie
{
    private:
        std::string name_;
    public:
        Zombie(std::string name_);
        Zombie( void );
        ~Zombie();
        void    announce(void);
        void    name_it(std::string name, int i);

};
Zombie  *zombieHorde( int N, std::string name );
#endif
