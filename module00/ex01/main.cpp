/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 15:40:08 by lleiria-          #+#    #+#             */
/*   Updated: 2023/04/13 16:54:08 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	input()
{
	std::string	line;
	
	while (line.empty())
		std::getline(std::cin >> std::ws, line);
	return (line);
}

int	main()
{
	std::string	input;
	PhoneBook	book;
	
	while (1)
	{
		std::string	input;
		std::cout << "Welcome to the PhoneBook" << std::endl;
		std::cout << "Choose your action:" << std::endl << "\e[32m->ADD\e[0m" << std::endl << "\e[33m->SEARCH\e[0m" << std::endl << "\e[31m->EXIT\e[0m" << std::endl;
		std::getline(std::cin >> std::ws, input);
		if (std::cin.eof() == 1)
			return (0);
		if (input ==  "EXIT")
			break ;
		else if (input == "ADD")
			book.add_contact();
		else if (input == "SEARCH")
		{
			book.search();
		}
		else
		{
			std::cout << std::endl;
			std::cout << input << " command not found" << std::endl << std::endl;
		}
	}
	return (0);
}