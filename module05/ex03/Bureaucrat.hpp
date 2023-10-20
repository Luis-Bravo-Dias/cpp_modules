/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:33:29 by lleiria-          #+#    #+#             */
/*   Updated: 2023/10/20 17:12:40 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>

class AForm;

class Bureaucrat
{
	public:
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(Bureaucrat const &src);
		~Bureaucrat(void);

		Bureaucrat &operator=(Bureaucrat const &rhs);

		std::string	getName(void) const;
		int	getGrade(void) const;

		void gradeUp(int up);
		void gradeDown (int down);
		void signForm (AForm &f);
		void executeForm(AForm const & form);

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
		Bureaucrat(void);
		std::string	const _name;
		int	_grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif