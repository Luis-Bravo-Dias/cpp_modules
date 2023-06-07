/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 14:46:31 by lleiria-          #+#    #+#             */
/*   Updated: 2023/06/07 16:38:34 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"

AMateria::AMateria(std::string const & type): _type(type)
{
	std::cout << "Default AMateria constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &src)
{
	std::cout << "Copy AMateria constructor called" << std::endl;
	*this = src;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria & AMateria::operator=(AMateria const &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return(this->_type);
}

AMateria* AMateria::clone() const
{
	AMateria *clone = new AMateria("clone");
}

void	AMateria::use(ICharacter& target)
{
	
}