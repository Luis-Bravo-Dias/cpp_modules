/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilsBase.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 15:35:52 by lleiria-          #+#    #+#             */
/*   Updated: 2023/08/25 16:33:42 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utilsBase.hpp"

Base * generate(void)
{
	int option = std::rand() % 3;
	
	switch (option)
	{
		case 0:
		{
			std::cout << "A created" << std::endl;
			return (new A);
		}
		case 1:
		{
			std::cout << "B created" << std::endl;
			return (new B);
		}
		default:
		{
			std::cout << "C created" << std::endl;
			return (new C);
		}
	}
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "Is a class of type A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "Is a class of type B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "Is a class of type C" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A test = dynamic_cast<A&>(p);
		std::cout << "Is a class of type A" << std::endl;
	}
	catch (std::exception error){}

	try
	{	
		B test = dynamic_cast<B&>(p);
		std::cout << "Is a class of type B" << std::endl;
	}
	catch (std::exception error){}
	
	try
	{
		C test = dynamic_cast<C&>(p);
		std::cout << "Is a class of type C" << std::endl;
	}
	catch (std::exception error){}
}