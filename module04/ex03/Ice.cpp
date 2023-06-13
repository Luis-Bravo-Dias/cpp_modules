/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 11:55:54 by lleiria-          #+#    #+#             */
/*   Updated: 2023/06/13 12:13:52 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	std::cout << "Default Ice constructor called" << std::endl;
}

Ice::Ice(Ice const &src): AMateria("ice")
{
	std::cout << "Copy Ice constructor called" << std::endl;
	*this = src;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice	& Ice::operator=(Ice const &rhs)
{
	(void)rhs;
	return (*this);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const
{
	AMateria *clone = new Ice();
	return (clone);
}