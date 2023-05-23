/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:43:47 by lleiria-          #+#    #+#             */
/*   Updated: 2023/05/23 16:55:16 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _HP(10), _EP(10), _attack(0)
{
	std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "Copy ClapTrap constructor called" << std::endl;
	*this = src;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_HP > 0)
	{
		if (this->_EP)
		{
			std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack << " points of damage!" << std::endl;
			this->_EP--;
			std::cout << "EP: " << this->_EP << std::endl;
		}
		else
			std::cout << "No energy, ClapTrap " << this->_name << " can't attack..." << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is dead, can't attack." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_HP > 0)
	{
		this->_HP -= amount;
		std::cout << "ClapTrap " << this->_name << " received " << amount << " of damege!" << std::endl;
		if (this->_HP < 0)
			this->_HP = 0;
		std::cout << "HP: " << this->_HP << std::endl;
		if (this->_HP <= 0)
			std::cout << "ClapTrap " << this->_name << " died." << std::endl;
	}
	else
		std::cout << "Don't kick a dead dog, ClapTrap " << this->_name << " is already dead." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_HP > 0)
	{
		if (this->_EP)
		{
			this->_HP += amount;
			std::cout << "ClapTrap " << this->_name << " gained " << amount << " HP" << std::endl;
			std::cout << "HP: " << this->_HP << std::endl;
			this->_EP--;
			std::cout << "EP: " << this->_EP << std::endl;
		}
		else
			std::cout << "No energy, ClapTrap " << this->_name << " can't be repaired..." << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is dead, is to late for repair." << std::endl;
}