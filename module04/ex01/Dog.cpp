/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:15:04 by lleiria-          #+#    #+#             */
/*   Updated: 2023/05/30 16:47:11 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->_brain = new Brain();
	this->type = "Dog";
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(Dog const &src) : Animal(src)
{
	this->_brain = new Brain;
	std::cout << "Copy Dog constructor called" << std::endl;
	*this = src;
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog & Dog::operator=(Dog const &rhs)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
		(*this->_brain) = (*rhs._brain);
	}
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

std::string	Dog::getIdea(int i)
{
	return(this->_brain->mindRead(i));
}

void	Dog::setIdea(std::string idea, int i)
{
	this->_brain->think(idea, i);
}
