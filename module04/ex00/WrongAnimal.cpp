/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:48:24 by lleiria-          #+#    #+#             */
/*   Updated: 2023/05/26 15:51:46 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal")
{
	std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	std::cout << "Copy WrongAnimal constructor called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << this->type << ": I'm not suposed to talk, take your meds." << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}