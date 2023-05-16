/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:25:14 by lleiria-          #+#    #+#             */
/*   Updated: 2023/05/16 17:53:26 by lleiria-         ###   ########.fr       */
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
		Fixed	operator+(Fixed const & rhs) const;
		Fixed	operator-(Fixed const & rhs) const;
		Fixed	operator*(Fixed const & rhs) const;
		Fixed	operator/(Fixed const & rhs) const;

		
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