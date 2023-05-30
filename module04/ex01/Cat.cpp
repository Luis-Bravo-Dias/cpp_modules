/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:45:38 by lleiria-          #+#    #+#             */
/*   Updated: 2023/05/30 16:48:27 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->_brain = new Brain();
	this->type = "Cat";
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(Cat const &src): Animal(src)
{
	this->_brain = new Brain();
	std::cout << "Copy Cat constructor called" << std::endl;
	*this = src;
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat & Cat::operator=(Cat const &rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
		(*this->_brain) = (*rhs._brain);
	}
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

std::string	Cat::getIdea(int i)
{
	return(this->_brain->mindRead(i));
}

void	Cat::setIdea(std::string idea, int i)
{
	this->_brain->think(idea, i);
}
