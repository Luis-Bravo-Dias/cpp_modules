/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 11:00:53 by lleiria-          #+#    #+#             */
/*   Updated: 2023/10/20 16:01:44 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("Presidential Pardon", 25, 5)
{
	this->_target = target;
	std::cout << "Default PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src): AForm(src)
{
	std::cout << "Copy PresidentialPardonForm constructor called" << std::endl;
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	if (this != &rhs)
		this->_target = rhs._target;
	return (*this);
}

const char* PresidentialPardonForm::ExecGradeException::what() const throw()
{
	return ("Invalid grade to execute");
}

const char* PresidentialPardonForm::NotSignedException::what() const throw()
{
	return ("This form is not signed");
}

void PresidentialPardonForm::execute(Bureaucrat const & executer) const
{
	if (executer.getGrade() <= 5)
	{
		if (this->getSignature() == true)
		{
			std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
		}
		else
			throw NotSignedException();
	}
	else
		throw ExecGradeException();
}
