/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:18:55 by lleiria-          #+#    #+#             */
/*   Updated: 2023/06/05 17:25:19 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal(): type("AAnimal")
{
	std::cout << "Default AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &src)
{
	std::cout << "Copy AAnimal constructor called" << std::endl;
	*this = src;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal & AAnimal::operator=(AAnimal const &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

void	AAnimal::makeSound(void) const
{
	std::cout << this->type << ": AAAAAAAAAAAAAAAAAAAAAAH!!!!!!!" << std::endl;
}

std::string	AAnimal::getType(void) const
{
	return (this->type);
}