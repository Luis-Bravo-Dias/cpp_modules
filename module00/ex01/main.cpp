/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 15:40:08 by lleiria-          #+#    #+#             */
/*   Updated: 2023/04/05 17:23:50 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main()
{
	char	input[7];
	
	std::cout << "Welcome to the PhoneBook" << std::endl;
	std::cout << "Chose your action:\n->ADD\n->SEARCH\n->EXIT" << std::endl;
	std::cin >> input;
	std::cout << "Input: " << input << std::endl;

	return (0);
}