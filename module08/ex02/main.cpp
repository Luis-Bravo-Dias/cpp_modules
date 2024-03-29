/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:52:18 by lleiria-          #+#    #+#             */
/*   Updated: 2023/10/31 13:18:22 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << "it: " << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	
	std::cout << std::endl;
	
	std::list<int> mstack2;
	mstack2.push_back(5);
	mstack2.push_back(17);
	std::cout << "back: " << mstack2.back() << std::endl;
	mstack2.pop_back();
	std::cout << "size: " << mstack2.size() << std::endl;
	mstack2.push_back(3);
	mstack2.push_back(5);
	mstack2.push_back(737);

	mstack2.push_back(0);
	std::list<int>::iterator it2 = mstack2.begin();
	std::list<int>::iterator ite2 = mstack2.end();
	++it2;
	--it2;
	while (it2 != ite2)
	{
		std::cout << "it: " << *it2 << std::endl;
		++it2;
	}
	std::list<int> s1(mstack2);

	std::cout << std::endl;

	MutantStack<int> mstack3;
	mstack3 = mstack;
	std::cout << "top: " << mstack3.top() << std::endl;
	std::cout << "size: " << mstack3.size() << std::endl;
	MutantStack<int>::iterator it3 = mstack3.begin();
	MutantStack<int>::iterator ite3 = mstack3.end();
	++it3;
	--it3;
	while (it3 != ite3)
	{
		std::cout << "it: " << *it3 << std::endl;
		++it3;
	}
	return 0;
}