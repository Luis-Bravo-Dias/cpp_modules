/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 12:10:27 by lleiria-          #+#    #+#             */
/*   Updated: 2023/05/15 17:54:16 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _fpNbr(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nbr)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fpNbr = nbr * this->_bits;
}

Fixed::Fixed(const float nbr)
{
	std::cout << "Float constructor called" << std::endl;
	
	this->_fpNbr = static_cast<int>(std::roundf(nbr * this->_bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src): _fpNbr(0)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	
	this->_fpNbr = rhs.getRawBits();
	return (*this);
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;

	return (this->_fpNbr);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fpNbr = raw;
}

float	Fixed::toFloat() const
{
	float	nbr = static_cast<float>(this->_fpNbr / this->_bits);
	return (nbr);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.getRawBits();
	return (o);
}