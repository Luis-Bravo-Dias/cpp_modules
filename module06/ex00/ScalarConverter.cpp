/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 12:03:51 by lleiria-          #+#    #+#             */
/*   Updated: 2023/08/16 16:43:09 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

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
	float val_float = std::atof(value.c_str());
	double val_double = static_cast<double>(val_float);
	
	if (value == "nan" || value == "-inf" || value == "+inf")
	{
		std::cout << "int: impossible" << std::endl << "char: impossible" << std::endl
		<< "float: " << value << "f" << std::endl << "double: " << value << std::endl;
		return ;
	}
	goChar(val_int);
	goInt(value, val_int);
	goFloat(value, val_float, val_double);
	goDouble(value, val_double);
	
}