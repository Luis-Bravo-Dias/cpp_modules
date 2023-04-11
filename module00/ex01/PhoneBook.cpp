/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 15:28:02 by lleiria-          #+#    #+#             */
/*   Updated: 2023/04/11 14:02:55 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){}

PhoneBook::~PhoneBook() {}

int	PhoneBook::get_index() const
{
	return this->_index;
}

void PhoneBook::add_contact()
{
	this->_index += 1;
	if (this->get_index() > 7)
	{
		int	i = 0;
		while (i < 7)
		{
			_contact_list[i] = _contact_list[i + 1];
			i++;
		}
		this->_index = 7;
	}

	std::cout << "Enter your data, please" << std::endl;
	std::cout << "First name: " << std::endl;
	_contact_list[this->get_index()].setFirstName(input());
	std::cout << "Last name: " << std::endl;
	_contact_list[this->get_index()].setLastName(input());
	std::cout << "Nickname: " << std::endl;
	_contact_list[this->get_index()].set_Nickname(input());
	std::cout << "Phone number: " << std::endl;
	_contact_list[this->get_index()].set_PhoneNumber(input());
	std::cout << "Don't worry, but now I need you to tell your darkest secret" << std::endl;
	_contact_list[this->get_index()].set_DarkestSecret(input());
	
	return;
}

void	PhoneBook::search()
{
	if (_contact_list[0].getFirstName().size() == 0)
	{
        std::cout << "Please ADD contacts first before SEARCH" << std::endl;
        return ;
    }
	
}

int PhoneBook::_index = -1;