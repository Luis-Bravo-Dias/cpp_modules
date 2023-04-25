/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 18:10:46 by lleiria-          #+#    #+#             */
/*   Updated: 2023/04/25 15:36:38 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream> 
#include <cstdlib>

int	swaping(std::ifstream &infile, std::ofstream &outfile, std::string s1, std::string s2)
{
	std::string	line;
	if (infile && outfile)
	{
		std::getline(infile, line, '\0');
		
		size_t	foundPosition = line.find(s1);
		size_t lastPosition = std::string::npos;
		while (foundPosition != std::string::npos)
		{
			if (foundPosition == lastPosition)
    		    foundPosition++;
    		else
    		{
    		    line.erase(foundPosition, s1.length());
    		    line.insert(foundPosition, s2);
    		    lastPosition = foundPosition;
    		    foundPosition = line.find(s1, foundPosition + s2.length());
    		}
		}
		outfile << line;
	}
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
	swaping(infile, outfile, s1, s2);
	infile.close();
	outfile.close();
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
		std::cout << "File can't be opened or does not exist" << std::endl;
		return (EXIT_FAILURE);
	}
	return (0);
}