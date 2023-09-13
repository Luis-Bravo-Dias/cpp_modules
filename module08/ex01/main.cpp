/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:55:30 by lleiria-          #+#    #+#             */
/*   Updated: 2023/09/13 16:31:35 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
	std::cout << std::endl;
	try
	{
		Span sp = Span(3);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
	std::cout << std::endl;
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
	std::cout << std::endl;
	try
	{
		Span sp = Span(5);
		sp.addRangeNumber(1, 5);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
	std::cout << std::endl;
	try
	{
		Span sp = Span(5);
		sp.addRangeNumber(6, 5);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
	std::cout << std::endl;
	try
	{
		Span sp = Span(4);
		sp.addRangeNumber(1, 5);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
	std::cout << std::endl;
	try
	{
		Span sp = Span(10000);
		sp.addRangeNumber(1, 10000);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
	
	return 0;
}