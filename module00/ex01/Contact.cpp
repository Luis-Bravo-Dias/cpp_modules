/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 15:55:26 by lleiria-          #+#    #+#             */
/*   Updated: 2023/04/14 13:02:08 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <string>

Contact::Contact() {}

Contact::~Contact() {}

void	Contact::setFirstName(std::string name)
{
	this->_first_name = name;
	return;
}
		
void	Contact::setLastName(std::string	surname)
{
	this->_last_name = surname;
	return;
}

void	Contact::set_Nickname(std::string nickname)
{
	this->_nickname = nickname;
	return;
}

void	Contact::set_PhoneNumber(std::string number)
{
	this->_phone_number = number;
	return;
}

void	Contact::set_DarkestSecret(std::string secret)
{
	this->_darkest_secret = secret;
	return;
}

std::string Contact::getFirstName()
{
	return this->_first_name;
}

std::string Contact::getLastName()
{
	return this->_last_name;
}

std::string Contact::getNickname()
{
	return this->_nickname;
}

std::string Contact::getPhoneNumber()
{
	return this->_phone_number;
}

std::string Contact::getDarkestSecret()
{
	return this->_darkest_secret;
}