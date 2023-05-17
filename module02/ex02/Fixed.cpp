/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:25:54 by lleiria-          #+#    #+#             */
/*   Updated: 2023/05/17 17:42:03 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _fpNbr(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const & nbr)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fpNbr = nbr << this->_bits;
}

Fixed::Fixed(float const & nbr)
{
	std::cout << "Float constructor called" << std::endl;
	
	this->_fpNbr = static_cast<int>(roundf(nbr * (1 << this->_bits)));
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

Fixed	Fixed::operator+(Fixed const & rhs) const
{
	return (Fixed(this->_fpNbr + rhs.getRawBits()));
}

Fixed	Fixed::operator-(Fixed const & rhs) const
{
	return (Fixed(this->_fpNbr - rhs.getRawBits()));
}

Fixed	Fixed::operator*(Fixed const & rhs) const
{
	return (Fixed(this->_fpNbr * rhs.getRawBits()));
}

Fixed	Fixed::operator/(Fixed const & rhs) const
{
	return (Fixed(this->_fpNbr / rhs.getRawBits()));
}

int	Fixed::operator>(Fixed const & rhs) const
{
	if (this->_fpNbr > rhs.getRawBits())
		return (1);
	else
		return (0);
}

int	Fixed::operator<(Fixed const & rhs) const
{
	if (this->_fpNbr < rhs.getRawBits())
		return (1);
	else
		return (0);
}

int	Fixed::operator>=(Fixed const & rhs) const
{
	if (this->_fpNbr >= rhs.getRawBits())
		return (1);
	else
		return (0);
}

int	Fixed::operator<=(Fixed const & rhs) const
{
	if (this->_fpNbr <= rhs.getRawBits())
		return (1);
	else
		return (0);
}

int	Fixed::operator==(Fixed const & rhs) const
{
	if (this->_fpNbr == rhs.getRawBits())
		return (1);
	else
		return (0);
}

int	Fixed::operator!=(Fixed const & rhs) const
{
	if (this->_fpNbr != rhs.getRawBits())
		return (1);
	else
		return (0);
}

int	Fixed::getRawBits() const
{
	// std::cout << "getRawBits member function called" << std::endl;

	return (this->_fpNbr);
}

Fixed & Fixed::operator++()
{
	this->_fpNbr++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	newFix(*this);
	this->_fpNbr++;
	return (newFix);
}

Fixed & Fixed::operator--()
{
	this->_fpNbr--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	newFix(*this);
	this->_fpNbr--;
	return (newFix);
}

Fixed & Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else if (a.getRawBits() > b.getRawBits())
		return (b);
	else
		return ;
}

Fixed const & Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else if (a.getRawBits() > b.getRawBits())
		return (b);
	else
		return ;
}

Fixed & Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else if (a.getRawBits() < b.getRawBits())
		return (b);
	else
		return ;
}

Fixed const & Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else if (a.getRawBits() < b.getRawBits())
		return (b);
	else
		return ;
}

void	Fixed::setRawBits(int const & raw)
{
	this->_fpNbr = raw;
}

float	Fixed::toFloat() const
{
	float	nbr = this->_fpNbr / roundf(1 << this->_bits);
	return (nbr);
}

int	Fixed::toInt() const
{
	int	nbr = this->_fpNbr >> this->_bits;
	return (nbr);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}