/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:41:26 by lleiria-          #+#    #+#             */
/*   Updated: 2023/10/30 17:51:27 by lleiria-         ###   ########.fr       */
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
		void addRangeNumber(int begin, int end);
		int shortestSpan();
		int longestSpan();

		class IsFullException :public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class NoSpanException :public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class WrongValuesException :public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		private:
			Span(void);
			unsigned int _limit;
			unsigned int	_counter;
			std::vector<int> _container;
};

#endif