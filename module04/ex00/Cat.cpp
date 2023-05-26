/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 11:18:38 by lleiria-          #+#    #+#             */
/*   Updated: 2023/05/26 15:59:07 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(Cat const &src): Animal(src)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	*this = src;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;

}

Cat & Cat::operator=(Cat const &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << this->type << ": Meeeeeeaoooow..." << std::endl;
}

std::string	Cat::getType(void) const
{
	return (this->type);
}