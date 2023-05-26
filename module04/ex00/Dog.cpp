/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:07:11 by lleiria-          #+#    #+#             */
/*   Updated: 2023/05/26 12:40:26 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(Dog const &src): Animal(src)
{
	std::cout << "Copy Dog constructor called" << std::endl;
	*this = src;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;

}

Dog & Dog::operator=(Dog const &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << this->type << ": Woof! Woof!" << std::endl;
}

std::string	Dog::getType(void) const
{
	return (this->type);
}