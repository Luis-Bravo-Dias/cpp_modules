/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:49:15 by lleiria-          #+#    #+#             */
/*   Updated: 2023/05/24 15:58:05 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_HP = 100;
	this->_EP = 100;
	this->_attack = 30;
	std::cout << "Default FragTrap constructor was summoned" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor was summoned" << std::endl;

}

FragTrap::FragTrap(FragTrap const &src): ClapTrap(src)
{
	std::cout << "Copy FragTrap constructor was summoned" << std::endl;
	*this = src;
}

// void FragTrap::attack(const std::string &target)
// {
// 	if (this->_HP > 0)
// 	{
// 		if (this->_EP)
// 		{
// 			std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attack << " points of damage!" << std::endl;
// 			this->_EP--;
// 			std::cout << "EP: " << this->_EP << std::endl;
// 		}
// 		else
// 			std::cout << "No energy, FragTrap " << this->_name << " can't attack..." << std::endl;
// 	}
// 	else
// 		std::cout << "FragTrap " << this->_name << " is dead, can't attack." << std::endl;
// }

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->_name << ": Hey, guys! High five!" << std::endl;
}