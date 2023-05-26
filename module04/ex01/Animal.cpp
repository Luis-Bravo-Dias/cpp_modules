/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:35:33 by lleiria-          #+#    #+#             */
/*   Updated: 2023/05/26 17:35:49 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Animal")
{
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(Animal const &src)
{
	std::cout << "Copy Animal constructor called" << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal & Animal::operator=(Animal const &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << this->type << ": AAAAAAAAAAAAAAAAAAAAAAH!!!!!!!" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}