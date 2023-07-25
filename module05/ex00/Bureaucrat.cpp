/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:35:57 by lleiria-          #+#    #+#             */
/*   Updated: 2023/07/25 17:32:31 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name)
{
	std::cout << "Default Bureaucrat constructor called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighExeption();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowExeption();
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
		throw GradeTooHighExeption();
	this->_grade -= up;
}

void Bureaucrat::gradeDown(int down)
{
	if (this->_grade + down > 150)
		throw GradeTooLowExeption();
	this->_grade += down;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return (o);
}