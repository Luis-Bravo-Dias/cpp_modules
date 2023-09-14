/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:30:58 by lleiria-          #+#    #+#             */
/*   Updated: 2023/09/14 16:51:33 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <vector>

template <typename T>
class MutantStack
{
	public:
		MutantStack(void){};
		MutantStack(MutantStack const &src)
		{
			*this = src;
		}
		~MutantStack(void){};
		
		MutantStack &operator=(MutantStack const &rhs)
		{
			if (this != &rhs)
				this->_myStack = rhs._myStack;
			return (*this);
		}

		class iterator
		{
			public:
				iterator(typename std::stack<T>::container_type::iterator iterator) : it(iterator) {}

        		T& operator*()
				{
        		    return *it;
        		}
				
				bool operator==(const iterator& other) const
				{
					return it == other.it;
				}
	
				bool operator!=(const iterator& other) const
				{
					return it != other.it;
				}
	
				iterator& operator++()
				{
					++it;
					return (*this);
				}
	
				iterator& operator--()
				{
					--it;
					return (*this);
				}
				
			private:
				typename std::stack<T>::container_type::iterator it;
		};

		void push(const T& value)
		{
			_myStack.push(value);
		}

		void pop()
		{
			_myStack.pop();
		}

		T &top(void)
		{
			return _myStack.top();
		}

		bool empty() const
		{
			return _myStack.empty();
		}

		size_t size() const
		{
			return _myStack.size();
		}

		iterator begin()
		{
			return iterator(_myStack.c.begin());
		}
		
		iterator end()
		{
			return iterator(_myStack.c.end());
		}
	
	private:
		std::stack<T> _myStack;	
};

#endif