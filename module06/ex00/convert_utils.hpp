/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_utils.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:13:21 by lleiria-          #+#    #+#             */
/*   Updated: 2023/10/23 17:32:00 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_UTILS_HPP
#define CONVERT_UTILS_HPP

# include <iostream>
# include <string>
# include <limits>
#include <cstdlib>

void	goChar(std::string value, int val_int, bool isFLoat, bool isDouble);
void	goInt(std::string value, int val_int);
void	goFloat(std::string value, float val_float, double val_double);
void	goDouble(std::string value, double val_double);

#endif