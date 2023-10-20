/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:33:03 by lleiria-          #+#    #+#             */
/*   Updated: 2023/10/20 17:08:38 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

# include "Bureaucrat.hpp"

class AForm
{
	public:
		AForm(std::string name, int gradeSign, int gradeExec);
		AForm(AForm const &src);
		virtual ~AForm(void);

		AForm &operator=(AForm const &rhs);

		virtual std::string getFormName(void) const;
		virtual bool getSignature(void) const;
		virtual int	getGradeSign(void) const;
		virtual int	getGradeExec(void) const;
		
		virtual void beSigned(Bureaucrat const &bc);
		virtual void execute(Bureaucrat const & executor) const = 0;

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

		class FormNotSignedException :public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("This Form is not signed");
				}
		};
	
	private:
		AForm(void);
		std::string const _name;
		bool _signed;
		int	const _gradeSign;
		int	const _gradeExec;
		
};

std::ostream & operator<<(std::ostream & o, AForm const & rhs);

#endif