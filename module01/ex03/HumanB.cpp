/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:49:50 by lleiria-          #+#    #+#             */
/*   Updated: 2023/04/22 16:52:46 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
	this->_disarmed = true;
}

HumanB::~HumanB(){};

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	this->_disarmed = false;
}

void	HumanB::attack()
{
	if (this->_disarmed)
		std::cout << this->_name << " attacks with their bare hands" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}