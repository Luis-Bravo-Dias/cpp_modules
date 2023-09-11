/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 15:50:53 by lleiria-          #+#    #+#             */
/*   Updated: 2023/09/11 16:31:00 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define	EASYFIND_HPP	

# include <iostream>
# include <algorithm>

class NotFoundException :public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return("Value not found");
		}	
};

template<typename T>
typename T::iterator easyfind(T &container, int value)
{
	typename T::iterator returner = std::find(container.begin(), container.end(), value);
	if(returner != container.end())
		return (returner);
	else
		throw NotFoundException();
};

#endif