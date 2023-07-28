/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:21:25 by lleiria-          #+#    #+#             */
/*   Updated: 2023/07/28 11:41:35 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int gradeSign, int gradeExec): _name(name),  _signed(false),_gradeSign(gradeSign), _gradeExec(gradeExec)
{
	std::cout << "Default Form constructor called" << std::endl;
	if (gradeSign < 1)
		throw Form::GradeTooHighException();
	else if (gradeSign > 150)
		throw Form::GradeTooLowException();
	if (gradeExec < 1)
		throw Form::GradeTooHighException();
	else if (gradeExec > 150)
		throw Form::GradeTooLowException();
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
	{
		this->_signed = false;
		throw GradeTooLowException();
	}
}

std::ostream & operator<<(std::ostream & o, Form const & rhs)
{
	std::string signature;
	if (rhs.getSignature() == true)
		signature = "signed";
	else
		signature = "not signed";
	o << rhs.getFormName() << " Form that requires a " << rhs.getGradeSign() << " grade to be signed and a " << rhs.getGradeExec() << " to be executed is " << signature;
	return (o);
}