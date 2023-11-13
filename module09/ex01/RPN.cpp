/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:34:51 by lleiria-          #+#    #+#             */
/*   Updated: 2023/11/13 17:18:32 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void rpn(std::string equation)
{
	if (equation.find_first_of("0123456789", 1) > equation.find_first_of("+-*/"))
	{
		std::cout << "Error" << std::endl;
		return ;
	}
	int nbrs = 0;
	int ops = 0;
	int	i = 0;
	while (equation[i])
	{
		if (equation[i] >= '0' && equation[i] <= '9')
			nbrs++;
		if (equation[i] == '+' || equation[i] == '-' || equation[i] == '*' || equation[i] == '/')
			ops++;
		i++;
	}
	std::cout << "nbrs = " << nbrs << " ops = " << ops << std::endl; 
	if (ops >= nbrs || ops == 0 || nbrs == 0)
	{
		std::cout << "Error" << std::endl;
		return ;
	}
}