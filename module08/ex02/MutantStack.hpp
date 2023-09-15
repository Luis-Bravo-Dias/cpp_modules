/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:30:58 by lleiria-          #+#    #+#             */
/*   Updated: 2023/09/15 16:53:13 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <vector>
# include <iterator>
# include <deque>
# include <list>


template< typename T, typename C = std::deque<T> >
class MutantStack : public std::stack<T, C >
{
private:

public:

	MutantStack();
	MutantStack(MutantStack const &src);
	~MutantStack();
	MutantStack& operator=(MutantStack const &rhs);

	typedef typename MutantStack<T, C>::container_type::iterator			iterator;
	typedef typename MutantStack<T, C>::container_type::reverse_iterator	r_iterator;
	
	typename C::iterator begin();
	typename C::iterator end();
	typename C::iterator rbegin();
	typename C::iterator rend();
};

template< typename T, typename C >
MutantStack<T, C>::MutantStack() :std::stack<T, C>(){
}

template< typename T, typename C >
MutantStack<T, C>::MutantStack(MutantStack const &src) :std::stack<T, C>(){
	if(this != &src)
		*this = src;
}

template< typename T, typename C >
MutantStack<T, C>::~MutantStack(){}

template< typename T, typename C >
typename C::iterator MutantStack<T, C>::begin(){
	return(this->std::stack<T, C>::c.begin());
}

template< typename T, typename C >
typename C::iterator MutantStack<T, C>::end(){
	return(this->std::stack<T, C>::c.end());
}

template< typename T, typename C >
typename C::iterator MutantStack<T, C>::rbegin(){
	return(this->std::stack<T, C>::c.rbegin());
}

template< typename T, typename C >
typename C::iterator MutantStack<T, C>::rend(){
	return(this->std::stack<T, C>::c.rend());
}

#endif