/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:34:47 by lleiria-          #+#    #+#             */
/*   Updated: 2023/10/20 17:22:34 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("Shrubbery Creation", 145, 137)
{
	this->_target = target;
	std::cout << "Default ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src): AForm(src)
{
	std::cout << "Copy ShrubberyCreationForm constructor called" << std::endl;
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	if (this != &rhs)
		this->_target = rhs._target;
	return (*this);
}

const char* ShrubberyCreationForm::ExecGradeException::what() const throw()
{
	return ("Invalid grade to execute");
}

const char* ShrubberyCreationForm::NotSignedException::what() const throw()
{
	return ("This form is not signed");
}

void ShrubberyCreationForm::execute(Bureaucrat const & executer) const
{
	if (executer.getGrade() <= 137)
	{
		if (this->getSignature() == true)
		{
			std::string fileName;

			fileName = this->_target;

			fileName.append("_shrubbery");
			std::ofstream file;
			file.open(fileName.c_str());
			if (file.is_open())
			{
				file << "              ,@@@@@@@,                 " << std::endl
				<< "      ,,,.   ,@@@@@@/@@,  .oo8888o.     " << std::endl
				<< "   ,&%/%&%&&%,@@@@@/@@@@@@,8888\\88/8o    " << std::endl
				<< "  ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'   " << std::endl
				<< "  %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'   " << std::endl
				<< "  %&&%/ %&%/%&&@@\\ V /@@' `88\\8 `/88'    " << std::endl
				<< "  `&%\\ ` /%&'    |.|        \\ '|8'      " << std::endl
				<< "      |o|        | |         | |        " << std::endl
				<< "      |.|        | |         | |        " << std::endl
				<< "   \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
			}
			file.close();
		}
		else
			throw NotSignedException();
	}
	else
		throw ExecGradeException();
}
