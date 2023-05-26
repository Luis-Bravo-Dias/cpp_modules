/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:45:32 by lleiria-          #+#    #+#             */
/*   Updated: 2023/05/26 15:50:35 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public:
	WrongAnimal(void);
	WrongAnimal(WrongAnimal const &src);
	~WrongAnimal(void);

	WrongAnimal &operator=(WrongAnimal const &rhs);

	void makeSound(void) const;
	std::string	getType(void) const;

	protected:
		std::string	type;
};

#endif