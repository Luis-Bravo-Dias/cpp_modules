/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:24:20 by lleiria-          #+#    #+#             */
/*   Updated: 2023/07/26 17:36:09 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{
	public:
		Form(std::string name, int gradeSign, int gradeExec);
		Form(Form const &src);
		~Form(void);

		Form &operator=(Form const &rhs);

		std::string getGradeName(void) const;
		

		class GradeTooHighException :public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade too high");
				}
		};

		class GradeTooLowException :public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade too low");
				}
		};
	
	private:
		Form(void);
		std::string const _name;
		bool _signed;
		int	const _gradeSign;
		int	const _gradeExec;
		
};

std::ostream & operator<<(std::ostream & o, Form const & rhs);

#endif