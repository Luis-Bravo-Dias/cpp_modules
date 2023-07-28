/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:31:59 by lleiria-          #+#    #+#             */
/*   Updated: 2023/07/28 12:51:16 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void) 
{

	std::cout << std::endl << "------------------------BUREAUCRAT TESTS------------------------" << std::endl;

	try
	{
		Bureaucrat Bob("Bob", 60);
		std::cout << Bob << " is born" << std::endl;
	
		Bureaucrat Ema("Ema", 101);
		std::cout << Ema << " is born" << std::endl;

		Ema = Bob;
		std::cout << Ema << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat phil("Phil", 149);
		std::cout << phil << " is born" << std::endl;
		phil.gradeDown(1);
		std::cout << phil << " was demoted" << std::endl;
		phil.gradeDown(1);
		std::cout << phil << " was demoted" << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		std::cout << "Let's try to create John, grade 200" << std::endl;
		Bureaucrat john("John", 200);
		std::cout << john << " is born, the poor defective bastard" << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << "Let's try to create Phil, grade 0" << std::endl;
		Bureaucrat phil("Phil", 0);
		std::cout << phil << " is born" << std::endl;
		phil.gradeUp(1);
		std::cout << phil << " was promoted" << std::endl;
		phil.gradeDown(1);
		std::cout << phil << " was demoted" << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return 0;
}