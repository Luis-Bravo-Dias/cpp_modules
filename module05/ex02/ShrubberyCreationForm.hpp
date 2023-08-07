/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:57:53 by lleiria-          #+#    #+#             */
/*   Updated: 2023/08/04 11:54:21 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>
# include <string>

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		virtual ~ShrubberyCreationForm(void);

		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);

		virtual void execute(Bureaucrat const & executer) const;

		class ExecGradeException :public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Invalid grade to execute");
				}
		};

		class NotSignedException :public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("This form is not signed");
				}
		};
	
	private:
		ShrubberyCreationForm(void);
		std::string	_target;
};

#endif