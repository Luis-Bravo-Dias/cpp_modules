/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:41:26 by lleiria-          #+#    #+#             */
/*   Updated: 2023/09/12 16:57:51 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <vector> 
# include <iterator>
# include <limits.h>

class Span 
{
	public:
		Span(unsigned int N);
		Span(Span const &src);
		~Span(void);

		Span &operator=(Span const &rhs);

		void addNumber(int nbr);
		int shortestSpan();
		int longestSpan();

		class IsFullException :public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("The class is full, more numbers can't be added");
				}
		};

		class NoSpanException :public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("There is no possible span");
				}	
		};

		private:
			Span(void);
			unsigned int _limit;
			unsigned int	_counter;
			std::vector<int> _container;
};

#endif