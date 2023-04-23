/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 18:10:46 by lleiria-          #+#    #+#             */
/*   Updated: 2023/04/23 15:40:31 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream> 

void	replace(std::ifstream	&infile, std::string s1, std::string s2)
{
	
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

	infile.open(av[1], std::ifstream::in);
	if (infile.is_open())
		replace(infile, av[2], av[3]);
	else
	{
		std::cout << "File can't be opened" << std::endl;
		return (EXIT_FAILURE);
	}
}