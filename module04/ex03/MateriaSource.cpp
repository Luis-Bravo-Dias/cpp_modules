/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:23:11 by lleiria-          #+#    #+#             */
/*   Updated: 2023/06/14 13:14:06 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	// std::cout << "Default MateriaSource constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_mind[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	// std::cout << "Copy MateriaSource constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_mind[i] = NULL;
	*this = src;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_mind[i] != NULL)
			delete this->_mind[i];
	}
}

MateriaSource & MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this != &rhs)
	{
		for (size_t i = 0; i < 4; i++)
		{
			if (this->_mind[i] != NULL)
			{
				delete this->_mind[i];
				this->_mind[i] = NULL;
			}
			if (rhs._mind[i] != NULL)
				this->_mind[i] = rhs._mind[i]->clone();
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	for (size_t i = 0; i < 4 && m != NULL; i++)
	{
		if (this->_mind[i] == NULL)
		{
			this->_mind[i] = m;
			std::cout << m->getType() << " materia learned!" << std::endl;
			break;
		}
		if (i == 3)
		{
			std::cout << "Your mind is full, you can't learn anything..." << std::endl;
			delete m;
		}
	}
	if (m == NULL)
		std::cout << "That materia can't be learned..." << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	AMateria *clone = 0;
	
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_mind[i]->getType() == type)
		{
			clone = this->_mind[i]->clone();
			break;
		}
		if (i == 3)
			std::cout << "You don't recall that type of materia" << std::endl;
	}
	return (clone);
}