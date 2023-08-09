/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:47:42 by lleiria-          #+#    #+#             */
/*   Updated: 2023/08/09 17:12:28 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class 	Intern
{
	public:
		Intern(void);
		Intern(Intern const &src);
		~Intern(void);

		Intern &operator=(Intern const &rhs);

		AForm *makeForm(std::string formName, std::string target);
		
		class FormNotFoundException :public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("There's not form with that name, verify that is writen correctly in lower case");
				}
		};
	
	private:
		std::string _forms[3];
};

#endif