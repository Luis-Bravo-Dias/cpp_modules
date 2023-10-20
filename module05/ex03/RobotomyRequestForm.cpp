/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:34:27 by lleiria-          #+#    #+#             */
/*   Updated: 2023/10/20 17:21:29 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("Robotomy Request", 72, 45)
{
	this->_target = target;
	std::cout << "Default RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src): AForm(src)
{
	std::cout << "Copy RobotomyRequestForm constructor called" << std::endl;
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	if (this != &rhs)
		this->_target = rhs._target;
	return (*this);
}

const char* RobotomyRequestForm::ExecGradeException::what() const throw()
{
	return ("Invalid grade to execute");
}

const char* RobotomyRequestForm::NotSignedException::what() const throw()
{
	return ("This form is not signed");
}
const char* RobotomyRequestForm::RobotomyFailedException::what() const throw()
{
	return ("Robotomizacion failed");
}


void RobotomyRequestForm::execute(Bureaucrat const & executer) const
{
	if (executer.getGrade() <= 45)
	{
		if (this->getSignature() == true)
		{
			std::cout << "Brrrrrrrrrrrrzzzzzzzzzz..." << std::endl;
            int chance = std::rand() % 2;
            if (chance)
                std::cout << this->_target << " has been robotomized successfully" << std::endl;
            else
                throw RobotomyFailedException();
		}
		else
			throw NotSignedException();
	}
	else
		throw ExecGradeException();
}
