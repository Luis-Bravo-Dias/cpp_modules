/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:34:56 by lleiria-          #+#    #+#             */
/*   Updated: 2023/10/20 17:22:56 by lleiria-         ###   ########.fr       */
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
				virtual const char* what() const throw();
		};

		class NotSignedException :public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
	
	private:
		ShrubberyCreationForm(void);
		std::string	_target;
};

#endif