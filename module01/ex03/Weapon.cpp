/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:48:22 by lleiria-          #+#    #+#             */
/*   Updated: 2023/04/21 17:13:00 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	setType(type);
};

Weapon::~Weapon(){};

std::string Weapon::getType() const&
{
	return(this->_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}