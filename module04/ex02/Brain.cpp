/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:22:36 by lleiria-          #+#    #+#             */
/*   Updated: 2023/06/05 17:35:10 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain(Brain const &src)
{
	std::cout << "Copy Brain constructor called" << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain & Brain::operator=(Brain const &rhs)
{
	std::cout << "Brain assignment operator called" << std::endl;
	if (this != &rhs)
	{
		int i = 0;
		while (i < 100)
		{
			this->ideas[i] = rhs.ideas[i];
			i++;
		}
	}
	return (*this);
}

void	Brain::think(std::string idea, int i)
{
	if (i < 100 && i > -1)
		this->ideas[i] = idea;
	else
		std::cout << "No room for that idea, choose an index of 0 to 99." << std::endl;
}

std::string	Brain::mindRead(int i)
{
	if (i < 100 && i > -1)
	{
		if (this->ideas[i].empty())
			return ("Brain cell empty, no ideas...");
		else
			return (this->ideas[i]);
	}
	else
		return ("No room for that idea, choose an index of 0 to 99.");
	
}