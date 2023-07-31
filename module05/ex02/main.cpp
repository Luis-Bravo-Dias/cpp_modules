/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:54:04 by lleiria-          #+#    #+#             */
/*   Updated: 2023/07/31 10:54:08 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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

	std::cout << std::endl << "------------------------FORM TESTS------------------------" << std::endl;
		
	try
	{
		Bureaucrat emilia ("Emilia", 42);
		std::cout << emilia << " is born" << std::endl;
		// Bureaucrat emerson("Emerson", 160);
		// std::cout << emerson << " is born" << std::endl;
		Form b50 ("B50", 50, 50);
		std::cout << b50 << std::endl;
		emilia.signForm(b50);
		std::cout << b50 << std::endl;

		Bureaucrat bob("Bob", 23);
		std::cout << bob << " is born" << std::endl;
		Form c42("C42", 42, 42);
		std::cout << c42 << std::endl;
		c42.beSigned(bob);
		std::cout << c42 << std::endl;

		
		Form b16("B16", 160, 0);
		std::cout << b16 << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}