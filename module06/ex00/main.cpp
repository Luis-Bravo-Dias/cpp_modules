/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:32:20 by lleiria-          #+#    #+#             */
/*   Updated: 2023/10/23 17:18:33 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iomanip>

int main(int ac, char **av)
{
	SclarConverter con;

	// con.convert("42");
	// con.convert("2");
	// con.convert("4.2f");
	// // con.convert("c");
	// con.convert("teste");
	// con.convert("2147483649"); //more than man int
	// con.convert("-2147483649"); //less than min int
	// con.convert("nan");
	if (ac != 2)
		std::cout << "Error: please enter only one argument" << std::endl;
	else
	{
		std::cout << std::fixed << std::setprecision(1);
		con.convert(av[1]);
	}
	return (0);
}