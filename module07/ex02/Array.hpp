/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:33:36 by lleiria-          #+#    #+#             */
/*   Updated: 2023/09/05 16:41:37 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HAPP

# include <iostream>

template <typename T>
class Array
{
	public:
		Array(void);
		Array(Array const &src);
		~Array(void);

		Array &operator=(Array const &rhs);
		
		T *Construction(void)
		{
			new T *array;
			return (array);
		}
		
		T *Construction(unsigned int n)
		{
			new T array[n];
			return (array);
		}

	private:
		
};


#endif