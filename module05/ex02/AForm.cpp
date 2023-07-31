/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:54:25 by lleiria-          #+#    #+#             */
/*   Updated: 2023/07/31 12:19:39 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string name, int gradeSign, int gradeExec): _name(name),  _signed(false),_gradeSign(gradeSign), _gradeExec(gradeExec)
{
	std::cout << "Default AForm constructor called" << std::endl;
	if (gradeSign < 1)
		throw AForm::GradeTooHighException();
	else if (gradeSign > 150)
		throw AForm::GradeTooLowException();
	if (gradeExec < 1)
		throw AForm::GradeTooHighException();
	else if (gradeExec > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const &src): _name(src.getFormName()), _gradeSign(src.getGradeSign()), _gradeExec(src.getGradeExec())
{
	std::cout << "Copy AForm constructor called" << std::endl;
	this->_signed = src.getSignature();
}

AForm::~AForm(void)
{
	std::cout << "AForm destructor called" << std::endl;
}

AForm & AForm::operator=(AForm const &rhs)
{
	(void)rhs;
	return (*this);
}

std::string AForm::getFormName(void) const
{
	return(this->_name);
}

bool AForm::getSignature(void) const
{
	return (this->_signed);
}

int	AForm::getGradeSign(void) const
{
	return (this->_gradeSign);
}

int AForm::getGradeExec(void) const
{
	return (this->_gradeExec);
}

void AForm::beSigned(Bureaucrat const &bc)
{
	if (this->_gradeSign > bc.getGrade())
		this->_signed = true;
	else
	{
		this->_signed = false;
		throw GradeTooLowException();
	}
}

std::ostream & operator<<(std::ostream & o, AForm const & rhs)
{
	std::string signature;
	if (rhs.getSignature() == true)
		signature = "signed";
	else
		signature = "not signed";
	o << rhs.getFormName() << " AForm that requires a " << rhs.getGradeSign() << " grade to be signed and a " << rhs.getGradeExec() << " to be executed is " << signature;
	return (o);
}