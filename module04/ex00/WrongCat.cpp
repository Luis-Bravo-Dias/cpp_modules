/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:56:30 by lleiria-          #+#    #+#             */
/*   Updated: 2023/05/26 15:57:07 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << "Default WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src): WrongAnimal(src)
{
	std::cout << "Copy WrongCat constructor called" << std::endl;
	*this = src;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;

}

WrongCat & WrongCat::operator=(WrongCat const &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << this->type << ": Meeeeeeaoooow..." << std::endl;
}

std::string	WrongCat::getType(void) const
{
	return (this->type);
}