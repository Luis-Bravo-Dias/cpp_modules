/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:28:24 by lleiria-          #+#    #+#             */
/*   Updated: 2023/08/14 16:46:56 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

# include <iostream>

class SclarConverter
{
	public:
		SclarConverter(void);
		SclarConverter(SclarConverter const &src);
		~SclarConverter(void);

		SclarConverter &operator=(SclarConverter const &rhs);
		
		void *convert(std::string value);
};

#endif