/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:53:14 by lleiria-          #+#    #+#             */
/*   Updated: 2023/05/25 17:12:29 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("animal")
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

void	Animal::makeSound(void)
{
	std::cout << this->type << ": AAAAAAAAAAAAAAAAAAAAAAH!!!!!!!" << std::endl;
}