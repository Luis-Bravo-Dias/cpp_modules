/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:44:22 by lleiria-          #+#    #+#             */
/*   Updated: 2023/06/08 16:10:50 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

ICharacter::ICharacter(): _slots(0)
{
	std::cout << "Default Character constructor called" << std::endl;
}

ICharacter::~ICharacter()
{
	std::cout << "Character destructor called" << std::endl;
}

std::string const & ICharacter::getName() const
{
	return (this->_name);
}

void ICharacter::equip(AMateria *m)
{
	if (this->_slots < 4)
	{
		this->_inventory[this->_slots] = m;
		this->_slots++;
	}
	else
		std::cout << "The inventory is full, can't be equiped." << std::endl;
}

void ICharacter::unequip(int idx)
{
	if (idx > -1 && idx < 4)
	{
		if (this->_inventory[idx])
		{
			
		}
		else
			std::cout << "That slot is empty, there's nothing to unequip." << std::endl;
	}
	else
		std::cout << "That is not a slot from the inventory, plese chose a number form 0 to 3." << std::endl;
}