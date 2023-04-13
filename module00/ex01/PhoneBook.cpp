/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 15:28:02 by lleiria-          #+#    #+#             */
/*   Updated: 2023/04/13 17:11:41 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdlib>

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
	if (std::cin.eof() == 1)
		exit(1);
	std::cout << "Last name: " << std::endl;
	_contact_list[this->get_index()].setLastName(input());
	if (std::cin.eof() == 1)
		exit(1);
	std::cout << "Nickname: " << std::endl;
	_contact_list[this->get_index()].set_Nickname(input());
	if (std::cin.eof() == 1)
		exit(1);
	std::cout << "Phone number: " << std::endl;
	_contact_list[this->get_index()].set_PhoneNumber(input());
	if (std::cin.eof() == 1)
		exit(1);
	std::cout << "Don't worry, but now I need you to tell your darkest secret" << std::endl;
	_contact_list[this->get_index()].set_DarkestSecret(input());
	if (std::cin.eof() == 1)
		exit(1);
	return;
}

void PhoneBook::_display_choices(int i)
{
	std::string FirstName = _contact_list[i].getFirstName();
	std::string LastName = _contact_list[i].getLastName();
	std::string	Nickname = _contact_list[i].getNickname();
	std::cout << i + 1 << "    |";
	if (_contact_list[i].getFirstName().size() > 10)
	{
		FirstName.resize(9);
		std::cout << FirstName << ".|";
	}
	else
	{
		FirstName.resize(10, ' ');
		std::cout << FirstName << "|";
	}
	if (_contact_list[i].getLastName().size() > 10)
	{
		LastName.resize(9);
		std::cout << LastName << ".|";
	}
	else
	{
		LastName.resize(10, ' ');
		std::cout << LastName << "|";
	}
	if (_contact_list[i].getNickname().size() > 10)
	{
		Nickname.resize(9);
		std::cout << Nickname << ".";
	}
	else
	{
		Nickname.resize(10, ' ');
		std::cout << Nickname;
	}
	std::cout << std::endl;
	return ;
}

void	PhoneBook::_show_info(int index)
{
	std::cout << "First Name:" << std::endl;
	std::cout << _contact_list[index].getFirstName() << std::endl;
	std::cout << "Last Name:" << std::endl;
	std::cout << _contact_list[index].getLastName() << std::endl;
	std::cout << "Nickname:" << std::endl;
	std::cout << _contact_list[index].getNickname() << std::endl;
	std::cout << "Phone Number:" << std::endl;
	std::cout << _contact_list[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret" << std::endl;
	std::cout << _contact_list[index].getDarkestSecret() << std::endl << std::endl;
	return ;
}

void	PhoneBook::search()
{
	int i = 0;
	if (_contact_list[0].getFirstName().size() == 0)
	{
        std::cout << "\e[31mPlease ADD contacts first before SEARCH\e[0m" << std::endl << std::endl;
        return ;
    }
	std::cout << "**************************************************" << std::endl;
	std::cout << "*>>>>>>>>>>>>>>>>>\e[34mContact List\e[0m<<<<<<<<<<<<<<<<<<<*" << std::endl;
	std::cout << "**************************************************" << std::endl;
	std::cout << "Choose an index:" << std::endl;
	std::cout << "Index|First Name|Last Name |Nickname  " << std::endl;
	while (i <= get_index())
	{
		_display_choices(i);
		i++;
	}
	std::string choice = input();
	if (choice.size() > 1)
	{
		std::cout << "\e[31mInvalid index\e[0m" << std::endl << std::endl;
		return ;
	}
	if (isdigit(choice[0]) && choice[0] >= '1' && choice[0] <= '8')
	{
		int	index = choice[0] - 49;
		if (_contact_list[index].getFirstName().size() == 0)
		{
			std::cout << "\e[31mInvalid index\e[0m" << std::endl << std::endl;
			return ;
		}
		_show_info(index);
	}
	else
	{
		std::cout << "\e[31mInvalid index\e[0m" << std::endl << std::endl;
		return ;
	}
	return ;
}

int PhoneBook::_index = -1;