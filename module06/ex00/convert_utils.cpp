/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_utils.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:10:53 by lleiria-          #+#    #+#             */
/*   Updated: 2023/08/22 16:12:02 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert_utils.hpp"

void	goChar(int val_int, bool isFLoat, bool isDouble)
{
	if ((val_int >= 32 && val_int <= 126) && isFLoat == false && isDouble == false)
	{
		char val_char = static_cast<char>(val_int);
		std::cout << "char: " << val_char << std::endl;
	}
	else
		std::cout << "char: Non displayable" << std::endl;
}

void goInt(std::string value, int val_int)
{
	if (std::atol(value.c_str()) > std::numeric_limits<int>::max())
		std::cout << "int: conversion is impossible: value too big" << std::endl;
	else if (std::atol(value.c_str()) < std::numeric_limits<int>::min())
		std::cout << "int: conversion is impossible: value too small" << std::endl;
	else
		std::cout << "int: " << val_int << std::endl;
}

void	goFloat(std::string value, float val_float, double val_double)
{
	if (val_double > std::numeric_limits<float>::max())
		std::cout << "float: conversion is impossible: value too big" << std::endl;
	else if (val_double < std::numeric_limits<float>::min())
		std::cout << "float: conversion is impossible: value too small" << std::endl;
	else if (value.find(".") != value.npos)
		std::cout << "float: " << val_float << "f" << std::endl;
	else
		std::cout << "float: " << val_float << ".0f" << std::endl;

}

void	goDouble(std::string value, double val_double)
{
	if (value.find(".") != value.npos)
		std::cout << "double: " << val_double << std::endl;
	else
		std::cout << "double: " << val_double << ".0" << std::endl;
}