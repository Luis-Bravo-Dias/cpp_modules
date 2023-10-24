/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:28:25 by lleiria-          #+#    #+#             */
/*   Updated: 2023/10/24 12:46:11 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "Default Serializer constructor called" << std::endl;
}

Serializer::Serializer(Serializer const &src)
{
	std::cout << "Copy Serializer constructor called" << std::endl;
	*this = src;
}

Serializer::~Serializer()
{
	std::cout << "Serializer desctructor called" << std::endl;
}

Serializer & Serializer::operator=(Serializer const &rhs)
{
	(void)rhs;
	return (*this);
}

uintptr_t	Serializer::serialize(Data* ptr)
{
	uintptr_t conversion = reinterpret_cast<uintptr_t>(ptr);
	return (conversion);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	if (raw == 0)
        return 0;
	Data* goBack = reinterpret_cast<Data*>(raw);
	return (goBack);
}