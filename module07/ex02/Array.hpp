/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:33:36 by lleiria-          #+#    #+#             */
/*   Updated: 2023/09/07 15:28:46 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	public:
		Array(void) : _array(NULL), _length(0) {}

		Array(unsigned int n) : _length(n)
		{
			this->_array = new T[n]();
		}
		
		Array(Array const &src) :_length(src._length)
		{
			this->_array = new T[_length];
			for (unsigned int i = 0; i < _length; i++)
				this->_array[i] = src._array[i];
		}
		
		~Array(void)
		{
			delete[] this->_array;
		}

		Array &operator=(Array const &rhs)
		{
			if (this != &rhs)
			{
				delete[] this->_array;
				this->_length = rhs._length;
				this->_array = new T[_length];
				for (unsigned int i = 0; i < _length; i++)
					this->_array[i] = rhs._array[i];
			}
			return (*this);
		}

		class OutOfBoundsException :public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return("Is out of bounds");
				}
		};

		T &operator[](unsigned int index)
		{
			if (index >= this->_length)
				throw OutOfBoundsException();
			return (this->_array[index]);
		}

		int	size(void)
		{
			return (this->_length);
		}

	private:
		T *_array;
		unsigned int _length;
};


#endif