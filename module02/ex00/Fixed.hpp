/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:22:50 by lleiria-          #+#    #+#             */
/*   Updated: 2023/05/13 17:17:06 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const & src);
		~Fixed(void);
		
		Fixed & operator=(Fixed const & rhs);
		int	getRawBits(void) const;
		void setRawBits(int const raw);
	
	private:
		int	_fpNbr;
		static const int	_bits = 8;
};

#endif