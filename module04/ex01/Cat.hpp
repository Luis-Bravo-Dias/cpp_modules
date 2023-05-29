/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:43:33 by lleiria-          #+#    #+#             */
/*   Updated: 2023/05/29 16:52:44 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat	const &src);
		virtual ~Cat(void);
		
		Cat &operator=(Cat const &rhs);

		virtual void makeSound(void) const;
		virtual std::string	getType(void) const;

	private:
		Brain *_brain;
};

#endif