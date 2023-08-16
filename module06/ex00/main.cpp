/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:32:20 by lleiria-          #+#    #+#             */
/*   Updated: 2023/08/16 16:42:33 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(void)
{
	SclarConverter con;

	con.convert("42");
	con.convert("2");
	con.convert("4.2f");
	con.convert("c");
	con.convert("teste");
	con.convert("2147483649"); //more than man int
	con.convert("-2147483649"); //less than min int
	con.convert("nan");
	return (0);
}