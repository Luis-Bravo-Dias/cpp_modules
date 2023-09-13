/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:23:04 by lleiria-          #+#    #+#             */
/*   Updated: 2023/09/13 16:28:05 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N): _limit(N), _counter(0)
{
	std::cout << "Default Span constructor called" << std::endl;
}

Span::Span(Span const &src)
{
	std::cout << "Copy Span constructor called" << std::endl;
	*this = src;
}

Span::~Span()
{
	std::cout << "Span destructor called" << std::endl;
}

Span & Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{
		this->_limit = rhs._limit;
		this->_counter = rhs._counter;
		this->_container = rhs._container;
	}
	return (*this);
}

void Span::addNumber(int nbr)
{
	if (this->_counter >= this->_limit)
		throw IsFullException();
	else
	{
		this->_container.push_back(nbr);
		this->_counter++;
	}
}

void Span::addRangeNumber(int begin, int end)
{
	if (begin > end)
		throw WrongValuesException();
	for (int i = begin; i <= end; i++)
		this->addNumber(i);
}

int	Span::shortestSpan(void)
{
	if (this->_counter == 0 || this->_counter == 1)
		throw NoSpanException();
	else
	{
		int less = INT_MAX;
		int comp = 0;
		for (std::vector<int>::iterator i1 = this->_container.begin(); i1 != this->_container.end(); ++i1)
		{
			for (std::vector<int>::iterator i2 = i1 + 1; i2 != this->_container.end(); ++i2)
			{
				comp = *i2 - *i1;
				if (less > comp)
				{
					if (comp < 0)
						comp *= -1;
					less = comp;
				}
			}
		}
		return (less);
	}
}

int	Span::longestSpan(void)
{
	if (this->_counter == 0 || this->_counter == 1)
		throw NoSpanException();
	else
	{
		int bigger = INT_MIN;
		int comp = 0;
		for (std::vector<int>::iterator i1 = this->_container.begin(); i1 != this->_container.end(); ++i1)
		{
			for (std::vector<int>::iterator i2 = i1 + 1; i2 != this->_container.end(); ++i2)
			{
				comp = *i2 - *i1;
				if (bigger < comp)
				{
					if (comp < 0)
						comp *= -1;
					bigger = comp;
				}
			}
		}
		return (bigger);
	}
}