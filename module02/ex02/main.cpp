/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:26:32 by lleiria-          #+#    #+#             */
/*   Updated: 2023/05/18 15:28:36 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << "- Increment and decrement tests:" << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "--a: " << --a << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "a--: " << a-- << std::endl;
	std::cout << "a: " << a << std::endl << std::endl;
	a++;
	a++;

	std::cout << "b is: " << b << std::endl << std::endl;

	std::cout << "- Max and min tests:" << std::endl << std::endl;
	std::cout << "max test" << std::endl << Fixed::max( a, b ) << std::endl;
	std::cout << "max test" << std::endl << Fixed::max( a, (Fixed&) b ) << std::endl;
	std::cout << "min test" << std::endl << Fixed::min( a, b ) << std::endl;
	std::cout << "min test" << std::endl << Fixed::min( a, (Fixed&) b ) << std::endl << std::endl;
	
	std::cout << "- Operations:" << std::endl << std::endl;
	std::cout << "a is " << a << " and b is " << b << ':' << std::endl;
	std::cout << "*: " << a * b << std::endl;
	std::cout << "/: " << b / a << std::endl;
	std::cout << "-: " << a - b << std::endl;
	std::cout << "+: " << a + b << std::endl << std::endl;

	a = Fixed(25);
	std::cout << "- Comparison tests: a is " << a << " and b is " << b << ':' << std::endl;
	if (a < b)
		std::cout << "a is smaller than b" << std::endl;
	if (a > b)
		std::cout << "a is bigger" << std::endl;
	if (a <= b)
		std::cout << "a is smaller or equal to b" << std::endl;
	if (a >= b)
		std::cout << "a is bigger or equal to b" << std::endl;
	if (a == b)
		std::cout << "a is equal to b" << std::endl;
	if (a != b)
		std::cout << "a is not equal to b" << std::endl;
	return 0;
}

// int main( void )
// {
// 	Fixed a;
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
	
// 	std::cout << b << std::endl;
	
// 	std::cout << Fixed::max( a, b ) << std::endl;
// 	return 0;
// }