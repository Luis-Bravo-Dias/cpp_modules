/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:54:04 by lleiria-          #+#    #+#             */
/*   Updated: 2023/08/05 16:39:02 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	srand(time(NULL));
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

	// std::cout << std::endl << "------------------------AFORM TESTS------------------------" << std::endl;
		
	// try
	// {
	// 	Bureaucrat emilia ("Emilia", 42);
	// 	std::cout << emilia << " is born" << std::endl;
	// 	// Bureaucrat emerson("Emerson", 160);
	// 	// std::cout << emerson << " is born" << std::endl;
	// 	AForm b50 ("B50", 50, 50);
	// 	std::cout << b50 << std::endl;
	// 	emilia.signAForm(b50);
	// 	std::cout << b50 << std::endl;

	// 	Bureaucrat bob("Bob", 23);
	// 	std::cout << bob << " is born" << std::endl;
	// 	AForm c42("C42", 42, 42);
	// 	std::cout << c42 << std::endl;
	// 	c42.beSigned(bob);
	// 	std::cout << c42 << std::endl;

		
	// 	AForm b16("B16", 160, 0);
	// 	std::cout << b16 << std::endl;
	// }
	// catch(std::exception& e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }

	std::cout << std::endl << "------------------------Shrubbery TESTS------------------------" << std::endl;
	try
	{
		Bureaucrat lara("Lara", 1);
		ShrubberyCreationForm	shrubbery("file");
		lara.signForm(shrubbery);
		lara.executeForm(shrubbery);

		Bureaucrat michael("Michael", 140);
		ShrubberyCreationForm	shrubbery2("file2");
		michael.signForm(shrubbery2);
		michael.executeForm(shrubbery2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "------------------------Robot TESTS------------------------" << std::endl;
	try
	{
		Bureaucrat drake("Drake", 1);
		RobotomyRequestForm robot("Josh");
		drake.signForm(robot);
		drake.executeForm(robot);

		Bureaucrat ed("Ed", 75);
		RobotomyRequestForm robot2("Al");
		ed.signForm(robot2);
		ed.executeForm(robot2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "------------------------President TESTS------------------------" << std::endl;
	try
	{
		Bureaucrat ford("Ford", 1);
		PresidentialPardonForm pardon("Arthur");
		ford.signForm(pardon);
		ford.executeForm(pardon);

		Bureaucrat candace("Candace", 75);
		PresidentialPardonForm pardon2("Phineas");
		candace.signForm(pardon2);
		candace.executeForm(pardon2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}