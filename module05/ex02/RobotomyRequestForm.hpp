/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:59:38 by lleiria-          #+#    #+#             */
/*   Updated: 2023/10/20 17:01:00 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <fstream>
# include <cstdlib>
# include <time.h>

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		virtual ~RobotomyRequestForm(void);

		RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);

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

        class RobotomyFailedException :public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
	
	private:
		RobotomyRequestForm(void);
		std::string	_target;
};

#endif