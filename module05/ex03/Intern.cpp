/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:47:54 by lleiria-          #+#    #+#             */
/*   Updated: 2023/08/09 17:37:00 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	_forms[0] = "shrubbery creation";
	_forms[1] = "robotomy request";
	_forms[2] = "presidential pardon";
	
	std::cout << "Default Intern constructor called" << std::endl;
}

Intern::Intern(Intern const &src)
{
	std::cout << "Copy Intern constructor called" << std::endl;
	*this = src;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern & Intern::operator=(Intern const &rhs)
{
	this->_forms[0] = rhs._forms[0];
	this->_forms[1] = rhs._forms[1];
	this->_forms[2] = rhs._forms[2];
	return (*this);
}

AForm	*Intern::makeForm(std::string formName, std::string target)
{
	int cases = 0;

	while (cases < 3 && this->_forms[cases].compare(formName))
		cases++;
	
	switch (cases)
	{
	case 0:
		return (new ShrubberyCreationForm(target));
	case 1:
		return (new RobotomyRequestForm(target));
	case 2:
		return (new PresidentialPardonForm(target));
	default:
		throw Intern::FormNotFoundException();
	}
}