/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:17:25 by lleiria-          #+#    #+#             */
/*   Updated: 2023/10/24 13:06:56 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <cassert>

int main(void)
{
	Data d;
	Serializer	s;

	d.data_char = 'c';
	d.data_int = 42;
	d.data_str = "lisboa";
	
	std::cout << "Data before serialization" << std::endl <<
		d.data_char << std::endl << d.data_int << std::endl <<
			d.data_str << std::endl;


	uintptr_t uint = s.serialize(&d);
	Data	*new_d = s.deserialize(uint);

	assert(d.data_char == new_d->data_char);
    assert(d.data_int == new_d->data_int);
    assert(d.data_str == new_d->data_str);
	
	std::cout << std::endl << "Data after serialization" << std::endl <<
		new_d->data_char << std::endl << new_d->data_int << std::endl <<
			new_d->data_str << std::endl;
	return (0);
}