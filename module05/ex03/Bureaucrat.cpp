/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:33:14 by lleiria-          #+#    #+#             */
/*   Updated: 2023/08/09 14:33:17 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name)
{
	std::cout << "Default Bureaucrat constructor called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	std::cout << "Copy Bureaucrat constructor called" << std::endl;
	*this = src;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs)
		this->_grade = rhs._grade;
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return(this->_name);
}

int	Bureaucrat::getGrade() const
{
	return(this->_grade);
}

void Bureaucrat::gradeUp(int up)
{
	if (this->_grade - up < 1)
		throw GradeTooHighException();
	this->_grade -= up;
}

void Bureaucrat::gradeDown(int down)
{
	if (this->_grade + down > 150)
		throw GradeTooLowException();
	this->_grade += down;
}

void Bureaucrat::signForm(AForm &f)
{
	try
	{
		f.beSigned(*this);
		std::cout << this->_name << " signed " << f.getFormName() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << this->_name << " couldn't sign " << f.getFormName() << " because ";
		std::cerr << e.what() << std::endl;	
	}
}

void Bureaucrat::executeForm(AForm const & form)
{
	form.execute(*this);
	std::cout << this->_name << " executed " << form.getFormName() << std::endl;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (o);
}