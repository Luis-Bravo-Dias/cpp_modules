/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 15:40:08 by lleiria-          #+#    #+#             */
/*   Updated: 2023/04/12 16:49:06 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	input()
{
	std::string	line;
	
	while (line.empty())
		std::getline(std::cin, line);
	return (line);
}

int	main()
{
	std::string	input;
	PhoneBook	book;
	
	while (1)
	{
		std::cout << "Welcome to the PhoneBook" << std::endl;
		std::cout << "Chose your action:" << std::endl << "\e[32m->ADD\e[0m" << std::endl << "\e[33m->SEARCH\e[0m" << std::endl << "\e[31m->EXIT\e[0m" << std::endl;
		std::cin >> input;
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