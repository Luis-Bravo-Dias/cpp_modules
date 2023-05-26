/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:21:53 by lleiria-          #+#    #+#             */
/*   Updated: 2023/05/26 17:22:37 by lleiria-         ###   ########.fr       */
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

	virtual void makeSound(void) const;
	virtual std::string	getType(void) const;

	protected:
		std::string	type;
};

#endif