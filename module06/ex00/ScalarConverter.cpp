/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 12:03:51 by lleiria-          #+#    #+#             */
/*   Updated: 2023/08/15 17:23:36 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cstdlib>

SclarConverter::SclarConverter()
{
	std::cout << "Default SclarConverter constructor called" << std::endl;
}

SclarConverter::SclarConverter(SclarConverter const &src)
{
	std::cout << "Copy SclarConverter constructor called" << std::endl;
	*this = src;
}

SclarConverter::~SclarConverter()
{
	std::cout << "SclarConverter destructor called" << std::endl;
}

SclarConverter & SclarConverter::operator=(SclarConverter const &rhs)
{
	(void)rhs;
	return (*this);
}

void	SclarConverter::convert(std::string const& value)
{
	int	val_int = std::atoi(value.c_str());
	double val_float = std::atof(value.c_str());
	
	if (val_int >= 32 && val_int <= 126)
	{
		char val_char = static_cast<char>(val_int);
		std::cout << "char: " << val_char << std::endl;
	}
	else
		std::cout << "char: Non displayable" << std::endl;
	
	std::cout << "int: " << val_int << std::endl;
	if (value.find(".") != value.npos)
		std::cout << "float: " << val_float << "f" << std::endl;
	else
		std::cout << "float: " << val_float << ".0f" << std::endl;
}