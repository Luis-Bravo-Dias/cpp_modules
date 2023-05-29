/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:52:45 by lleiria-          #+#    #+#             */
/*   Updated: 2023/05/29 17:41:08 by lleiria-         ###   ########.fr       */
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