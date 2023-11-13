/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:42:32 by lleiria-          #+#    #+#             */
/*   Updated: 2023/11/13 16:53:15 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		std::cout << "Wrong number of paramters" << std::endl;
	else
	{
		std::string equation = av[1];
		if (equation.find_first_not_of(" 1234567890+-*/") != equation.npos)
		{
			std::cout << "Error" << std::endl;
			return (1);
		}
		if (equation[0] > '9' || equation[0] < '0')
		{
			std::cout << "Error" << std::endl;
			return (1);
		}
		rpn(equation);
	}
	return (0);
}