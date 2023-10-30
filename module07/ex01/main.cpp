/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:18:19 by lleiria-          #+#    #+#             */
/*   Updated: 2023/10/28 11:59:16 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// void printStr(const std::string &str)
// {
// 	std::cout << str << std::endl;
// }

// void printten(const int &n)
// {
// 	std::cout << n * 10 << std::endl;
// }

// void printcap(const char &c)
// {
// 	std::cout << static_cast<char>(c - ('a' - 'A')) << std::endl;
// }

// int main()
// {
//     std::string test[] = {"zero", "um", "dois", "tres", "quatro"};
// 	iter<std::string>(&test[0], 5, printStr);

//     int test2[] = {1,2,3,4,5,6,7,8,9};
// 	iter<int>(&test2[0], 9, printten);

//     char test3[] = {'a','z','b','p','r','y','u','f','g'};
// 	iter<char>(&test3[0], 9, printcap);

//     return 0;
// }

class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
	private:
		int _n;
};
	std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
	
	template< typename T >
	void print( T const & x ) { std::cout << x << std::endl; return; }

int main()
{
	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];
	iter( tab, 5, print );
	iter( tab2, 5, print );
	return 0;
}	