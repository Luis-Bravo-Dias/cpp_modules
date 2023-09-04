/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:56:00 by lleiria-          #+#    #+#             */
/*   Updated: 2023/09/04 16:22:47 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T, int length>
void printArray(T (&array)[length])
{
	for (int i = 0; i < length; ++i)
		std::cout << array[i];
	std::cout << std::endl;
}

template<typename T>
void iter(T (&array), int length, T(*fun)(T, int))
{
	fun(array[length]);
};

#endif