/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:21:25 by lleiria-          #+#    #+#             */
/*   Updated: 2023/07/27 16:58:27 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int gradeSign, int gradeExec): _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec), _signed(false)
{
	std::cout << "Default Form constructor called" << std::endl;
}

Form::Form(Form const &src): _name(src.getFormName()), _gradeSign(src.getGradeSign()), _gradeExec(src.getGradeExec())
{
	std::cout << "Copy Form constructor called" << std::endl;
	this->_signed = src.getSignature();
}

Form::~Form(void)
{
	std::cout << "Form destructor called" << std::endl;
}

Form & Form::operator=(Form const &rhs)
{
	(void)rhs;
	return (*this);
}

std::string Form::getFormName(void) const
{
	return(this->_name);
}

bool Form::getSignature(void) const
{
	return (this->_signed);
}

int	Form::getGradeSign(void) const
{
	return (this->_gradeSign);
}

int Form::getGradeExec(void) const
{
	return (this->_gradeExec);
}

void Form::beSigned(Bureaucrat const &bc)
{
	if (this->_gradeSign > bc.getGrade())
		this->_signed = true;
	else
		throw GradeTooLowException();
}