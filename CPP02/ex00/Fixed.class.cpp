/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:11:41 by cparodi           #+#    #+#             */
/*   Updated: 2025/04/08 14:57:01 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed() : n(0)
{
	std::cout << "Default constructor called!" << std::endl;
	return;
}

Fixed::Fixed(const Fixed &other) : n(other.n)
{
	std::cout << "Copy constructor called!" << std::endl;
	return;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignment operator called!" << std::endl;
	if (this != &other)
	{
		this->n = other.n;
	}
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called!" << std::endl;
	return;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->n);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->n = raw;
	return;
}