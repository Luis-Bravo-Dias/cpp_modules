/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 18:10:46 by lleiria-          #+#    #+#             */
/*   Updated: 2023/04/24 17:36:21 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream> 
#include <cstdlib>
#include <string.h>
#include <stdlib.h>

void	swapStrings(std::ofstream &outfile, std::string s1, std::string s2)
{
	std::string line;
	
	while(std::getline(outfile, line))
	{
		
	}
}

int	copyFile(std::ifstream	&infile, std::ofstream &outfile)
{
	std::string	line;
	if (infile && outfile)
		while (getline(infile, line))
			outfile << line << "\n";
	else
	{
		std::cout << "Cannot read the file" << std::endl;
		return (EXIT_FAILURE);
	}
	return (0);
}

void	replace(std::ifstream	&infile, char **av)
{
	std::string	newFileName = av[1];
	newFileName += ".replace";
	std::string	s1 = av[2];
	std::string	s2 = av[3];
	
	std::ofstream	outfile;
	outfile.open(newFileName.c_str());
	copyFile(infile, outfile);
	infile.close();
	swapStrings(outfile, s1, s2);
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		std::cout << "Place one file and two strings" << std::endl;
		return (EXIT_FAILURE);
	}
	std::ifstream	infile;

	infile.open(av[1]);
	if (infile.is_open())
		replace(infile, av);
	else
	{
		std::cout << "File can't be opened" << std::endl;
		return (EXIT_FAILURE);
	}
}