/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:56:05 by lleiria-          #+#    #+#             */
/*   Updated: 2023/06/13 12:45:26 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	std::cout << "Default Cure constructor called" << std::endl;
}

Cure::Cure(Cure const &src): AMateria("cure")
{
	std::cout << "Copy Cure constructor called" << std::endl;
	*this = src;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure	& Cure::operator=(Cure const &rhs)
{
	(void)rhs;
	return (*this);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria* Cure::clone() const
{
	AMateria *clone = new Cure();
	return (clone);
}