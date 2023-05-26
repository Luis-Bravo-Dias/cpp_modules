/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:53:53 by lleiria-          #+#    #+#             */
/*   Updated: 2023/05/26 15:55:18 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
	
class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(WrongCat	const &src);
		~WrongCat(void);
		
		WrongCat &operator=(WrongCat const &rhs);

		void makeSound(void) const;
		std::string	getType(void) const;
};

#endif