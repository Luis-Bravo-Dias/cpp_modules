/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:24:20 by lleiria-          #+#    #+#             */
/*   Updated: 2023/10/20 12:38:38 by lleiria-         ###   ########.fr       */
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

		std::string getFormName(void) const;
		bool getSignature(void) const;
		int	getGradeSign(void) const;
		int	getGradeExec(void) const;
		
		void beSigned(Bureaucrat const &bc);

		class GradeTooHighException :public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException :public std::exception
		{
			public:
				virtual const char* what() const throw();
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