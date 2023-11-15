/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:34:51 by lleiria-          #+#    #+#             */
/*   Updated: 2023/11/15 12:14:13 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void rpn(std::string equation)
{
	std::stack<int> nbrStack;
	
	int i = 0;
	while (equation[i])
	{
		if (equation[i] >= '0' && equation[i] <= '9')
		{
			std::string sNbr = equation.substr(i, 1);
			int iNbr = std::atoi(sNbr.c_str());
			nbrStack.push(iNbr);
		}
		if (equation[i] == '+' || equation[i] == '-' || equation[i] == '*' || equation[i] == '/')
		{
			if (nbrStack.size() < 2)
			{
				std::cout << "Error" << std::endl;
				return ;
			}
			int nbr2 = nbrStack.top();
			nbrStack.pop();
			int nbr1 = nbrStack.top();
			nbrStack.pop();
			int result = 0;
			char op = equation[i];
			switch (op)
			{
				case '+':
            		result = nbr1 + nbr2;
            		break;
        		case '-':
            		result = nbr1 - nbr2;
            		break;
        		case '*':
            		result = nbr1 * nbr2;
            		break;
        		case '/':
            		if (nbr2 != 0)
                		result = nbr1 / nbr2;
					else
					{
                		std::cout << "Error" << std::endl;
                		return ;
            		}
            		break;
			}
			nbrStack.push(result);
		}
		i++;
	}
	std::cout << nbrStack.top() << std::endl;
}