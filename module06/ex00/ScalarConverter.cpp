/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 12:03:51 by lleiria-          #+#    #+#             */
/*   Updated: 2023/10/23 17:31:11 by lleiria-         ###   ########.fr       */
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
	
	if (value == "nan" || value == "-inf" || value == "+inf")
	{
		std::cout << "int: impossible" << std::endl << "char: impossible" << std::endl
		<< "float: " << value << "f" << std::endl << "double: " << value << std::endl;
		return ;
	}
	int	val_int;
	float val_float;
	double val_double;
	bool	isChar = false;
	bool	isFLoat = false;
	bool	isDouble = false;
	if (value.length() == 1 && value.find_first_not_of("0123456789") != value.npos)
	{
		isChar = true;
		val_int = static_cast<int>(value[0]);
		val_float = static_cast<float>(value[0]);
		val_double = static_cast<double>(value[0]);
	}
	else
	{
		val_int = std::atoi(value.c_str());
		val_float = std::atof(value.c_str());
		val_double = static_cast<double>(val_float);
	}
	
	if (value.find_first_of("f", 1) == value.length() -1 && value.find(".", 1) != value.npos &&
		value.find(".", 1) == value.rfind("."))
		isFLoat = true;
	else if ((value.find(".", 1) != value.npos && value.find(".", 1) == value.rfind(".")) &&
		value.find_first_not_of("0123456789.") == value.npos)
		isDouble = true;
	
	if (value.find_first_not_of("0123456789.f", 1) == value.npos)
	{	
		if ((isChar == false && value.find_first_not_of("0123456789.f") != value.npos) ||
			(value.find_first_not_of("f") == value.npos && isFLoat == false) ||
				(value.find(".", 1) != value.npos && isDouble == false && isFLoat == false))
			std::cout << "Error: wrong type of argument, please enter a int, a char, a float or a double" << std::endl;
		else
		{
			goChar(value, val_int, isFLoat, isDouble);
			goInt(value, val_int);
			goFloat(value, val_float, val_double);
			goDouble(value, val_double);
		}
	}
	else
	{
		std::cout << "Error: wrong type of argument, please enter a int, a char, a float or a double" << std::endl;
	}
	
}