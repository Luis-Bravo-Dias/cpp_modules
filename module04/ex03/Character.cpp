/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:44:22 by lleiria-          #+#    #+#             */
/*   Updated: 2023/06/12 17:21:08 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){}

Character::Character(std::string name): _slots(0), _name(name)
{
	std::cout << "Default Character constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(Character const &src)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	std::cout << "Copy Character constructor called" << std::endl;
	*this = src;
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
}

Character & Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		this->_slots = rhs._slots;
		this->_name = rhs._name;
		for (int i = 0; i < 4; i++)
			(*this->_inventory[i]) = (*rhs._inventory[i]);
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	if (this->_slots < 4)
	{
		this->_inventory[this->_slots] = m;
		this->_slots++;
	}
	else
		std::cout << "The inventory is full, can't be equiped." << std::endl;
}

void Character::unequip(int idx)
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