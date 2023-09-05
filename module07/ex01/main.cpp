/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:18:19 by lleiria-          #+#    #+#             */
/*   Updated: 2023/09/05 11:40:50 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void printStr(std::string str)
{
	std::cout << str << std::endl;
}

void printten(int n)
{
	std::cout << n * 10 << std::endl;
}

void printcap(char c)
{
	std::cout << static_cast<char>(c - ('a' - 'A')) << std::endl;
}

int main()
{
    std::string test[] = {"zero", "um", "dois", "tres", "quatro"};
	iter(test, 5, printStr);

    int test2[] = {1,2,3,4,5,6,7,8,9};
	iter(test2, 9, printten);

    char test3[] = {'a','z','b','p','r','y','u','f','g'};
	iter(test3, 9, printcap);

    return 0;
}