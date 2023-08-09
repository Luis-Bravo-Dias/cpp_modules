/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:34:35 by lleiria-          #+#    #+#             */
/*   Updated: 2023/08/09 14:34:37 by lleiria-         ###   ########.fr       */
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

        class RobotomyFailedException :public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Robotomizacion failed");
				}
		};
	
	private:
		RobotomyRequestForm(void);
		std::string	_target;
};

#endif