/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 12:12:05 by lleiria-          #+#    #+#             */
/*   Updated: 2023/05/16 12:01:45 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(int const & nbr);
		Fixed(float const & nbr);
		Fixed(Fixed const & src);
		~Fixed(void);
		
		Fixed & operator=(Fixed const & rhs);
		int	getRawBits(void) const;
		void setRawBits(int const & raw);
		float	toFloat(void) const;
		int	toInt(void) const;
	
	private:
		int	_fpNbr;
		static const int	_bits = 8;
};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif