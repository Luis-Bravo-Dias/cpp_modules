/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:22:49 by lleiria-          #+#    #+#             */
/*   Updated: 2023/05/25 17:06:52 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:
	Animal(void);
	Animal(Animal const &src);
	~Animal(void);

	Animal &operator=(Animal const &rhs);

	virtual void makeSound(void);

	protected:
		std::string	type;
};

#endif