/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:08:12 by cparodi           #+#    #+#             */
/*   Updated: 2025/04/08 12:20:45 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

std::string replace_all(std::string content_file, std::string s1, std::string s2)
{
	size_t pos = 0;

	while ((pos = content_file.find(s1, pos)) != std::string::npos)
	{
		content_file.erase(pos, s1.length());
		content_file.insert(pos, s2);
		pos += s2.length();
	}
	return (content_file);
}

std::string open_file(const std::string &filename)
{
	std::ifstream file(filename.c_str());
	std::string line;
	std::string result;

	if (!file)
	{
		std::cerr << "error: connot open file." << std::endl;
	}
	while (std::getline(file, line))
	{
		result += line;
		result += "\n";
	}
	file.close();
	return (result);
}

int main(int ac, char **av)
{
	if (ac != 4){
		std::cout << "bad entry number" << std::endl;
		return (1);
	}
	
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string content_file;
	std::string outputfilename = filename + ".replace";
	
	content_file = open_file(filename);
	content_file = replace_all(content_file, s1, s2);
	std::ofstream outputfile(outputfilename.c_str());
	if (!outputfile){
		std::cerr << "error: creation of output file impossible" << std::endl;
		return (1);
	}
	outputfile << content_file;
	outputfile.close(); 
	return (0);
}