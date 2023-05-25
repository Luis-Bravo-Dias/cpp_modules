/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:55:05 by lleiria-          #+#    #+#             */
/*   Updated: 2023/05/25 13:05:29 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_HP = 100;
	this->_EP = 50;
	this->_attack = 20;
	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src): ClapTrap(src)
{
	std::cout << "Copy ScavTrap constructor called" << std::endl;
	*this = src;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const& rhs)
{

	if (this != &rhs)
	{
		this->_attack = rhs._attack;
		this->_EP = rhs._EP;
		this->_HP = rhs._HP;
	}	
	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_HP > 0)
	{
		if (this->_EP)
		{
			std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack << " points of damage!" << std::endl;
			this->_EP--;
			std::cout << "EP: " << this->_EP << std::endl;
		}
		else
			std::cout << "No energy, ScavTrap " << this->_name << " can't attack..." << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " is dead, can't attack." << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " entered in Gate Keeper mode!" << std::endl;
}