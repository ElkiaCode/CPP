/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 12:36:34 by cparodi           #+#    #+#             */
/*   Updated: 2025/04/05 12:36:35 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <limits>
#include <sstream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string &ref = str;
	std::string *ptr = &str;

	std::cout << "string = " << &str << std::endl;
	std::cout << "stringPTR = " << ptr << std::endl;
	std::cout << "stringREF = " << &ref << std::endl;

	std::cout << std::endl;

	std::cout << "string = " << str << std::endl;
	std::cout << "stringPTR = " << *ptr << std::endl;
	std::cout << "stringREF = " << ref << std::endl;
}
