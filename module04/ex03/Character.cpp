/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:44:22 by lleiria-          #+#    #+#             */
/*   Updated: 2023/06/14 15:16:16 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Materia.hpp"

Character::Character(){}

Character::Character(std::string name): _name(name)
{
	// std::cout << "Default Character constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(Character const &src)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	// std::cout << "Copy Character constructor called" << std::endl;
	*this = src;
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
}

Character & Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		for (size_t i = 0; i < 4; i++)
		{
			if (this->_inventory[i] != NULL)
			{
				delete this->_inventory[i];
				this->_inventory[i] = NULL;
			}
			if (rhs._inventory[i] != NULL)
				this->_inventory[i] = rhs._inventory[i]->clone();
		}
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	if (m == 0)
	{
		std::cout << "That materia doesn't exist" << std::endl;
		return ;
	}
	int i = 0;
	while (i < 4)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			break;
		}
		i++;
	}
	if (i == 4)
		std::cout << "The inventory is full, can't be equiped." << std::endl;
}

void Character::unequip(int idx)
{
	if (idx > -1 && idx < 4 && this->_inventory[idx] != NULL)
		this->_inventory[idx] = NULL;
	else if (idx < 0 || idx > 3)
		std::cout << "That is not a slot from the inventory, please choose a number form 0 to 3." << std::endl;
	else
		std::cout << "That slot is empty, there's nothing to unequip." << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx > -1 && idx < 4 && this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
	else
		std::cout << "That is not a slot from the inventory, please choose a number form 0 to 3." << std::endl;

}