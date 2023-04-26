/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:35:43 by lleiria-          #+#    #+#             */
/*   Updated: 2023/04/26 18:01:11 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	funs[0].level = "DEBUG";
	funs[0].fun = &Harl::_debug;
	funs[1].level = "INFO";
	funs[1].fun = &Harl::_info;
	funs[2].level = "WARNING";
	funs[2].fun = &Harl::_warning;
	funs[3].level = "ERROR";
	funs[3].fun = &Harl::_error;
	
};

Harl::~Harl(){};

void	Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
		if (this->funs[i].level == level)
			(this->*funs[i].fun)();
}

void	Harl::_debug() const
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::_info() const
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::_warning() const
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::_error() const
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}