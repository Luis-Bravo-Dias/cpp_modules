/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 12:45:12 by lleiria-          #+#    #+#             */
/*   Updated: 2023/09/04 15:50:29 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T>
void swap(T &x, T &y)
{
	T	tmp;
	tmp = x;
	x = y;
	y = tmp;
}

template<typename T>
T min(T const & x, T const & y)
{
	return ((x < y) ? x : y);
}

template<typename T>
T max(T const & x, T const & y)
{
	return ((x > y) ? x : y);
}

#endif