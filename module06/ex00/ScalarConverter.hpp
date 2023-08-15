/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:28:24 by lleiria-          #+#    #+#             */
/*   Updated: 2023/08/15 14:31:13 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

# include <iostream>
# include <string>

class SclarConverter
{
	public:
		SclarConverter(void);
		SclarConverter(SclarConverter const &src);
		~SclarConverter(void);

		SclarConverter &operator=(SclarConverter const &rhs);
		
		static void convert(std::string const& value);
};

#endif