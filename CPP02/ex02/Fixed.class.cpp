/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:11:41 by cparodi           #+#    #+#             */
/*   Updated: 2025/04/11 12:44:44 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed() : n(0)
{
	std::cout << "Default constructor called!" << std::endl;
	return;
}

Fixed::Fixed(const int value) : n(value << bit)
{
	std::cout << "Int constructor called!" << std::endl;
	return;
}

Fixed::Fixed(const float value) : n(roundf(value * (1 << bit)))
{
	std::cout << "Float constructor called!" << std::endl;
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

int Fixed::toInt() const
{
	return (n >> bit);
}

float Fixed::toFloat() const
{
	return (static_cast<float>(n) / (1 << bit));
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

Fixed Fixed::operator+(const Fixed &other) const 
{
    return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed &other) const 
{
    return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed &other) const 
{
    return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed &other) const 
{
    return (Fixed(this->toFloat() / other.toFloat()));
}

bool Fixed::operator>(const Fixed &other) const
{
	return (this->toFloat() > other.toFloat());
}

bool Fixed::operator<(const Fixed &other) const
{
	return (this->toFloat() < other.toFloat());
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (this->toFloat() >= other.toFloat());
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (this->toFloat() <= other.toFloat());
}

bool Fixed::operator==(const Fixed &other) const
{
	return (this->toFloat() == other.toFloat());
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (this->toFloat() != other.toFloat());
}

Fixed &Fixed::operator++()
{
	n++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	n++;
	return (temp);
}

Fixed &Fixed::operator--()
{
	n--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	n--;
	return (temp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}