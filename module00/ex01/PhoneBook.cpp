/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 15:28:02 by lleiria-          #+#    #+#             */
/*   Updated: 2023/04/06 17:16:37 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_index = -1;
}

PhoneBook::~PhoneBook() {}

int	PhoneBook::get_index() const
{
	return this->_index;
}

void PhoneBook::add_contact()
{
	Contact	con;
	this->_index += 1;
	
	// if (this->get_index() < 8)
	// {
	// 	this->
	// }
	return;
}

